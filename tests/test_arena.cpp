#include <string>

#include "arena.h"
#include "catch2/catch.hpp"
#include "test.h"
#include "memory/arena/arena.hpp"
#include "../proto/arena_models.h"

using stdb::memory::Arena;
using stdb::memory::ArenaContainStatus;

class alloc_class
{
   public:
    alloc_class() : init(static_cast<char*>(malloc(4 * 1024 * 1024))), curr(init) {}
    virtual ~alloc_class() { free(init); }

    virtual auto alloc(uint64_t size) -> void* {
        alloc_sizes.push_back(size);
        void* ret = static_cast<void*>(curr);
        ptrs.push_back(ret);

        curr += size;
        return ret;
    }

    void dealloc(void* ptr) { free_ptrs.push_back(ptr); }

    void reset() {
        alloc_sizes.clear();
        ptrs.clear();
        free_ptrs.clear();
    }

    // private:
    std::vector<uint64_t> alloc_sizes;
    std::vector<void*> ptrs;
    std::vector<void*> free_ptrs;
    char* init{nullptr};
    char* curr{nullptr};
};

class ArenaTest
{
   public:
    Arena::Options ops_simple;

    thread_local static alloc_class* mock;

    static auto mock_alloc(uint64_t size) -> void* { return mock->alloc(size); }

    static void mock_dealloc(void* ptr) { return mock->dealloc(ptr); }

    ArenaTest() {
        // initialize the ops_simple
        ops_simple.block_alloc = &mock_alloc;
        ops_simple.block_dealloc = &mock_dealloc;
        ops_simple.normal_block_size = 1024ULL;
        ops_simple.suggested_init_block_size = 0ULL;
        ops_simple.huge_block_size = 0ULL;
    }

    template <typename Func>
    auto test_fn_with_allocs(Func&& func) {
        mock = new alloc_class;
        auto* arena = new Arena(ops_simple);

        REQUIRE(mock->ptrs.size() == 0);
        REQUIRE(mock->free_ptrs.size() == 0);

        func(*arena);

        delete arena;
        REQUIRE(mock->ptrs.size() != 0);
        REQUIRE(mock->free_ptrs.size() != 0);
        delete mock;
    }
};

thread_local alloc_class* ArenaTest::mock = nullptr;

// 1. template arena simple test
// 2. ptr arena simple test
// 2. ptr import template cstr
// 3. template import template cstr
// 4. ptr import ptr import

// bytes
// vector 
// map,
// struct
// variant and so on

TEST_CASE_METHOD(ArenaTest, "Arena", "[template-based FBE]") {
  test_fn_with_allocs([](Arena& arena) {
    ::arena_common::Expression expr(arena.get_memory_resource());
    expr.keys.reserve(1);
    expr.aliases.reserve(1);

    std::pmr::string name("an alias name", arena.get_memory_resource());
    expr.keys.emplace_back(std::move(name));

    ::arena_common::Alias alias(arena.get_memory_resource());
    alias.name.assign("an alias name 2");
    alias.optr = ::arena_common::Optr::GE;
    expr.aliases.emplace_back(std::move(alias));

    ::arena_common::Alias alias2(arena.get_memory_resource());
    alias2.name.assign("an alias name 3");
    alias2.optr = ::arena_common::Optr::GT;
    expr.alias_int.emplace(24, std::move(alias2));

    auto* line = arena.Create<::arena::Item>();
    line->optr = ::arena_common::Optr::LE;
    line->alias.name.assign("an alias name for line");
    line->alias.optr = ::arena_common::Optr::LT;
    line->alias.expr.emplace<int32_t>(42);
    line->expressions.emplace_back(std::move(expr));

    CHECK_EQ(arena.check(reinterpret_cast<char*>(&line->optr)), ArenaContainStatus::BlockUsed);
    CHECK_EQ(arena.check(reinterpret_cast<char*>(&line->alias)), ArenaContainStatus::BlockUsed);
    CHECK_EQ(arena.check(reinterpret_cast<char*>(&line->expressions)), ArenaContainStatus::BlockUsed);
    CHECK_EQ(arena.check(reinterpret_cast<char*>(&line->aliases_int)), ArenaContainStatus::BlockUsed);

    ::arena_common::Alias alias4(arena.get_memory_resource());
    alias4.name.assign("an alias name 4");
    alias4.optr = ::arena_common::Optr::EQ;
    line->aliases_int.emplace(42, std::move(alias4));

    FBE::arena::ItemModel line_writer;
    size_t serialized_info = line_writer.serialize(*line);
    CHECK_EQ(serialized_info, line_writer.buffer().size());
    CHECK(line_writer.verify());

    FBE::arena::ItemModel line_reader;
    line_reader.attach(line_writer.buffer());
    CHECK(line_reader.verify());

    ::arena::Item copy;
    size_t deserialized_info = line_reader.deserialize(copy);
    CHECK_EQ(deserialized_info, line_reader.buffer().size());

    CHECK_EQ(copy.optr, ::arena_common::Optr::LE);
    CHECK_EQ(copy.alias.name, "an alias name for line");
    CHECK_EQ(copy.alias.optr, ::arena_common::Optr::LT);
    CHECK_EQ(copy.alias.expr.index(), 1);
    CHECK_EQ(std::get<1>(copy.alias.expr), 42);
    CHECK_EQ(copy.aliases_int.size(), 1);
    CHECK_EQ(copy.aliases_int.at(42).name, "an alias name 4");
    CHECK_EQ(copy.aliases_int.at(42).optr, ::arena_common::Optr::EQ);

    CHECK_EQ(copy.expressions.size(), 1);
    auto& expression = copy.expressions.at(0);
    CHECK_EQ(expression.keys.size(), 1);
    CHECK_EQ(expression.keys.at(0), "an alias name");
    CHECK_EQ(expression.aliases.size(), 1);
    CHECK_EQ(expression.aliases.at(0).name, "an alias name 2");
    CHECK_EQ(expression.aliases.at(0).optr, ::arena_common::Optr::GE);
    CHECK_EQ(expression.alias_int.size(), 1);
    CHECK_EQ(expression.alias_int.at(24).name, "an alias name 3");
    CHECK_EQ(expression.alias_int.at(24).optr, ::arena_common::Optr::GT);
  });
}
