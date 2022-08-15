// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variants_ptr.fbe
// Version: 1.7.0.0

#pragma once

#ifdef isset
#undef isset
#endif

#if defined(__clang__)
#pragma clang system_header
#elif defined(__GNUC__)
#pragma GCC system_header
#elif defined(_MSC_VER)
#pragma system_header
#endif

#include "fbe.h"

namespace variants_ptr {
using namespace FBE;
} // namespace variants_ptr

namespace FBE {
using namespace ::variants_ptr;
} // namespace FBE

#include "fbe_ptr.h"

namespace variants_ptr {
// forward declaration
struct Simple;
struct Value;
struct ValueContainer;

using Expr = std::variant<bool, int32_t, std::string>;
std::ostream& operator<<(std::ostream& stream, const Expr& value);

using V = std::variant<std::string, int32_t, double, ::variants_ptr::Simple, ::variants_ptr::Simple*, std::vector<::variants_ptr::Simple>, std::vector<int32_t>, std::unordered_map<int32_t, ::variants_ptr::Simple>, std::vector<FBE::buffer_t>, std::vector<std::string>, std::unordered_map<int32_t, FBE::buffer_t>, std::unordered_map<std::string, FBE::buffer_t>, std::vector<::variants_ptr::Simple*>, ::variants_ptr::Expr>;
std::ostream& operator<<(std::ostream& stream, const V& value);

struct Simple : FBE::Base
{
    std::string name;

    size_t fbe_type() const noexcept { return 1; }

    Simple();
    explicit Simple(const std::string& arg_name);
    Simple(const Simple& other) = delete;
    Simple(Simple&& other) noexcept;
    ~Simple() override;

    Simple& operator=(const Simple& other) = delete;
    Simple& operator=(Simple&& other) noexcept;

    bool operator==(const Simple& other) const noexcept;
    bool operator!=(const Simple& other) const noexcept { return !operator==(other); }
    bool operator<(const Simple& other) const noexcept;
    bool operator<=(const Simple& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const Simple& other) const noexcept { return !operator<=(other); }
    bool operator>=(const Simple& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, const Simple& value);

    void swap(Simple& other) noexcept;
    friend void swap(Simple& value1, Simple& value2) noexcept { value1.swap(value2); }
};

} // namespace variants_ptr

namespace std {

template<>
struct hash<variants_ptr::Simple>
{
    typedef variants_ptr::Simple argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

} // namespace std

namespace variants_ptr {

struct Value : FBE::Base
{
    ::variants_ptr::V v;

    size_t fbe_type() const noexcept { return 2; }

    Value();
    explicit Value(::variants_ptr::V&& arg_v);
    Value(const Value& other) = delete;
    Value(Value&& other) noexcept;
    ~Value() override;

    Value& operator=(const Value& other) = delete;
    Value& operator=(Value&& other) noexcept;

    bool operator==(const Value& other) const noexcept;
    bool operator!=(const Value& other) const noexcept { return !operator==(other); }
    bool operator<(const Value& other) const noexcept;
    bool operator<=(const Value& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const Value& other) const noexcept { return !operator<=(other); }
    bool operator>=(const Value& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, const Value& value);

    void swap(Value& other) noexcept;
    friend void swap(Value& value1, Value& value2) noexcept { value1.swap(value2); }
};

} // namespace variants_ptr

namespace std {

template<>
struct hash<variants_ptr::Value>
{
    typedef variants_ptr::Value argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

} // namespace std

namespace variants_ptr {

struct ValueContainer : FBE::Base
{
    std::vector<::variants_ptr::V> vv;
    std::unordered_map<int32_t, ::variants_ptr::V> vm;

    size_t fbe_type() const noexcept { return 3; }

    ValueContainer();
    ValueContainer(std::vector<::variants_ptr::V> arg_vv, std::unordered_map<int32_t, ::variants_ptr::V> arg_vm);
    ValueContainer(const ValueContainer& other) = delete;
    ValueContainer(ValueContainer&& other) noexcept;
    ~ValueContainer() override;

    ValueContainer& operator=(const ValueContainer& other) = delete;
    ValueContainer& operator=(ValueContainer&& other) noexcept;

    bool operator==(const ValueContainer& other) const noexcept;
    bool operator!=(const ValueContainer& other) const noexcept { return !operator==(other); }
    bool operator<(const ValueContainer& other) const noexcept;
    bool operator<=(const ValueContainer& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const ValueContainer& other) const noexcept { return !operator<=(other); }
    bool operator>=(const ValueContainer& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, const ValueContainer& value);

    void swap(ValueContainer& other) noexcept;
    friend void swap(ValueContainer& value1, ValueContainer& value2) noexcept { value1.swap(value2); }
};

} // namespace variants_ptr

namespace std {

template<>
struct hash<variants_ptr::ValueContainer>
{
    typedef variants_ptr::ValueContainer argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

} // namespace std

namespace variants_ptr {

} // namespace variants_ptr
