// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: sa.fbe
// Version: 1.7.0.0

#include "sa_ptr.h"

namespace sa {

std::ostream& operator<<(std::ostream& stream, Sex value)
{
    if (value == Sex::male) return stream << "male";
    if (value == Sex::female) return stream << "female";
    return stream << "<unknown>";
}

std::ostream& operator<<(std::ostream& stream, MyFLags value)
{
    if (value == MyFLags::flag0) return stream << "flag0";
    if (value == MyFLags::flag1) return stream << "flag1";
    if (value == MyFLags::flag2) return stream << "flag2";
    return stream << "<unknown>";
}

Extra::Extra()
    : name()
    , detail()
    , sex()
    , flag()
{}

Extra::Extra(const std::string& arg_name, const std::string& arg_detail, ::sa::Sex&& arg_sex, ::sa::MyFLags&& arg_flag)
    : name(arg_name)
    , detail(arg_detail)
    , sex(std::move(arg_sex))
    , flag(std::move(arg_flag))
{}

Extra::Extra(Extra&& other)
    : name(std::move(other.name))
    , detail(std::move(other.detail))
    , sex(std::move(other.sex))
    , flag(std::move(other.flag))
{}

Extra::~Extra()
{
}

bool Extra::operator==([[maybe_unused]] const Extra& other) const noexcept
{
    return (
        true
        );
}

bool Extra::operator<([[maybe_unused]] const Extra& other) const noexcept
{
    return false;
}

Extra& Extra::operator=(Extra&& other)
{
    if (this != &other)
    {
        name = std::move(other.name);
        detail = std::move(other.detail);
        sex = std::move(other.sex);
        flag = std::move(other.flag);
    }
    return *this;
}

void Extra::swap(Extra& other) noexcept
{
    using std::swap;
    swap(name, other.name);
    swap(detail, other.detail);
    swap(sex, other.sex);
    swap(flag, other.flag);
}

std::ostream& operator<<(std::ostream& stream, const Extra& value)
{
    stream << "Extra(";
    stream << "name="; stream << "\"" << value.name << "\"";
    stream << ",detail="; stream << "\"" << value.detail << "\"";
    stream << ",sex="; stream << value.sex;
    stream << ",flag="; stream << value.flag;
    stream << ")";
    return stream;
}

Simple::Simple()
    : name()
    , depth((int32_t)0ll)
    , sa()
    , sex()
{}

Simple::Simple(const std::string& arg_name, int32_t arg_depth, std::array<::sa::Extra, 1> arg_sa, ::sa::Sex&& arg_sex)
    : name(arg_name)
    , depth(arg_depth)
    , sa(std::move(arg_sa))
    , sex(std::move(arg_sex))
{}

Simple::Simple(Simple&& other)
    : name(std::move(other.name))
    , depth(std::exchange(other.depth, (int32_t)0ll))
    , sa(std::move(other.sa))
    , sex(std::move(other.sex))
{}

Simple::~Simple()
{
}

bool Simple::operator==([[maybe_unused]] const Simple& other) const noexcept
{
    return (
        true
        );
}

bool Simple::operator<([[maybe_unused]] const Simple& other) const noexcept
{
    return false;
}

Simple& Simple::operator=(Simple&& other)
{
    if (this != &other)
    {
        name = std::move(other.name);
        depth = std::exchange(other.depth, (int32_t)0ll);
        sa = std::move(other.sa);
        sex = std::move(other.sex);
    }
    return *this;
}

void Simple::swap(Simple& other) noexcept
{
    using std::swap;
    swap(name, other.name);
    swap(depth, other.depth);
    swap(sa, other.sa);
    swap(sex, other.sex);
}

std::ostream& operator<<(std::ostream& stream, const Simple& value)
{
    stream << "Simple(";
    stream << "name="; stream << "\"" << value.name << "\"";
    stream << ",depth="; stream << value.depth;
    {
        bool first = true;
        stream << ",sa=[1][";
        for (size_t i = 0; i < 1; ++i)
        {
            stream << std::string(first ? "" : ",") << value.sa[i];
            first = false;
        }
        stream << "]";
    }
    stream << ",sex="; stream << value.sex;
    stream << ")";
    return stream;
}

Complex::Complex()
    : name()
    , sex()
    , flag()
    , extra()
{}

Complex::Complex(const std::string& arg_name, std::optional<::sa::Sex> arg_sex, std::optional<::sa::MyFLags> arg_flag, std::optional<::sa::Extra> arg_extra)
    : name(arg_name)
    , sex(std::move(arg_sex))
    , flag(std::move(arg_flag))
    , extra(std::move(arg_extra))
{}

Complex::Complex(Complex&& other)
    : name(std::move(other.name))
    , sex(std::move(other.sex))
    , flag(std::move(other.flag))
    , extra(std::move(other.extra))
{}

Complex::~Complex()
{
}

bool Complex::operator==([[maybe_unused]] const Complex& other) const noexcept
{
    return (
        true
        );
}

bool Complex::operator<([[maybe_unused]] const Complex& other) const noexcept
{
    return false;
}

Complex& Complex::operator=(Complex&& other)
{
    if (this != &other)
    {
        name = std::move(other.name);
        sex = std::move(other.sex);
        flag = std::move(other.flag);
        extra = std::move(other.extra);
    }
    return *this;
}

void Complex::swap(Complex& other) noexcept
{
    using std::swap;
    swap(name, other.name);
    swap(sex, other.sex);
    swap(flag, other.flag);
    swap(extra, other.extra);
}

std::ostream& operator<<(std::ostream& stream, const Complex& value)
{
    stream << "Complex(";
    stream << "name="; stream << "\"" << value.name << "\"";
    stream << ",sex="; if (value.sex) stream << *value.sex; else stream << "null";
    stream << ",flag="; if (value.flag) stream << *value.flag; else stream << "null";
    stream << ",extra="; if (value.extra) stream << *value.extra; else stream << "null";
    stream << ")";
    return stream;
}

} // namespace sa
