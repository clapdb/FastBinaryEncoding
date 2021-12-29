// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: simple.fbe
// Version: 1.7.0.0

#include "simple_ptr_models.h"

namespace FBE {

FieldModelPtr_simple_Simple::FieldModelPtr_simple_Simple(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset), ptr(nullptr)
{}

FieldModelPtr_simple_Simple::~FieldModelPtr_simple_Simple()
{
    if (ptr) delete ptr;
}

size_t FieldModelPtr_simple_Simple::fbe_extra() const noexcept
{
    if (!ptr) return 0;

    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_ptr_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset() + 1));
    if ((fbe_ptr_offset == 0) || ((_buffer.offset() + fbe_ptr_offset + 4) > _buffer.size()))
        return 0;

    _buffer.shift(fbe_ptr_offset);
    size_t fbe_result = ptr->fbe_size() + ptr->fbe_extra();
    _buffer.unshift(fbe_ptr_offset);

    return fbe_result;
}

bool FieldModelPtr_simple_Simple::verify() const noexcept
{
    if (!ptr) return true;

    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return true;

    uint8_t fbe_has_value = *((const uint8_t *)(_buffer.data() + _buffer.offset() + fbe_offset()));
    if (fbe_has_value == 0)
        return true;

    uint32_t fbe_optional_offset = *((const uint32_t *)(_buffer.data() + _buffer.offset() + fbe_offset() + 1));
    if (fbe_optional_offset == 0)
        return false;

    _buffer.shift(fbe_optional_offset);
    bool fbe_result = ptr->verify();
    _buffer.unshift(fbe_optional_offset);
    return fbe_result;
}

bool FieldModelPtr_simple_Simple::has_value() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return false;

    uint8_t fbe_has_value = *((const uint8_t *)(_buffer.data() + _buffer.offset() + fbe_offset()));
    return (fbe_has_value != 0);
}

size_t FieldModelPtr_simple_Simple::get_begin() const noexcept
{
    if (!has_value())
        return 0;

    uint32_t fbe_ptr_offset = *((const uint32_t *)(_buffer.data() + _buffer.offset() + fbe_offset() + 1));
    assert((fbe_ptr_offset > 0) && "Model is broken!");
    if (fbe_ptr_offset == 0)
        return 0;

    _buffer.shift(fbe_ptr_offset);
    return fbe_ptr_offset;
}

void FieldModelPtr_simple_Simple::get_end(size_t fbe_begin) const noexcept
{
    _buffer.unshift(fbe_begin);
}

void FieldModelPtr_simple_Simple::get(::simple::Simple** fbe_value) noexcept
{
    size_t fbe_begin = get_begin();
    if (fbe_begin == 0)
        return;

    ptr = new FieldModel_simple_Simple(_buffer, 0);

    ::simple::Simple *tempModel = new ::simple::Simple();
    ptr->get(*tempModel);
    *fbe_value = tempModel;

    get_end(fbe_begin);
}

size_t FieldModelPtr_simple_Simple::set_begin(bool has_value)
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint8_t fbe_has_value = has_value ? 1 : 0;
    *((uint8_t *)(_buffer.data() + _buffer.offset() + fbe_offset())) = fbe_has_value;
    if (fbe_has_value == 0)
        return 0;

    uint32_t fbe_ptr_size = 4;
    uint32_t fbe_ptr_offset = (uint32_t)(_buffer.allocate(fbe_ptr_size) - _buffer.offset());
    assert(((fbe_ptr_offset > 0) && ((_buffer.offset() + fbe_ptr_offset + fbe_ptr_size) <= _buffer.size())) && "Model is broken!");
    if ((fbe_ptr_offset == 0) || ((_buffer.offset() + fbe_ptr_offset + fbe_ptr_size) > _buffer.size()))
        return 0;

    *((uint32_t *)(_buffer.data() + _buffer.offset() + fbe_offset() + 1)) = fbe_ptr_offset;

    _buffer.shift(fbe_ptr_offset);
    return fbe_ptr_offset;
}

void FieldModelPtr_simple_Simple::set_end(size_t fbe_begin)
{
    _buffer.unshift(fbe_begin);
}

void FieldModelPtr_simple_Simple::set(const ::simple::Simple* fbe_value) noexcept
{
    size_t fbe_begin = set_begin(fbe_value != nullptr);
    if (fbe_begin == 0)
        return;

    if (fbe_value != nullptr) {
        BaseFieldModel* temp = new FieldModel_simple_Simple(_buffer, 0);
        ptr = temp;
        ptr->set(*fbe_value);
    }

    set_end(fbe_begin);
}

FieldModel_simple_Simple::FieldModel_simple_Simple(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
    , info(buffer, 4 + 4)
    , simple(buffer, info.fbe_offset() + info.fbe_size())
    , depth(buffer, simple.fbe_offset() + simple.fbe_size())
    , spv(buffer, depth.fbe_offset() + depth.fbe_size())
    , sv(buffer, spv.fbe_offset() + spv.fbe_size())
    , spm(buffer, sv.fbe_offset() + sv.fbe_size())
    , sm(buffer, spm.fbe_offset() + spm.fbe_size())
{}

size_t FieldModel_simple_Simple::fbe_body() const noexcept
{
    size_t fbe_result = 4 + 4
        + info.fbe_size()
        + simple.fbe_size()
        + depth.fbe_size()
        + spv.fbe_size()
        + sv.fbe_size()
        + spm.fbe_size()
        + sm.fbe_size()
        ;
    return fbe_result;
}

size_t FieldModel_simple_Simple::fbe_extra() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4) > _buffer.size()))
        return 0;

    _buffer.shift(fbe_struct_offset);

    size_t fbe_result = fbe_body()
        + info.fbe_extra()
        + simple.fbe_extra()
        + depth.fbe_extra()
        + spv.fbe_extra()
        + sv.fbe_extra()
        + spm.fbe_extra()
        + sm.fbe_extra()
        ;

    _buffer.unshift(fbe_struct_offset);

    return fbe_result;
}

bool FieldModel_simple_Simple::verify(bool fbe_verify_type) const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return true;

    uint32_t fbe_struct_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4 + 4) > _buffer.size()))
        return false;

    uint32_t fbe_struct_size = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_struct_offset));
    if (fbe_struct_size < (4 + 4))
        return false;

    uint32_t fbe_struct_type = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_struct_offset + 4));
    if (fbe_verify_type && (fbe_struct_type != fbe_type()))
        return false;

    _buffer.shift(fbe_struct_offset);
    bool fbe_result = verify_fields(fbe_struct_size);
    _buffer.unshift(fbe_struct_offset);
    return fbe_result;
}

bool FieldModel_simple_Simple::verify_fields(size_t fbe_struct_size) const noexcept
{
    size_t fbe_current_size = 4 + 4;

    if ((fbe_current_size + info.fbe_size()) > fbe_struct_size)
        return true;
    if (!info.verify())
        return false;
    fbe_current_size += info.fbe_size();

    if ((fbe_current_size + simple.fbe_size()) > fbe_struct_size)
        return true;
    if (!simple.verify())
        return false;
    fbe_current_size += simple.fbe_size();

    if ((fbe_current_size + depth.fbe_size()) > fbe_struct_size)
        return true;
    if (!depth.verify())
        return false;
    fbe_current_size += depth.fbe_size();

    if ((fbe_current_size + spv.fbe_size()) > fbe_struct_size)
        return true;
    if (!spv.verify())
        return false;
    fbe_current_size += spv.fbe_size();

    if ((fbe_current_size + sv.fbe_size()) > fbe_struct_size)
        return true;
    if (!sv.verify())
        return false;
    fbe_current_size += sv.fbe_size();

    if ((fbe_current_size + spm.fbe_size()) > fbe_struct_size)
        return true;
    if (!spm.verify())
        return false;
    fbe_current_size += spm.fbe_size();

    if ((fbe_current_size + sm.fbe_size()) > fbe_struct_size)
        return true;
    if (!sm.verify())
        return false;
    fbe_current_size += sm.fbe_size();

    return true;
}

size_t FieldModel_simple_Simple::get_begin() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    assert(((fbe_struct_offset > 0) && ((_buffer.offset() + fbe_struct_offset + 4 + 4) <= _buffer.size())) && "Model is broken!");
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4 + 4) > _buffer.size()))
        return 0;

    uint32_t fbe_struct_size = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_struct_offset));
    assert((fbe_struct_size >= (4 + 4)) && "Model is broken!");
    if (fbe_struct_size < (4 + 4))
        return 0;

    _buffer.shift(fbe_struct_offset);
    return fbe_struct_offset;
}

void FieldModel_simple_Simple::get_end(size_t fbe_begin) const noexcept
{
    _buffer.unshift(fbe_begin);
}

void FieldModel_simple_Simple::get(::FBE::Base& fbe_value) noexcept
{
    size_t fbe_begin = get_begin();
    if (fbe_begin == 0)
        return;

    uint32_t fbe_struct_size = *((const uint32_t*)(_buffer.data() + _buffer.offset()));
    get_fields(fbe_value, fbe_struct_size);
    get_end(fbe_begin);
}

void FieldModel_simple_Simple::get_fields(::FBE::Base& base_fbe_value, size_t fbe_struct_size) noexcept
{
    ::simple::Simple& fbe_value = static_cast<::simple::Simple&>(base_fbe_value);
    size_t fbe_current_size = 4 + 4;

    if ((fbe_current_size + info.fbe_size()) <= fbe_struct_size)
        {
            info.get(fbe_value.info);
        }
    else
        fbe_value.info = "";
    fbe_current_size += info.fbe_size();

    if ((fbe_current_size + simple.fbe_size()) <= fbe_struct_size)
        {
            simple.get(&fbe_value.simple);
        }
    else
        fbe_value.simple = nullptr;
    fbe_current_size += simple.fbe_size();

    if ((fbe_current_size + depth.fbe_size()) <= fbe_struct_size)
        {
            depth.get(fbe_value.depth);
        }
    else
        fbe_value.depth = (int32_t)0ll;
    fbe_current_size += depth.fbe_size();

    if ((fbe_current_size + spv.fbe_size()) <= fbe_struct_size)
        {
            spv.get(fbe_value.spv);
        }
    else
        fbe_value.spv.clear();
    fbe_current_size += spv.fbe_size();

    if ((fbe_current_size + sv.fbe_size()) <= fbe_struct_size)
        {
            sv.get(fbe_value.sv);
        }
    else
        fbe_value.sv.clear();
    fbe_current_size += sv.fbe_size();

    if ((fbe_current_size + spm.fbe_size()) <= fbe_struct_size)
        {
            spm.get(fbe_value.spm);
        }
    else
        fbe_value.spm.clear();
    fbe_current_size += spm.fbe_size();

    if ((fbe_current_size + sm.fbe_size()) <= fbe_struct_size)
        {
            sm.get(fbe_value.sm);
        }
    else
        fbe_value.sm.clear();
    fbe_current_size += sm.fbe_size();
}

size_t FieldModel_simple_Simple::set_begin()
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_size = (uint32_t)fbe_body();
    uint32_t fbe_struct_offset = (uint32_t)(_buffer.allocate(fbe_struct_size) - _buffer.offset());
    assert(((fbe_struct_offset > 0) && ((_buffer.offset() + fbe_struct_offset + fbe_struct_size) <= _buffer.size())) && "Model is broken!");
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + fbe_struct_size) > _buffer.size()))
        return 0;

    *((uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset())) = fbe_struct_offset;
    *((uint32_t*)(_buffer.data() + _buffer.offset() + fbe_struct_offset)) = fbe_struct_size;
    *((uint32_t*)(_buffer.data() + _buffer.offset() + fbe_struct_offset + 4)) = (uint32_t)fbe_type();

    _buffer.shift(fbe_struct_offset);
    return fbe_struct_offset;
}

void FieldModel_simple_Simple::set_end(size_t fbe_begin)
{
    _buffer.unshift(fbe_begin);
}

void FieldModel_simple_Simple::set(const ::FBE::Base& fbe_value) noexcept
{
    size_t fbe_begin = set_begin();
    if (fbe_begin == 0)
        return;

    set_fields(fbe_value);
    set_end(fbe_begin);
}

void FieldModel_simple_Simple::set_fields(const ::FBE::Base& base_fbe_value) noexcept
{
    const ::simple::Simple& fbe_value = static_cast<const ::simple::Simple&>(base_fbe_value);
    info.set(fbe_value.info);
    simple.set(fbe_value.simple);
    depth.set(fbe_value.depth);
    spv.set(fbe_value.spv);
    sv.set(fbe_value.sv);
    spm.set(fbe_value.spm);
    sm.set(fbe_value.sm);
}

namespace simple {

bool SimpleModel::verify()
{
    if ((this->buffer().offset() + model.fbe_offset() - 4) > this->buffer().size())
        return false;

    uint32_t fbe_full_size = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4));
    if (fbe_full_size < model.fbe_size())
        return false;

    return model.verify();
}

size_t SimpleModel::create_begin()
{
    size_t fbe_begin = this->buffer().allocate(4 + model.fbe_size());
    return fbe_begin;
}

size_t SimpleModel::create_end(size_t fbe_begin)
{
    size_t fbe_end = this->buffer().size();
    uint32_t fbe_full_size = (uint32_t)(fbe_end - fbe_begin);
    *((uint32_t*)(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4)) = fbe_full_size;
    return fbe_full_size;
}

size_t SimpleModel::serialize(const ::simple::Simple& value)
{
    size_t fbe_begin = create_begin();
    model.set(value);
    size_t fbe_full_size = create_end(fbe_begin);
    return fbe_full_size;
}

size_t SimpleModel::deserialize(::simple::Simple& value) noexcept
{
    if ((this->buffer().offset() + model.fbe_offset() - 4) > this->buffer().size())
        return 0;

    uint32_t fbe_full_size = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4));
    assert((fbe_full_size >= model.fbe_size()) && "Model is broken!");
    if (fbe_full_size < model.fbe_size())
        return 0;

    model.get(value);
    return fbe_full_size;
}

} // namespace simple

} // namespace FBE
