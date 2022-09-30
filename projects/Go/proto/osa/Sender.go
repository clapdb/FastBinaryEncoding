//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: osa.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

package osa

import "errors"
import "../fbe"

// Workaround for Go unused imports issue
var _ = errors.New
var _ = fbe.Version

// Fast Binary Encoding osa sender
type Sender struct {
    *fbe.Sender
}

// Create a new osa sender with an empty buffer
func NewSender() *Sender {
    return NewSenderWithBuffer(fbe.NewEmptyBuffer())
}

// Create a new osa sender with the given buffer
func NewSenderWithBuffer(buffer *fbe.Buffer) *Sender {
    return &Sender{
        fbe.NewSender(buffer, false),
    }
}

// Sender models accessors


// Send methods

func (s *Sender) Send(value interface{}) (int, error) {
    switch value := value.(type) {
    default:
        _ = value
        break
    }
    return 0, nil
}
