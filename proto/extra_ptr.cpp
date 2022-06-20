// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: extra.fbe
// Version: 1.7.0.0

#include "extra_ptr.h"

namespace extra {

Info::Info()
    : info()
    , extra(nullptr)
    , extras()
    , extras1()
{}

Info::Info(const std::string& arg_info, std::unique_ptr<::extra::Extra> arg_extra, std::vector<std::unique_ptr<::extra::Extra>> arg_extras, std::vector<std::unique_ptr<::extra::Extra>> arg_extras1)
    : info(arg_info)
    , extra(arg_extra.release())
    , extras()
    , extras1()
{
    for (auto& it : arg_extras)
        extras.emplace_back(it.release());
    for (auto& it : arg_extras1)
        extras1.emplace_back(it.release());
}

Info::Info(Info&& other) noexcept
    : info(std::move(other.info))
    , extra(std::exchange(other.extra, nullptr))
    , extras(std::move(other.extras))
    , extras1(std::move(other.extras1))
{}

Info::~Info()
{
    if (extra) delete extra;
    for (auto& it : extras)
        delete it;
    for (auto& it : extras1)
        delete it;
}

bool Info::operator==([[maybe_unused]] const Info& other) const noexcept
{
    return (
        true
        );
}

bool Info::operator<([[maybe_unused]] const Info& other) const noexcept
{
    return false;
}

Info& Info::operator=(Info&& other) noexcept
{
    if (this != &other)
    {
        info = std::move(other.info);
        extra = std::exchange(other.extra, nullptr);
        extras = std::move(other.extras);
        extras1 = std::move(other.extras1);
    }
    return *this;
}

void Info::swap(Info& other) noexcept
{
    using std::swap;
    swap(info, other.info);
    swap(extra, other.extra);
    swap(extras, other.extras);
    swap(extras1, other.extras1);
}

std::ostream& operator<<(std::ostream& stream, const Info& value)
{
    stream << "Info(";
    stream << "info="; stream << "\"" << value.info << "\"";
    stream << ",extra="; stream << " ptr of other struct" << (value.extra == nullptr ? "true" : "false");
    {
        bool first = true;
        stream << ",extras=[" << value.extras.size() << "][";
        for (const auto& it : value.extras)
        {
            stream << std::string(first ? "" : ",") << " ptr of other struct" << (it == nullptr ? "true" : "false");
            first = false;
        }
        stream << "]";
    }
    {
        bool first = true;
        stream << ",extras1=[" << value.extras1.size() << "][";
        for (const auto& it : value.extras1)
        {
            stream << std::string(first ? "" : ",") << " ptr of other struct" << (it == nullptr ? "true" : "false");
            first = false;
        }
        stream << "]";
    }
    stream << ")";
    return stream;
}

Extra::Extra()
    : num((int64_t)0ll)
    , data()
    , info(nullptr)
    , info2(nullptr)
    , info3()
    , infov()
    , infopv()
    , infol()
    , infopl()
{}

Extra::Extra(int64_t arg_num, const std::string& arg_data, std::unique_ptr<::extra::Info> arg_info, std::unique_ptr<::extra::Info> arg_info2, ::extra::Info&& arg_info3, std::vector<::extra::Info> arg_infov, std::vector<std::unique_ptr<::extra::Info>> arg_infopv, std::list<::extra::Info> arg_infol, std::list<std::unique_ptr<::extra::Info>> arg_infopl)
    : num(arg_num)
    , data(arg_data)
    , info(arg_info.release())
    , info2(arg_info2.release())
    , info3(std::move(arg_info3))
    , infov(std::move(arg_infov))
    , infopv()
    , infol(std::move(arg_infol))
    , infopl()
{
    for (auto& it : arg_infopv)
        infopv.emplace_back(it.release());
    for (auto& it : arg_infopl)
        infopl.emplace_back(it.release());
}

Extra::Extra(Extra&& other) noexcept
    : num(std::exchange(other.num, (int64_t)0ll))
    , data(std::move(other.data))
    , info(std::exchange(other.info, nullptr))
    , info2(std::exchange(other.info2, nullptr))
    , info3(std::move(other.info3))
    , infov(std::move(other.infov))
    , infopv(std::move(other.infopv))
    , infol(std::move(other.infol))
    , infopl(std::move(other.infopl))
{}

Extra::~Extra()
{
    if (info) delete info;
    if (info2) delete info2;
    for (auto& it : infopv)
        delete it;
    for (auto& it : infopl)
        delete it;
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

Extra& Extra::operator=(Extra&& other) noexcept
{
    if (this != &other)
    {
        num = std::exchange(other.num, (int64_t)0ll);
        data = std::move(other.data);
        info = std::exchange(other.info, nullptr);
        info2 = std::exchange(other.info2, nullptr);
        info3 = std::move(other.info3);
        infov = std::move(other.infov);
        infopv = std::move(other.infopv);
        infol = std::move(other.infol);
        infopl = std::move(other.infopl);
    }
    return *this;
}

void Extra::swap(Extra& other) noexcept
{
    using std::swap;
    swap(num, other.num);
    swap(data, other.data);
    swap(info, other.info);
    swap(info2, other.info2);
    swap(info3, other.info3);
    swap(infov, other.infov);
    swap(infopv, other.infopv);
    swap(infol, other.infol);
    swap(infopl, other.infopl);
}

std::ostream& operator<<(std::ostream& stream, const Extra& value)
{
    stream << "Extra(";
    stream << "num="; stream << value.num;
    stream << ",data="; stream << "\"" << value.data << "\"";
    stream << ",info="; stream << " ptr of other struct" << (value.info == nullptr ? "true" : "false");
    stream << ",info2="; stream << " ptr of other struct" << (value.info2 == nullptr ? "true" : "false");
    stream << ",info3="; stream << value.info3;
    {
        bool first = true;
        stream << ",infov=[" << value.infov.size() << "][";
        for (const auto& it : value.infov)
        {
            stream << std::string(first ? "" : ",") << it;
            first = false;
        }
        stream << "]";
    }
    {
        bool first = true;
        stream << ",infopv=[" << value.infopv.size() << "][";
        for (const auto& it : value.infopv)
        {
            stream << std::string(first ? "" : ",") << " ptr of other struct" << (it == nullptr ? "true" : "false");
            first = false;
        }
        stream << "]";
    }
    {
        bool first = true;
        stream << ",infol=[" << value.infol.size()<< "]<";
        for (const auto& it : value.infol)
        {
            stream << std::string(first ? "" : ",") << it;
            first = false;
        }
        stream << ">";
    }
    {
        bool first = true;
        stream << ",infopl=[" << value.infopl.size()<< "]<";
        for (const auto& it : value.infopl)
        {
            stream << std::string(first ? "" : ",") << " ptr of other struct" << (it == nullptr ? "true" : "false");
            first = false;
        }
        stream << ">";
    }
    stream << ")";
    return stream;
}

} // namespace extra
