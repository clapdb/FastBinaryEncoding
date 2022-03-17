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

// Fast Binary Encoding StructHashEx field model
type FieldModelStructHashEx struct {
    // Field model buffer
    buffer *fbe.Buffer
    // Field model buffer offset
    offset int

    F1 *FieldModelMapStructSimpleStructNested
    F2 *FieldModelMapStructSimpleOptionalStructNested
}

// Create a new StructHashEx field model
func NewFieldModelStructHashEx(buffer *fbe.Buffer, offset int) *FieldModelStructHashEx {
    fbeResult := FieldModelStructHashEx{buffer: buffer, offset: offset}
    fbeResult.F1 = NewFieldModelMapStructSimpleStructNested(buffer, 4 + 4)
    fbeResult.F2 = NewFieldModelMapStructSimpleOptionalStructNested(buffer, fbeResult.F1.FBEOffset() + fbeResult.F1.FBESize())
    return &fbeResult
}

// Get the field size
func (fm *FieldModelStructHashEx) FBESize() int { return 4 }

// Get the field body size
func (fm *FieldModelStructHashEx) FBEBody() int {
    fbeResult := 4 + 4 +
        fm.F1.FBESize() +
        fm.F2.FBESize() +
        0
    return fbeResult
}

// Get the field extra size
func (fm *FieldModelStructHashEx) FBEExtra() int {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return 0
    }

    fbeStructOffset := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset()))
    if (fbeStructOffset == 0) || ((fm.buffer.Offset() + fbeStructOffset + 4) > fm.buffer.Size()) {
        return 0
    }

    fm.buffer.Shift(fbeStructOffset)

    fbeResult := fm.FBEBody() +
        fm.F1.FBEExtra() +
        fm.F2.FBEExtra() +
        0

    fm.buffer.Unshift(fbeStructOffset)

    return fbeResult
}

// Get the field type
func (fm *FieldModelStructHashEx) FBEType() int { return 142 }

// Get the field offset
func (fm *FieldModelStructHashEx) FBEOffset() int { return fm.offset }
// Set the field offset
func (fm *FieldModelStructHashEx) SetFBEOffset(value int) { fm.offset = value }

// Shift the current field offset
func (fm *FieldModelStructHashEx) FBEShift(size int) { fm.offset += size }
// Unshift the current field offset
func (fm *FieldModelStructHashEx) FBEUnshift(size int) { fm.offset -= size }

// Check if the struct value is valid
func (fm *FieldModelStructHashEx) Verify() bool { return fm.VerifyType(true) }

// Check if the struct value and its type are valid
func (fm *FieldModelStructHashEx) VerifyType(fbeVerifyType bool) bool {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return true
    }

    fbeStructOffset := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset()))
    if (fbeStructOffset == 0) || ((fm.buffer.Offset() + fbeStructOffset + 4 + 4) > fm.buffer.Size()) {
        return false
    }

    fbeStructSize := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fbeStructOffset))
    if fbeStructSize < (4 + 4) {
        return false
    }

    fbeStructType := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fbeStructOffset + 4))
    if fbeVerifyType && (fbeStructType != fm.FBEType()) {
        return false
    }

    fm.buffer.Shift(fbeStructOffset)
    fbeResult := fm.VerifyFields(fbeStructSize)
    fm.buffer.Unshift(fbeStructOffset)
    return fbeResult
}

// // Check if the struct value fields are valid
func (fm *FieldModelStructHashEx) VerifyFields(fbeStructSize int) bool {
    fbeCurrentSize := 4 + 4

    if (fbeCurrentSize + fm.F1.FBESize()) > fbeStructSize {
        return true
    }
    if !fm.F1.Verify() {
        return false
    }
    fbeCurrentSize += fm.F1.FBESize()

    if (fbeCurrentSize + fm.F2.FBESize()) > fbeStructSize {
        return true
    }
    if !fm.F2.Verify() {
        return false
    }
    fbeCurrentSize += fm.F2.FBESize()

    return true
}

// Get the struct value (begin phase)
func (fm *FieldModelStructHashEx) GetBegin() (int, error) {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return 0, nil
    }

    fbeStructOffset := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset()))
    if (fbeStructOffset == 0) || ((fm.buffer.Offset() + fbeStructOffset + 4 + 4) > fm.buffer.Size()) {
        return 0, errors.New("model is broken")
    }

    fbeStructSize := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fbeStructOffset))
    if fbeStructSize < (4 + 4) {
        return 0, errors.New("model is broken")
    }

    fm.buffer.Shift(fbeStructOffset)
    return fbeStructOffset, nil
}

// Get the struct value (end phase)
func (fm *FieldModelStructHashEx) GetEnd(fbeBegin int) {
    fm.buffer.Unshift(fbeBegin)
}

// Get the struct value
func (fm *FieldModelStructHashEx) Get() (*StructHashEx, error) {
    fbeResult := NewStructHashEx()
    return fbeResult, fm.GetValue(fbeResult)
}

// Get the struct value by the given pointer
func (fm *FieldModelStructHashEx) GetValue(fbeValue *StructHashEx) error {
    fbeBegin, err := fm.GetBegin()
    if fbeBegin == 0 {
        return err
    }

    fbeStructSize := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset()))
    fm.GetFields(fbeValue, fbeStructSize)
    fm.GetEnd(fbeBegin)
    return nil
}

// Get the struct fields values
func (fm *FieldModelStructHashEx) GetFields(fbeValue *StructHashEx, fbeStructSize int) {
    fbeCurrentSize := 4 + 4

    if (fbeCurrentSize + fm.F1.FBESize()) <= fbeStructSize {
        fbeValue.F1, _ = fm.F1.Get()
    } else {
        fbeValue.F1 = make(map[StructSimpleKey]struct{Key StructSimple; Value StructNested})
    }
    fbeCurrentSize += fm.F1.FBESize()

    if (fbeCurrentSize + fm.F2.FBESize()) <= fbeStructSize {
        fbeValue.F2, _ = fm.F2.Get()
    } else {
        fbeValue.F2 = make(map[StructSimpleKey]struct{Key StructSimple; Value *StructNested})
    }
    fbeCurrentSize += fm.F2.FBESize()
}

// Set the struct value (begin phase)
func (fm *FieldModelStructHashEx) SetBegin() (int, error) {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return 0, errors.New("model is broken")
    }

    fbeStructSize := fm.FBEBody()
    fbeStructOffset := fm.buffer.Allocate(fbeStructSize) - fm.buffer.Offset()
    if (fbeStructOffset <= 0) || ((fm.buffer.Offset() + fbeStructOffset + fbeStructSize) > fm.buffer.Size()) {
        return 0, errors.New("model is broken")
    }

    fbe.WriteUInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset(), uint32(fbeStructOffset))
    fbe.WriteUInt32(fm.buffer.Data(), fm.buffer.Offset() + fbeStructOffset, uint32(fbeStructSize))
    fbe.WriteUInt32(fm.buffer.Data(), fm.buffer.Offset() + fbeStructOffset + 4, uint32(fm.FBEType()))

    fm.buffer.Shift(fbeStructOffset)
    return fbeStructOffset, nil
}

// Set the struct value (end phase)
func (fm *FieldModelStructHashEx) SetEnd(fbeBegin int) {
    fm.buffer.Unshift(fbeBegin)
}

// Set the struct value
func (fm *FieldModelStructHashEx) Set(fbeValue *StructHashEx) error {
    fbeBegin, err := fm.SetBegin()
    if fbeBegin == 0 {
        return err
    }

    err = fm.SetFields(fbeValue)
    fm.SetEnd(fbeBegin)
    return err
}

// Set the struct fields values
func (fm *FieldModelStructHashEx) SetFields(fbeValue *StructHashEx) error {
    var err error = nil

    if err = fm.F1.Set(fbeValue.F1); err != nil {
        return err
    }
    if err = fm.F2.Set(fbeValue.F2); err != nil {
        return err
    }
    return err
}
