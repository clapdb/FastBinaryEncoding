// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: protoex.fbe
// Version: 1.8.0.0

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

#include "fbe_final_models.h"

#include "protoex.h"

#include "proto_final_models.h"

namespace FBE {

// Fast Binary Encoding ::protoex::OrderSide final model
template <>
class FinalModel<::protoex::OrderSide> : public FinalModelBase<::protoex::OrderSide, uint8_t>
{
public:
    using FinalModelBase<::protoex::OrderSide, uint8_t>::FinalModelBase;
};

// Fast Binary Encoding ::protoex::OrderType final model
template <>
class FinalModel<::protoex::OrderType> : public FinalModelBase<::protoex::OrderType, uint8_t>
{
public:
    using FinalModelBase<::protoex::OrderType, uint8_t>::FinalModelBase;
};

// Fast Binary Encoding ::protoex::StateEx final model
template <>
class FinalModel<::protoex::StateEx> : public FinalModelBase<::protoex::StateEx, uint8_t>
{
public:
    using FinalModelBase<::protoex::StateEx, uint8_t>::FinalModelBase;
};

// Fast Binary Encoding ::protoex::Order final model
template <>
class FinalModel<::protoex::Order>
{
public:
    FinalModel(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the allocation size
    size_t fbe_allocation_size(const ::protoex::Order& fbe_value) const noexcept;
    // Get the final offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Set the final offset
    size_t fbe_offset(size_t offset) const noexcept { return _offset = offset; }
    // Get the final type
    static constexpr size_t fbe_type() noexcept { return 1; }

    // Shift the current final offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current final offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    size_t verify() const noexcept;
    // Check if the struct fields are valid
    size_t verify_fields() const noexcept;

    // Get the struct value
    size_t get(::protoex::Order& fbe_value) const noexcept;
    // Get the struct fields values
    size_t get_fields(::protoex::Order& fbe_value) const noexcept;

    // Set the struct value
    size_t set(const ::protoex::Order& fbe_value) noexcept;
    // Set the struct fields values
    size_t set_fields(const ::protoex::Order& fbe_value) noexcept;

private:
    FBEBuffer& _buffer;
    mutable size_t _offset;

public:
    FinalModel<int32_t> id;
    FinalModel<std::string> symbol;
    FinalModel<::protoex::OrderSide> side;
    FinalModel<::protoex::OrderType> type;
    FinalModel<double> price;
    FinalModel<double> volume;
    FinalModel<double> tp;
    FinalModel<double> sl;
};

namespace protoex {

// Fast Binary Encoding Order final model
class OrderFinalModel : public FBE::Model
{
public:
    OrderFinalModel() : _model(this->buffer(), 8) {}
    OrderFinalModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), _model(this->buffer(), 8) {}

    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::protoex::Order>::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Serialize the struct value
    size_t serialize(const ::protoex::Order& value);
    // Deserialize the struct value
    size_t deserialize(::protoex::Order& value) const noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { _model.fbe_shift(prev); }

private:
    FinalModel<::protoex::Order> _model;
};

} // namespace protoex

// Fast Binary Encoding ::protoex::Balance final model
template <>
class FinalModel<::protoex::Balance>
{
public:
    FinalModel(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the allocation size
    size_t fbe_allocation_size(const ::protoex::Balance& fbe_value) const noexcept;
    // Get the final offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Set the final offset
    size_t fbe_offset(size_t offset) const noexcept { return _offset = offset; }
    // Get the final type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::proto::Balance>::fbe_type(); }

    // Shift the current final offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current final offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    size_t verify() const noexcept;
    // Check if the struct fields are valid
    size_t verify_fields() const noexcept;

    // Get the struct value
    size_t get(::protoex::Balance& fbe_value) const noexcept;
    // Get the struct fields values
    size_t get_fields(::protoex::Balance& fbe_value) const noexcept;

    // Set the struct value
    size_t set(const ::protoex::Balance& fbe_value) noexcept;
    // Set the struct fields values
    size_t set_fields(const ::protoex::Balance& fbe_value) noexcept;

private:
    FBEBuffer& _buffer;
    mutable size_t _offset;

public:
    FinalModel<::proto::Balance> parent;
    FinalModel<double> locked;
};

namespace protoex {

// Fast Binary Encoding Balance final model
class BalanceFinalModel : public FBE::Model
{
public:
    BalanceFinalModel() : _model(this->buffer(), 8) {}
    BalanceFinalModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), _model(this->buffer(), 8) {}

    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::protoex::Balance>::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Serialize the struct value
    size_t serialize(const ::protoex::Balance& value);
    // Deserialize the struct value
    size_t deserialize(::protoex::Balance& value) const noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { _model.fbe_shift(prev); }

private:
    FinalModel<::protoex::Balance> _model;
};

} // namespace protoex

// Fast Binary Encoding ::protoex::Account final model
template <>
class FinalModel<::protoex::Account>
{
public:
    FinalModel(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the allocation size
    size_t fbe_allocation_size(const ::protoex::Account& fbe_value) const noexcept;
    // Get the final offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Set the final offset
    size_t fbe_offset(size_t offset) const noexcept { return _offset = offset; }
    // Get the final type
    static constexpr size_t fbe_type() noexcept { return 3; }

    // Shift the current final offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current final offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    size_t verify() const noexcept;
    // Check if the struct fields are valid
    size_t verify_fields() const noexcept;

    // Get the struct value
    size_t get(::protoex::Account& fbe_value) const noexcept;
    // Get the struct fields values
    size_t get_fields(::protoex::Account& fbe_value) const noexcept;

    // Set the struct value
    size_t set(const ::protoex::Account& fbe_value) noexcept;
    // Set the struct fields values
    size_t set_fields(const ::protoex::Account& fbe_value) noexcept;

private:
    FBEBuffer& _buffer;
    mutable size_t _offset;

public:
    FinalModel<int32_t> id;
    FinalModel<std::string> name;
    FinalModel<::protoex::StateEx> state;
    FinalModel<::protoex::Balance> wallet;
    FinalModel<std::optional<::protoex::Balance>> asset;
    FinalModelVector<::protoex::Order> orders;
};

namespace protoex {

// Fast Binary Encoding Account final model
class AccountFinalModel : public FBE::Model
{
public:
    AccountFinalModel() : _model(this->buffer(), 8) {}
    AccountFinalModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), _model(this->buffer(), 8) {}

    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::protoex::Account>::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Serialize the struct value
    size_t serialize(const ::protoex::Account& value);
    // Deserialize the struct value
    size_t deserialize(::protoex::Account& value) const noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { _model.fbe_shift(prev); }

private:
    FinalModel<::protoex::Account> _model;
};

} // namespace protoex

// Fast Binary Encoding ::protoex::OrderMessage final model
template <>
class FinalModel<::protoex::OrderMessage>
{
public:
    FinalModel(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the allocation size
    size_t fbe_allocation_size(const ::protoex::OrderMessage& fbe_value) const noexcept;
    // Get the final offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Set the final offset
    size_t fbe_offset(size_t offset) const noexcept { return _offset = offset; }
    // Get the final type
    static constexpr size_t fbe_type() noexcept { return 11; }

    // Shift the current final offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current final offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    size_t verify() const noexcept;
    // Check if the struct fields are valid
    size_t verify_fields() const noexcept;

    // Get the struct value
    size_t get(::protoex::OrderMessage& fbe_value) const noexcept;
    // Get the struct fields values
    size_t get_fields(::protoex::OrderMessage& fbe_value) const noexcept;

    // Set the struct value
    size_t set(const ::protoex::OrderMessage& fbe_value) noexcept;
    // Set the struct fields values
    size_t set_fields(const ::protoex::OrderMessage& fbe_value) noexcept;

private:
    FBEBuffer& _buffer;
    mutable size_t _offset;

public:
    FinalModel<::protoex::Order> body;
};

namespace protoex {

// Fast Binary Encoding OrderMessage final model
class OrderMessageFinalModel : public FBE::Model
{
public:
    OrderMessageFinalModel() : _model(this->buffer(), 8) {}
    OrderMessageFinalModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), _model(this->buffer(), 8) {}

    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::protoex::OrderMessage>::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Serialize the struct value
    size_t serialize(const ::protoex::OrderMessage& value);
    // Deserialize the struct value
    size_t deserialize(::protoex::OrderMessage& value) const noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { _model.fbe_shift(prev); }

private:
    FinalModel<::protoex::OrderMessage> _model;
};

} // namespace protoex

// Fast Binary Encoding ::protoex::BalanceMessage final model
template <>
class FinalModel<::protoex::BalanceMessage>
{
public:
    FinalModel(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the allocation size
    size_t fbe_allocation_size(const ::protoex::BalanceMessage& fbe_value) const noexcept;
    // Get the final offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Set the final offset
    size_t fbe_offset(size_t offset) const noexcept { return _offset = offset; }
    // Get the final type
    static constexpr size_t fbe_type() noexcept { return 12; }

    // Shift the current final offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current final offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    size_t verify() const noexcept;
    // Check if the struct fields are valid
    size_t verify_fields() const noexcept;

    // Get the struct value
    size_t get(::protoex::BalanceMessage& fbe_value) const noexcept;
    // Get the struct fields values
    size_t get_fields(::protoex::BalanceMessage& fbe_value) const noexcept;

    // Set the struct value
    size_t set(const ::protoex::BalanceMessage& fbe_value) noexcept;
    // Set the struct fields values
    size_t set_fields(const ::protoex::BalanceMessage& fbe_value) noexcept;

private:
    FBEBuffer& _buffer;
    mutable size_t _offset;

public:
    FinalModel<::protoex::Balance> body;
};

namespace protoex {

// Fast Binary Encoding BalanceMessage final model
class BalanceMessageFinalModel : public FBE::Model
{
public:
    BalanceMessageFinalModel() : _model(this->buffer(), 8) {}
    BalanceMessageFinalModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), _model(this->buffer(), 8) {}

    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::protoex::BalanceMessage>::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Serialize the struct value
    size_t serialize(const ::protoex::BalanceMessage& value);
    // Deserialize the struct value
    size_t deserialize(::protoex::BalanceMessage& value) const noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { _model.fbe_shift(prev); }

private:
    FinalModel<::protoex::BalanceMessage> _model;
};

} // namespace protoex

// Fast Binary Encoding ::protoex::AccountMessage final model
template <>
class FinalModel<::protoex::AccountMessage>
{
public:
    FinalModel(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the allocation size
    size_t fbe_allocation_size(const ::protoex::AccountMessage& fbe_value) const noexcept;
    // Get the final offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Set the final offset
    size_t fbe_offset(size_t offset) const noexcept { return _offset = offset; }
    // Get the final type
    static constexpr size_t fbe_type() noexcept { return 13; }

    // Shift the current final offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current final offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    size_t verify() const noexcept;
    // Check if the struct fields are valid
    size_t verify_fields() const noexcept;

    // Get the struct value
    size_t get(::protoex::AccountMessage& fbe_value) const noexcept;
    // Get the struct fields values
    size_t get_fields(::protoex::AccountMessage& fbe_value) const noexcept;

    // Set the struct value
    size_t set(const ::protoex::AccountMessage& fbe_value) noexcept;
    // Set the struct fields values
    size_t set_fields(const ::protoex::AccountMessage& fbe_value) noexcept;

private:
    FBEBuffer& _buffer;
    mutable size_t _offset;

public:
    FinalModel<::protoex::Account> body;
};

namespace protoex {

// Fast Binary Encoding AccountMessage final model
class AccountMessageFinalModel : public FBE::Model
{
public:
    AccountMessageFinalModel() : _model(this->buffer(), 8) {}
    AccountMessageFinalModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), _model(this->buffer(), 8) {}

    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::protoex::AccountMessage>::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Serialize the struct value
    size_t serialize(const ::protoex::AccountMessage& value);
    // Deserialize the struct value
    size_t deserialize(::protoex::AccountMessage& value) const noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { _model.fbe_shift(prev); }

private:
    FinalModel<::protoex::AccountMessage> _model;
};

} // namespace protoex

} // namespace FBE
