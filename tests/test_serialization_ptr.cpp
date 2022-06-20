//
// Created by Ivan Shynkarenka on 09.07.2018
//

#include "catch2/catch.hpp"
#include "extra_ptr.h"
#include "osa.h"
#include "pkg_ptr.h"
#include "sa_ptr.h"
#include "test.h"

#include "../proto/simple_ptr_models.h"
#include "../proto/extra_ptr_models.h"
#include "../proto/sa_ptr_models.h"
#include "../proto/osa_models.h"
#include "../proto/pkg_ptr_models.h"
#include <memory>
#include <utility>

TEST_CASE("Serialization (simple self-reference)", "[Ptr-based FBE]")
{
    std::vector<std::unique_ptr<::simple::Simple>> v;
    v.push_back(std::make_unique<::simple::Simple>(::simple::Simple(
        "v-info", nullptr, 1024, std::vector<std::unique_ptr<::simple::Simple>>(),
        std::vector<::simple::Simple>(),
        std::map<int32_t, std::unique_ptr<::simple::Simple>>(),
        std::map<int32_t, ::simple::Simple>())));

    auto simplep = std::make_unique<::simple::Simple>(
        ::simple::Simple(
            "single-info", nullptr, 2048,
            std::vector<std::unique_ptr<::simple::Simple>>(),
            std::vector<::simple::Simple>(),
            std::map<int32_t, std::unique_ptr<::simple::Simple>>(),
            std::map<int32_t, ::simple::Simple>()
        )
    );
    std::map<int32_t, std::unique_ptr<::simple::Simple>> pm;
    pm.emplace(std::make_pair(2048, std::move(simplep)));

    ::simple::Simple original = {
        "info",
        std::make_unique<::simple::Simple>(
            "info 1",
            std::make_unique<::simple::Simple>(::simple::Simple(
                "info 2",
                std::make_unique<::simple::Simple>(::simple::Simple(
                    "info 3",
                    std::make_unique<::simple::Simple>( 
                        "info 4", nullptr, 4, std::move(v),
                        std::vector<::simple::Simple>(),
                        std::map<int32_t, std::unique_ptr<::simple::Simple>>(),
                        std::map<int32_t, ::simple::Simple>()
                    ),
                    3, std::vector<std::unique_ptr<::simple::Simple>>(),
                    std::vector<::simple::Simple>(),
                    std::map<int32_t, std::unique_ptr<::simple::Simple>>(),
                    std::map<int32_t, ::simple::Simple>())),
                2, std::vector<std::unique_ptr<::simple::Simple>>(),
                std::vector<::simple::Simple>(),
                std::map<int32_t, std::unique_ptr<::simple::Simple>>(),
                std::map<int32_t, ::simple::Simple>())),
            1, std::vector<std::unique_ptr<::simple::Simple>>(),
            std::vector<::simple::Simple>(),
            std::map<int32_t, std::unique_ptr<::simple::Simple>>(),
            std::map<int32_t, ::simple::Simple>()),
        10,
        {},
        {},
        std::move(pm),
        std::map<int32_t, ::simple::Simple>()};

    ::simple::Simple simple = std::move(original);
    REQUIRE(original.simple == nullptr);

    FBE::simple::SimpleModel writer; 
    size_t serialized = writer.serialize(simple);
    REQUIRE(serialized == writer.buffer().size());
    REQUIRE(writer.verify());
    
    FBE::simple::SimpleModel reader;
    reader.attach(writer.buffer());
    REQUIRE(reader.verify());

    simple::Simple copy;
    size_t deserialized = reader.deserialize(copy);
    REQUIRE(deserialized == reader.buffer().size());

    REQUIRE(copy.info =="info");
    REQUIRE(copy.simple != nullptr);
    REQUIRE(copy.simple->info == "info 1");
    REQUIRE(copy.simple->simple != nullptr);
    REQUIRE(copy.simple->simple->info == "info 2");
    REQUIRE(copy.simple->simple->simple != nullptr);
    REQUIRE(copy.simple->simple->simple->info == "info 3");
    REQUIRE(copy.simple->simple->simple->simple != nullptr);
    REQUIRE(copy.simple->simple->simple->simple->info == "info 4");
    REQUIRE(copy.simple->simple->simple->simple->simple == nullptr);
    REQUIRE(copy.simple->simple->simple->simple->depth == 4);
    REQUIRE(copy.simple->simple->simple->simple->spv.size() == 1);
    REQUIRE(copy.simple->simple->simple->simple->spv[0]->info == "v-info");
    REQUIRE(copy.simple->simple->simple->simple->spv[0]->simple == nullptr);
    REQUIRE(copy.simple->simple->simple->simple->spv[0]->depth == 1024);
    REQUIRE(copy.simple->simple->simple->simple->spv[0]->spv.empty());
    REQUIRE(copy.simple->simple->simple->simple->spv[0]->sv.empty());
    REQUIRE(copy.simple->simple->simple->simple->spv[0]->spm.empty());
    REQUIRE(copy.simple->simple->simple->simple->spv[0]->sm.empty());
    REQUIRE(copy.simple->simple->simple->simple->sv.empty());
    REQUIRE(copy.simple->simple->simple->simple->spm.empty());
    REQUIRE(copy.simple->simple->simple->simple->sm.empty());
    REQUIRE(copy.simple->simple->simple->depth == 3);
    REQUIRE(copy.simple->simple->simple->spv.empty());
    REQUIRE(copy.simple->simple->simple->sv.empty());
    REQUIRE(copy.simple->simple->simple->spm.empty());
    REQUIRE(copy.simple->simple->simple->sm.empty());
    REQUIRE(copy.simple->simple->depth == 2);
    REQUIRE(copy.simple->simple->spv.empty());
    REQUIRE(copy.simple->simple->sv.empty());
    REQUIRE(copy.simple->simple->spm.empty());
    REQUIRE(copy.simple->simple->sm.empty());
    REQUIRE(copy.simple->depth == 1);
    REQUIRE(copy.simple->spv.empty());
    REQUIRE(copy.simple->sv.empty());
    REQUIRE(copy.simple->spm.empty());
    REQUIRE(copy.simple->sm.empty());
    REQUIRE(copy.depth == 10);
    REQUIRE(copy.spv.empty());
    REQUIRE(copy.sv.empty());
    REQUIRE(copy.spm.size() == 1);
    REQUIRE(copy.spm[2048]->info == "single-info");
    REQUIRE(copy.spm[2048]->simple == nullptr);
    REQUIRE(copy.spm[2048]->depth == 2048);
    REQUIRE(copy.spm[2048]->spv.empty());
    REQUIRE(copy.spm[2048]->sv.empty());
    REQUIRE(copy.spm[2048]->spm.empty());
    REQUIRE(copy.spm[2048]->sm.empty());
    REQUIRE(copy.sm.empty());
}

TEST_CASE("Serialization (extra circular-dependency)", "[Ptr-based FBE]")
{
    ::extra::Info &&embedded_info = {
        "embedded-struct-info3-data", nullptr, {}, {}};
    ::extra::Info &&embedded_info2 = {
        "embedded-struct-info3-data2", nullptr, {}, {}};
    ::extra::Info &&embedded_info3 = {
        "v-info-data",
        std::make_unique<::extra::Extra>(
            2, "v-extra-in-vector",
            std::make_unique<::extra::Info>(
                ::extra::Info("v-embedded-struct-info-data", nullptr, {}, {})),
            std::make_unique<::extra::Info>(
                ::extra::Info("v-embedded-struct-info2-data", nullptr, {}, {})),
            std::move(embedded_info), std::vector<::extra::Info>(),
            std::vector<std::unique_ptr<::extra::Info>>(),
            std::list<::extra::Info>(),
            std::list<std::unique_ptr<::extra::Info>>()),
        {},
        {}};
    std::vector<::extra::Info> v;
    std::vector<std::unique_ptr<::extra::Info>> pv;
    v.emplace_back(std::move(embedded_info3));
    pv.emplace_back(std::make_unique<::extra::Info>(::extra::Info(
        "pv-info-data",
        std::make_unique<::extra::Extra>(
            20, "pv-extra",
            std::make_unique<::extra::Info>(
                ::extra::Info("pv-embedded-struct-info-data", nullptr, {}, {})),
            std::make_unique<::extra::Info>(
                ::extra::Info("pv-embedded-struct-info2-data", nullptr, {}, {})),
            std::move(embedded_info2), std::vector<::extra::Info>(),
            std::vector<std::unique_ptr<::extra::Info>>(),
            std::list<::extra::Info>(),
            std::list<std::unique_ptr<::extra::Info>>()),
        {}, {})));

    ::extra::Extra extra = {
        1,
        "root-extra",
        std::make_unique<::extra::Info>(
            ::extra::Info{"info-data", nullptr, {}, {}}),
        std::make_unique<::extra::Info>(
            ::extra::Info{"info2-data", nullptr, {}, {}}),
        {"info3-data", nullptr, {}, {}},
        std::move(v),
        std::move(pv),
        std::list<::extra::Info>(),
        std::list<std::unique_ptr<::extra::Info>>(),
    };

    ::FBE::extra::ExtraModel writer;
    size_t serialized = writer.serialize(extra);
    REQUIRE(serialized == writer.buffer().size());
    REQUIRE(writer.verify());


    FBE::extra::ExtraModel reader;
    reader.attach(writer.buffer());
    REQUIRE(reader.verify());

    extra::Extra copy;
    size_t deserialized = reader.deserialize(copy);
    REQUIRE(deserialized == reader.buffer().size());
    assert(reader.verify());

    REQUIRE(copy.num == 1);
    REQUIRE(copy.data == "root-extra");
    REQUIRE(copy.info != nullptr);
    REQUIRE(copy.info->info == "info-data");
    REQUIRE(copy.info->extra == nullptr);
    REQUIRE(copy.info->extras.empty());
    REQUIRE(copy.info->extras1.empty());
    REQUIRE(copy.info2 != nullptr);
    REQUIRE(copy.info2->info == "info2-data");
    REQUIRE(copy.info2->extra == nullptr);
    REQUIRE(copy.info2->extras.empty());
    REQUIRE(copy.info2->extras1.empty());
    REQUIRE(copy.info3.info == "info3-data");
    REQUIRE(copy.info3.extra == nullptr);
    REQUIRE(copy.info3.extras.empty());
    REQUIRE(copy.info3.extras1.empty());
    REQUIRE(copy.infov.size() == 1);
    REQUIRE(copy.infov[0].info == "v-info-data");
    REQUIRE(copy.infov[0].extra != nullptr);
    REQUIRE(copy.infov[0].extra->num == 2);
    REQUIRE(copy.infov[0].extra->data == "v-extra-in-vector");
    REQUIRE(copy.infov[0].extra->info != nullptr);
    REQUIRE(copy.infov[0].extra->info->info == "v-embedded-struct-info-data");
    REQUIRE(copy.infov[0].extra->info2->info == "v-embedded-struct-info2-data");
    REQUIRE(copy.infov[0].extra->info2 != nullptr);
    REQUIRE(copy.infov[0].extra->info3.info == "embedded-struct-info3-data");
    REQUIRE(copy.infov[0].extra->info3.extra == nullptr);
    REQUIRE(copy.infov[0].extra->info3.extras.empty());
    REQUIRE(copy.infov[0].extra->info3.extras1.empty());
    REQUIRE(copy.infov[0].extra->infov.empty());
    REQUIRE(copy.infov[0].extra->infopv.empty());
    REQUIRE(copy.infov[0].extra->infol.empty());
    REQUIRE(copy.infov[0].extra->infopl.empty());
    REQUIRE(copy.infov[0].extras.empty());
    REQUIRE(copy.infov[0].extras1.empty());
    REQUIRE(copy.infopv.size() == 1);
    REQUIRE(copy.infopv[0]->info == "pv-info-data");
    REQUIRE(copy.infopv[0]->extra != nullptr);
    REQUIRE(copy.infopv[0]->extra->num == 20);
    REQUIRE(copy.infopv[0]->extra->data == "pv-extra");
    REQUIRE(copy.infopv[0]->extra->info != nullptr);
    REQUIRE(copy.infopv[0]->extra->info->info == "pv-embedded-struct-info-data");
    REQUIRE(copy.infopv[0]->extra->info2 != nullptr);
    REQUIRE(copy.infopv[0]->extra->info2->info == "pv-embedded-struct-info2-data");
    REQUIRE(copy.infopv[0]->extra->info3.info == "embedded-struct-info3-data2");
    REQUIRE(copy.infopv[0]->extra->info3.extra == nullptr);
    REQUIRE(copy.infopv[0]->extra->info3.extras.empty());
    REQUIRE(copy.infopv[0]->extra->info3.extras1.empty());
    REQUIRE(copy.infopv[0]->extra->infov.empty());
    REQUIRE(copy.infopv[0]->extra->infopv.empty());
    REQUIRE(copy.infopv[0]->extra->infol.empty());
    REQUIRE(copy.infopv[0]->extra->infopl.empty());
    REQUIRE(copy.infopv[0]->extras.empty());
    REQUIRE(copy.infopv[0]->extras1.empty());
    REQUIRE(copy.infol.empty());
    REQUIRE(copy.infopl.empty());
}

TEST_CASE("Serilization (identical with templated-based code without ptr)", "[Ptr-based FBE]")
{
    ::std::array<::osa::Extra, 1> osa_v = {::osa::Extra(std::string("extra"), "detail", ::osa::Sex::male, ::osa::MyFLags::flag1)};
    ::osa::Simple osa = {
        "original",
        12,
        osa_v,
        ::osa::Sex::male,
    };

    FBE::osa::SimpleModel osa_writer;
    size_t serialized_osa = osa_writer.serialize(osa);
    REQUIRE(serialized_osa == osa_writer.buffer().size());
    REQUIRE(osa_writer.verify());

    ::std::array<::sa::Extra, 1> sa_v = {::sa::Extra(std::string("extra"), "detail", ::sa::Sex::male, ::sa::MyFLags::flag1)};
    ::sa::Simple sa = {
        "original",
        12,
        std::move(sa_v),
        ::sa::Sex::male,
    };

    FBE::sa::SimpleModel sa_writer;
    size_t serialized_sa = sa_writer.serialize(sa);
    REQUIRE(serialized_sa == sa_writer.buffer().size());
    REQUIRE(sa_writer.verify());

    REQUIRE(serialized_osa == serialized_sa);

    FBE::sa::SimpleModel sa_reader;
    sa_reader.attach(sa_writer.buffer());
    REQUIRE(sa_reader.verify());

    ::sa::Simple sa_copy;
    size_t deserialized_sa = sa_reader.deserialize(sa_copy);
    REQUIRE(deserialized_sa == sa_reader.buffer().size());
    assert(sa_reader.verify());

    FBE::osa::SimpleModel osa_reader;
    osa_reader.attach(osa_writer.buffer());
    REQUIRE(osa_reader.verify());

    ::osa::Simple osa_copy;
    size_t deserialized_osa = osa_reader.deserialize(osa_copy);
    REQUIRE(deserialized_osa == osa_reader.buffer().size());
    assert(osa_reader.verify());

    REQUIRE(deserialized_osa == deserialized_sa);
    REQUIRE(deserialized_osa == osa_reader.buffer().size());
    REQUIRE(deserialized_sa == sa_reader.buffer().size());

    REQUIRE(sa_copy.name == osa_copy.name);
    REQUIRE(sa_copy.depth == osa_copy.depth);
    REQUIRE(sa_copy.sa[0].name == osa_copy.sa[0].name);
    REQUIRE(sa_copy.sa[0].name == "extra");
    REQUIRE(sa_copy.sa[0].detail == osa_copy.sa[0].detail);
    REQUIRE(sa_copy.sa[0].detail == "detail");
    REQUIRE(sa_copy.sa[0].sex == ::sa::Sex::male);
    REQUIRE(osa_copy.sa[0].flag == ::osa::MyFLags::flag1);
    REQUIRE(sa_copy.sa[0].flag == ::sa::MyFLags::flag1);
    REQUIRE(osa_copy.sa[0].sex == ::osa::Sex::male);
    REQUIRE(sa_copy.sex == sa::Sex::male);
    REQUIRE(osa_copy.sex == osa::Sex::male);

}


TEST_CASE("Serialization (optional)", "[Ptr-based FBE]") {
    ::sa::Complex c1 = {
        "test optional",
        std::make_optional<::sa::Sex>(::sa::Sex::male),
        std::make_optional<::sa::MyFLags>(::sa::MyFLags::flag1),
        std::nullopt,
        {123}
    };

    FBE::sa::ComplexModel c_writer;
    size_t serialized_c = c_writer.serialize(c1);
    REQUIRE(serialized_c == c_writer.buffer().size());
    REQUIRE(c_writer.verify());

    FBE::sa::ComplexModel c_reader;
    c_reader.attach(c_writer.buffer());
    REQUIRE(c_reader.verify());

    ::sa::Complex copy;
    size_t deserialized_c = c_reader.deserialize(copy);
    REQUIRE(deserialized_c == c_reader.buffer().size());
    assert(c_reader.verify());

    REQUIRE(copy.name == "test optional");
    REQUIRE(copy.sex.has_value());
    REQUIRE(copy.sex.value() == ::sa::Sex::male);
    REQUIRE(copy.flag.has_value());
    REQUIRE(copy.flag.value() == ::sa::MyFLags::flag1);
    REQUIRE(!copy.extra.has_value());

    c1.extra = std::make_optional<::sa::Extra>(::sa::Extra("extra", "detail",::sa::Sex::female, ::sa::MyFLags::flag2));

    c_writer.reset();
    c_reader.reset();
    size_t serialized_c1 = c_writer.serialize(c1);
    REQUIRE(serialized_c1 == c_writer.buffer().size());
    REQUIRE(c_writer.verify());
    REQUIRE(serialized_c1 > serialized_c);

    c_reader.attach(c_writer.buffer());

    ::sa::Complex c1_copy;
    size_t deserialized_c1 = c_reader.deserialize(c1_copy);
    REQUIRE(deserialized_c1 == c_reader.buffer().size());
    assert(c_reader.verify());

    REQUIRE(deserialized_c1 == serialized_c1);

    REQUIRE(c1_copy.name == "test optional");
    REQUIRE(c1_copy.sex.has_value());
    REQUIRE(c1_copy.sex.value() == ::sa::Sex::male);
    REQUIRE(c1_copy.flag.has_value());
    REQUIRE(c1_copy.flag.value() == ::sa::MyFLags::flag1);
    REQUIRE(c1_copy.extra.has_value());
    REQUIRE(c1_copy.extra->name == "extra");
    REQUIRE(c1_copy.extra->detail == "detail");
    REQUIRE(c1_copy.extra->sex == ::sa::Sex::female);
    REQUIRE(c1_copy.extra->flag == ::sa::MyFLags::flag2);
    REQUIRE(c1_copy.nums.size() == 1);
    REQUIRE(c1_copy.nums[0] == 123);
}


TEST_CASE("Serialization (ptr-based import templated-based fbe)", "[Ptr-based FBE]") {
    ::osa::Extra extra(std::string("extra"), "detail", ::osa::Sex::male, ::osa::MyFLags::flag1);

    ::pkg::Info&& pkg_info = {
        "pkg_info", ::osa::Sex::male, ::osa::MyFLags::flag2,  std::move(extra)
    };

    FBE::pkg::InfoModel info_writer;
    size_t serialized_info = info_writer.serialize(pkg_info);
    REQUIRE(serialized_info == info_writer.buffer().size());
    REQUIRE(info_writer.verify());

    FBE::pkg::InfoModel info_reader;
    info_reader.attach(info_writer.buffer());
    REQUIRE(info_reader.verify());

    ::pkg::Info pkg_info_copy;
    size_t deserialized_info = info_reader.deserialize(pkg_info_copy);
    REQUIRE(deserialized_info == info_reader.buffer().size());
    assert(info_reader.verify());

    REQUIRE(pkg_info_copy.info == pkg_info.info);
    REQUIRE(pkg_info_copy.sex == pkg_info_copy.sex);
    REQUIRE(pkg_info_copy.flag == pkg_info.flag);
    REQUIRE(pkg_info_copy.extra.name == pkg_info.extra.name);
    REQUIRE(pkg_info_copy.extra.detail == pkg_info.extra.detail);
    REQUIRE(pkg_info_copy.extra.sex == pkg_info.extra.sex);
    REQUIRE(pkg_info_copy.extra.flag == pkg_info.extra.flag);

    ::pkg::Detail detail;
    detail.extram.emplace(1, std::move(pkg_info.extra));
    detail.extrav.emplace_back(std::move(pkg_info_copy.extra));

    FBE::pkg::DetailModel detail_writer;
    size_t serialized_detail = detail_writer.serialize(detail);
    REQUIRE(serialized_detail == detail_writer.buffer().size());
    REQUIRE(detail_writer.verify());

    FBE::pkg::DetailModel detail_reader;
    detail_reader.attach(detail_writer.buffer());
    REQUIRE(detail_reader.verify());

    ::pkg::Detail detail_copy;
    size_t deserialized_detail = detail_reader.deserialize(detail_copy);
    REQUIRE(deserialized_detail == detail_reader.buffer().size());
    assert(detail_reader.verify());

    REQUIRE(detail_copy.extram.size() == 1);
    REQUIRE(detail_copy.extram.at(1).name == "extra");
    REQUIRE(detail_copy.extram.at(1).detail == "detail");
    REQUIRE(detail_copy.extram.at(1).sex == ::osa::Sex::male);
    REQUIRE(detail_copy.extram.at(1).flag == ::osa::MyFLags::flag1);

    REQUIRE(detail_copy.extrav.size() == 1);
    REQUIRE(detail_copy.extrav.at(0).name == "extra");
    REQUIRE(detail_copy.extrav.at(0).detail == "detail");
    REQUIRE(detail_copy.extrav.at(0).sex == ::osa::Sex::male);
    REQUIRE(detail_copy.extrav.at(0).flag == ::osa::MyFLags::flag1);
}
