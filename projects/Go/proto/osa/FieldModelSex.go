//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: osa.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

package osa

import "errors"
import "../fbe"

// Fast Binary Encoding Sex field model
type FieldModelSex struct {
    // Field model buffer
    buffer *fbe.Buffer
    // Field model buffer offset
    offset int
}

// Create a new Sex field model
func NewFieldModelSex(buffer *fbe.Buffer, offset int) *FieldModelSex {
    return &FieldModelSex{buffer: buffer, offset: offset}
}

// Get the field size
func (fm *FieldModelSex) FBESize() int { return 4 }
// Get the field extra size
func (fm *FieldModelSex) FBEExtra() int { return 0 }

// Get the field offset
func (fm *FieldModelSex) FBEOffset() int { return fm.offset }
// Set the field offset
func (fm *FieldModelSex) SetFBEOffset(value int) { fm.offset = value }

// Shift the current field offset
func (fm *FieldModelSex) FBEShift(size int) { fm.offset += size }
// Unshift the current field offset
func (fm *FieldModelSex) FBEUnshift(size int) { fm.offset -= size }

// Check if the value is valid
func (fm *FieldModelSex) Verify() bool { return true }

// Get the value
func (fm *FieldModelSex) Get() (*Sex, error) {
    var value Sex
    return &value, fm.GetValueDefault(&value, Sex(0))
}

// Get the value with provided default value
func (fm *FieldModelSex) GetDefault(defaults Sex) (*Sex, error) {
    var value Sex
    err := fm.GetValueDefault(&value, defaults)
    return &value, err
}

// Get the value by the given pointer
func (fm *FieldModelSex) GetValue(value *Sex) error {
    return fm.GetValueDefault(value, Sex(0))
}

// Get the value by the given pointer with provided default value
func (fm *FieldModelSex) GetValueDefault(value *Sex, defaults Sex) error {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        *value = defaults
        return nil
    }

    *value = Sex(fbe.ReadInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset()))
    return nil
}

// Set the value by the given pointer
func (fm *FieldModelSex) Set(value *Sex) error {
    return fm.SetValue(*value)
}

// Set the value
func (fm *FieldModelSex) SetValue(value Sex) error {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return errors.New("model is broken")
    }

    fbe.WriteInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset(), int32(value))
    return nil
}
