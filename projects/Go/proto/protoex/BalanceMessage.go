// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: protoex.fbe
// Version: 1.8.0.0

package protoex

import "fmt"
import "strconv"
import "strings"
import "errors"
import "../fbe"
import "../proto"

// Workaround for Go unused imports issue
var _ = errors.New
var _ = fbe.Version
var _ = proto.Version

// Workaround for Go unused imports issue
var _ = fmt.Print
var _ = strconv.FormatInt

// BalanceMessage key
type BalanceMessageKey struct {
}

// Convert BalanceMessage flags key to string
func (k *BalanceMessageKey) String() string {
    var sb strings.Builder
    sb.WriteString("BalanceMessageKey(")
    sb.WriteString(")")
    return sb.String()
}

// BalanceMessage struct
type BalanceMessage struct {
    Body Balance `json:"body"`
}

// Create a new BalanceMessage struct
func NewBalanceMessage() *BalanceMessage {
    return &BalanceMessage{
        Body: *NewBalance(),
    }
}

// Create a new BalanceMessage struct from the given field values
func NewBalanceMessageFromFieldValues(Body Balance) *BalanceMessage {
    return &BalanceMessage{Body}
}

// Create a new BalanceMessage struct from JSON
func NewBalanceMessageFromJSON(buffer []byte) (*BalanceMessage, error) {
    result := *NewBalanceMessage()
    err := fbe.Json.Unmarshal(buffer, &result)
    if err != nil {
        return nil, err
    }
    return &result, nil
}

// Struct shallow copy
func (s *BalanceMessage) Copy() *BalanceMessage {
    var result = *s
    return &result
}

// Struct deep clone
func (s *BalanceMessage) Clone() *BalanceMessage {
    // Serialize the struct to the FBE stream
    writer := NewBalanceMessageModel(fbe.NewEmptyBuffer())
    _, _ = writer.Serialize(s)

    // Deserialize the struct from the FBE stream
    reader := NewBalanceMessageModel(writer.Buffer())
    result, _, _ := reader.Deserialize()
    return result
}

// Get the struct key
func (s *BalanceMessage) Key() BalanceMessageKey {
    return BalanceMessageKey{
    }
}

// Convert struct to optional
func (s *BalanceMessage) Optional() *BalanceMessage {
    return s
}

// Get the FBE type
func (s *BalanceMessage) FBEType() int { return 12 }

// Convert struct to string
func (s *BalanceMessage) String() string {
    var sb strings.Builder
    sb.WriteString("BalanceMessage(")
    sb.WriteString("body=")
    sb.WriteString(s.Body.String())
    sb.WriteString(")")
    return sb.String()
}

// Convert struct to JSON
func (s *BalanceMessage) JSON() ([]byte, error) {
    return fbe.Json.Marshal(s)
}
