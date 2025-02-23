//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: protoex.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

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

#include "proto.h"

namespace protoex {
using namespace FBE;
using namespace ::proto;
} // namespace protoex

namespace FBE {
using namespace ::protoex;
} // namespace FBE

namespace protoex {

enum class OrderSide : uint8_t
{
    buy,
    sell,
    tell,
};

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] OrderSide value);

#if defined(FMT_VERSION)
} template <> struct fmt::formatter<protoex::OrderSide> : formatter<string_view> {}; namespace protoex {
#endif

#if defined(LOGGING_PROTOCOL)
CppLogging::Record& operator<<(CppLogging::Record& record, OrderSide value);
#endif

enum class OrderType : uint8_t
{
    market,
    limit,
    stop,
    stoplimit,
};

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] OrderType value);

#if defined(FMT_VERSION)
} template <> struct fmt::formatter<protoex::OrderType> : formatter<string_view> {}; namespace protoex {
#endif

#if defined(LOGGING_PROTOCOL)
CppLogging::Record& operator<<(CppLogging::Record& record, OrderType value);
#endif

enum class StateEx : uint8_t
{
    unknown = (uint8_t)0x00u,
    invalid = (uint8_t)0x01u,
    initialized = (uint8_t)0x02u,
    calculated = (uint8_t)0x04u,
    broken = (uint8_t)0x08u,
    happy = (uint8_t)0x10u,
    sad = (uint8_t)0x20u,
    good = initialized  |  calculated,
    bad = unknown  |  invalid  |  broken,
};

FBE_ENUM_FLAGS(StateEx)

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] StateEx value);

#if defined(FMT_VERSION)
} template <> struct fmt::formatter<protoex::StateEx> : formatter<string_view> {}; namespace protoex {
#endif

#if defined(LOGGING_PROTOCOL)
CppLogging::Record& operator<<(CppLogging::Record& record, StateEx value);
#endif

struct Order
{
    int32_t id;
    stdb::memory::string symbol;
    ::protoex::OrderSide side;
    ::protoex::OrderType type;
    double price;
    double volume;
    double tp;
    double sl;

    size_t fbe_type() const noexcept { return 1; }

    Order();
    Order(int32_t arg_id, const stdb::memory::string& arg_symbol, const ::protoex::OrderSide& arg_side, const ::protoex::OrderType& arg_type, double arg_price, double arg_volume, double arg_tp, double arg_sl);
    Order(const Order& other) = default;
    Order(Order&& other) = default;
    ~Order() = default;

    Order& operator=(const Order& other) = default;
    Order& operator=(Order&& other) = default;

    bool operator==(const Order& other) const noexcept;
    bool operator!=(const Order& other) const noexcept { return !operator==(other); }
    bool operator<(const Order& other) const noexcept;
    bool operator<=(const Order& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const Order& other) const noexcept { return !operator<=(other); }
    bool operator>=(const Order& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Order& value);

    void swap(Order& other) noexcept;
    friend void swap(Order& value1, Order& value2) noexcept { value1.swap(value2); }
};

} // namespace protoex

#if defined(FMT_VERSION)
template <> struct fmt::formatter<protoex::Order> : formatter<string_view> {};
#endif

template<>
struct std::hash<protoex::Order>
{
    typedef protoex::Order argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        result = result * 31 + std::hash<decltype(value.id)>()(value.id);
        return result;
    }
};

namespace protoex {

struct Balance : public ::proto::Balance
{
    double locked;

    size_t fbe_type() const noexcept { return ::proto::Balance::fbe_type(); }

    Balance();
    Balance(const ::proto::Balance& base, double arg_locked);
    Balance(const Balance& other) = default;
    Balance(Balance&& other) = default;
    ~Balance() = default;

    Balance& operator=(const Balance& other) = default;
    Balance& operator=(Balance&& other) = default;

    bool operator==(const Balance& other) const noexcept;
    bool operator!=(const Balance& other) const noexcept { return !operator==(other); }
    bool operator<(const Balance& other) const noexcept;
    bool operator<=(const Balance& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const Balance& other) const noexcept { return !operator<=(other); }
    bool operator>=(const Balance& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Balance& value);

    void swap(Balance& other) noexcept;
    friend void swap(Balance& value1, Balance& value2) noexcept { value1.swap(value2); }
};

} // namespace protoex

#if defined(FMT_VERSION)
template <> struct fmt::formatter<protoex::Balance> : formatter<string_view> {};
#endif

template<>
struct std::hash<protoex::Balance>
{
    typedef protoex::Balance argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        result = result * 31 + std::hash<::proto::Balance>()(value);
        return result;
    }
};

namespace protoex {

struct Account
{
    int32_t id;
    stdb::memory::string name;
    ::protoex::StateEx state;
    ::protoex::Balance wallet;
    std::optional<::protoex::Balance> asset;
    std::vector<::protoex::Order> orders;

    size_t fbe_type() const noexcept { return 3; }

    Account();
    Account(int32_t arg_id, const stdb::memory::string& arg_name, const ::protoex::StateEx& arg_state, const ::protoex::Balance& arg_wallet, const std::optional<::protoex::Balance>& arg_asset, const std::vector<::protoex::Order>& arg_orders);
    Account(const Account& other) = default;
    Account(Account&& other) = default;
    ~Account() = default;

    Account& operator=(const Account& other) = default;
    Account& operator=(Account&& other) = default;

    bool operator==(const Account& other) const noexcept;
    bool operator!=(const Account& other) const noexcept { return !operator==(other); }
    bool operator<(const Account& other) const noexcept;
    bool operator<=(const Account& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const Account& other) const noexcept { return !operator<=(other); }
    bool operator>=(const Account& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Account& value);

    void swap(Account& other) noexcept;
    friend void swap(Account& value1, Account& value2) noexcept { value1.swap(value2); }
};

} // namespace protoex

#if defined(FMT_VERSION)
template <> struct fmt::formatter<protoex::Account> : formatter<string_view> {};
#endif

template<>
struct std::hash<protoex::Account>
{
    typedef protoex::Account argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        result = result * 31 + std::hash<decltype(value.id)>()(value.id);
        return result;
    }
};

namespace protoex {

struct OrderMessage
{
    ::protoex::Order body;

    size_t fbe_type() const noexcept { return 11; }

    OrderMessage();
    explicit OrderMessage(const ::protoex::Order& arg_body);
    OrderMessage(const OrderMessage& other) = default;
    OrderMessage(OrderMessage&& other) = default;
    ~OrderMessage() = default;

    OrderMessage& operator=(const OrderMessage& other) = default;
    OrderMessage& operator=(OrderMessage&& other) = default;

    bool operator==(const OrderMessage& other) const noexcept;
    bool operator!=(const OrderMessage& other) const noexcept { return !operator==(other); }
    bool operator<(const OrderMessage& other) const noexcept;
    bool operator<=(const OrderMessage& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const OrderMessage& other) const noexcept { return !operator<=(other); }
    bool operator>=(const OrderMessage& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const OrderMessage& value);

    void swap(OrderMessage& other) noexcept;
    friend void swap(OrderMessage& value1, OrderMessage& value2) noexcept { value1.swap(value2); }
};

} // namespace protoex

#if defined(FMT_VERSION)
template <> struct fmt::formatter<protoex::OrderMessage> : formatter<string_view> {};
#endif

template<>
struct std::hash<protoex::OrderMessage>
{
    typedef protoex::OrderMessage argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace protoex {

struct BalanceMessage
{
    ::protoex::Balance body;

    size_t fbe_type() const noexcept { return 12; }

    BalanceMessage();
    explicit BalanceMessage(const ::protoex::Balance& arg_body);
    BalanceMessage(const BalanceMessage& other) = default;
    BalanceMessage(BalanceMessage&& other) = default;
    ~BalanceMessage() = default;

    BalanceMessage& operator=(const BalanceMessage& other) = default;
    BalanceMessage& operator=(BalanceMessage&& other) = default;

    bool operator==(const BalanceMessage& other) const noexcept;
    bool operator!=(const BalanceMessage& other) const noexcept { return !operator==(other); }
    bool operator<(const BalanceMessage& other) const noexcept;
    bool operator<=(const BalanceMessage& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const BalanceMessage& other) const noexcept { return !operator<=(other); }
    bool operator>=(const BalanceMessage& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const BalanceMessage& value);

    void swap(BalanceMessage& other) noexcept;
    friend void swap(BalanceMessage& value1, BalanceMessage& value2) noexcept { value1.swap(value2); }
};

} // namespace protoex

#if defined(FMT_VERSION)
template <> struct fmt::formatter<protoex::BalanceMessage> : formatter<string_view> {};
#endif

template<>
struct std::hash<protoex::BalanceMessage>
{
    typedef protoex::BalanceMessage argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace protoex {

struct AccountMessage
{
    ::protoex::Account body;

    size_t fbe_type() const noexcept { return 13; }

    AccountMessage();
    explicit AccountMessage(const ::protoex::Account& arg_body);
    AccountMessage(const AccountMessage& other) = default;
    AccountMessage(AccountMessage&& other) = default;
    ~AccountMessage() = default;

    AccountMessage& operator=(const AccountMessage& other) = default;
    AccountMessage& operator=(AccountMessage&& other) = default;

    bool operator==(const AccountMessage& other) const noexcept;
    bool operator!=(const AccountMessage& other) const noexcept { return !operator==(other); }
    bool operator<(const AccountMessage& other) const noexcept;
    bool operator<=(const AccountMessage& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const AccountMessage& other) const noexcept { return !operator<=(other); }
    bool operator>=(const AccountMessage& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const AccountMessage& value);

    void swap(AccountMessage& other) noexcept;
    friend void swap(AccountMessage& value1, AccountMessage& value2) noexcept { value1.swap(value2); }
};

} // namespace protoex

#if defined(FMT_VERSION)
template <> struct fmt::formatter<protoex::AccountMessage> : formatter<string_view> {};
#endif

template<>
struct std::hash<protoex::AccountMessage>
{
    typedef protoex::AccountMessage argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace protoex {

} // namespace protoex
