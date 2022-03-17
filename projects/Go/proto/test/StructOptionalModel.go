// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// Version: 1.8.0.0

package test

import "errors"
import "../fbe"
import "../proto"

// Workaround for Go unused imports issue
var _ = errors.New
var _ = fbe.Version
var _ = proto.Version

// Fast Binary Encoding StructOptional model
type StructOptionalModel struct {
    // Model buffer
    buffer *fbe.Buffer

    // Field model
    model *FieldModelStructOptional
}

// Create a new StructOptional model
func NewStructOptionalModel(buffer *fbe.Buffer) *StructOptionalModel {
    return &StructOptionalModel{buffer: buffer, model: NewFieldModelStructOptional(buffer, 4)}
}

// Get the model buffer
func (m *StructOptionalModel) Buffer() *fbe.Buffer { return m.buffer }
// Get the field model
func (m *StructOptionalModel) Model() *FieldModelStructOptional { return m.model }

// Get the model size
func (m *StructOptionalModel) FBESize() int { return m.model.FBESize() + m.model.FBEExtra() }
// // Get the model type
func (m *StructOptionalModel) FBEType() int { return m.model.FBEType() }

// Check if the struct value is valid
func (m *StructOptionalModel) Verify() bool {
    if (m.buffer.Offset() + m.model.FBEOffset() - 4) > m.buffer.Size() {
        return false
    }

    fbeFullSize := int(fbe.ReadUInt32(m.buffer.Data(), m.buffer.Offset() + m.model.FBEOffset() - 4))
    if fbeFullSize < m.model.FBESize() {
        return false
    }

    return m.model.Verify()
}

// Create a new model (begin phase)
func (m *StructOptionalModel) CreateBegin() int {
    fbeBegin := m.buffer.Allocate(4 + m.model.FBESize())
    return fbeBegin
}

// Create a new model (end phase)
func (m *StructOptionalModel) CreateEnd(fbeBegin int) int {
    fbeEnd := m.buffer.Size()
    fbeFullSize := fbeEnd - fbeBegin
    fbe.WriteUInt32(m.buffer.Data(), m.buffer.Offset() + m.model.FBEOffset() - 4, uint32(fbeFullSize))
    return fbeFullSize
}

// Serialize the struct value
func (m *StructOptionalModel) Serialize(value *StructOptional) (int, error) {
    fbeBegin := m.CreateBegin()
    err := m.model.Set(value)
    fbeFullSize := m.CreateEnd(fbeBegin)
    return fbeFullSize, err
}

// Deserialize the struct value
func (m *StructOptionalModel) Deserialize() (*StructOptional, int, error) {
    value := NewStructOptional()
    fbeFullSize, err := m.DeserializeValue(value)
    return value, fbeFullSize, err
}

// Deserialize the struct value by the given pointer
func (m *StructOptionalModel) DeserializeValue(value *StructOptional) (int, error) {
    if (m.buffer.Offset() + m.model.FBEOffset() - 4) > m.buffer.Size() {
        value = NewStructOptional()
        return 0, nil
    }

    fbeFullSize := int(fbe.ReadUInt32(m.buffer.Data(), m.buffer.Offset() + m.model.FBEOffset() - 4))
    if fbeFullSize < m.model.FBESize() {
        value = NewStructOptional()
        return 0, errors.New("model is broken")
    }

    err := m.model.GetValue(value)
    return fbeFullSize, err
}

// Move to the next struct value
func (m *StructOptionalModel) Next(prev int) {
    m.model.FBEShift(prev)
}
