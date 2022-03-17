// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// Version: 1.8.0.0

package test

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

// StructHash key
type StructHashKey struct {
}

// Convert StructHash flags key to string
func (k *StructHashKey) String() string {
    var sb strings.Builder
    sb.WriteString("StructHashKey(")
    sb.WriteString(")")
    return sb.String()
}

// StructHash struct
type StructHash struct {
    F1 map[string]byte `json:"f1"`
    F2 map[string]*byte `json:"f2"`
    F3 map[string][]byte `json:"f3"`
    F4 map[string]*[]byte `json:"f4"`
    F5 map[string]EnumSimple `json:"f5"`
    F6 map[string]*EnumSimple `json:"f6"`
    F7 map[string]FlagsSimple `json:"f7"`
    F8 map[string]*FlagsSimple `json:"f8"`
    F9 map[string]StructSimple `json:"f9"`
    F10 map[string]*StructSimple `json:"f10"`
}

// Create a new StructHash struct
func NewStructHash() *StructHash {
    return &StructHash{
        F1: make(map[string]byte),
        F2: make(map[string]*byte),
        F3: make(map[string][]byte),
        F4: make(map[string]*[]byte),
        F5: make(map[string]EnumSimple),
        F6: make(map[string]*EnumSimple),
        F7: make(map[string]FlagsSimple),
        F8: make(map[string]*FlagsSimple),
        F9: make(map[string]StructSimple),
        F10: make(map[string]*StructSimple),
    }
}

// Create a new StructHash struct from the given field values
func NewStructHashFromFieldValues(F1 map[string]byte, F2 map[string]*byte, F3 map[string][]byte, F4 map[string]*[]byte, F5 map[string]EnumSimple, F6 map[string]*EnumSimple, F7 map[string]FlagsSimple, F8 map[string]*FlagsSimple, F9 map[string]StructSimple, F10 map[string]*StructSimple) *StructHash {
    return &StructHash{F1, F2, F3, F4, F5, F6, F7, F8, F9, F10}
}

// Create a new StructHash struct from JSON
func NewStructHashFromJSON(buffer []byte) (*StructHash, error) {
    result := *NewStructHash()
    err := fbe.Json.Unmarshal(buffer, &result)
    if err != nil {
        return nil, err
    }
    return &result, nil
}

// Struct shallow copy
func (s *StructHash) Copy() *StructHash {
    var result = *s
    return &result
}

// Struct deep clone
func (s *StructHash) Clone() *StructHash {
    // Serialize the struct to the FBE stream
    writer := NewStructHashModel(fbe.NewEmptyBuffer())
    _, _ = writer.Serialize(s)

    // Deserialize the struct from the FBE stream
    reader := NewStructHashModel(writer.Buffer())
    result, _, _ := reader.Deserialize()
    return result
}

// Get the struct key
func (s *StructHash) Key() StructHashKey {
    return StructHashKey{
    }
}

// Convert struct to optional
func (s *StructHash) Optional() *StructHash {
    return s
}

// Get the FBE type
func (s *StructHash) FBEType() int { return 141 }

// Convert struct to string
func (s *StructHash) String() string {
    var sb strings.Builder
    sb.WriteString("StructHash(")
    sb.WriteString("f1=")
    if s.F1 != nil {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.F1)), 10) + "][{")
        for k, v := range s.F1 {
            if first { sb.WriteString("") } else { sb.WriteString(",") }
            sb.WriteString("\"" + k + "\"")
            sb.WriteString("->")
            sb.WriteString(strconv.FormatUint(uint64(v), 10))
            first = false
        }
        sb.WriteString("}]")
    } else {
        sb.WriteString("f1=[0][{}]")
    }
    sb.WriteString(",f2=")
    if s.F2 != nil {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.F2)), 10) + "][{")
        for k, v := range s.F2 {
            if first { sb.WriteString("") } else { sb.WriteString(",") }
            sb.WriteString("\"" + k + "\"")
            sb.WriteString("->")
            if v != nil { 
                sb.WriteString(strconv.FormatUint(uint64(*v), 10))
            } else {
                sb.WriteString("null")
            }
            first = false
        }
        sb.WriteString("}]")
    } else {
        sb.WriteString(",f2=[0][{}]")
    }
    sb.WriteString(",f3=")
    if s.F3 != nil {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.F3)), 10) + "][{")
        for k, v := range s.F3 {
            if first { sb.WriteString("") } else { sb.WriteString(",") }
            sb.WriteString("\"" + k + "\"")
            sb.WriteString("->")
            if v != nil { 
                sb.WriteString("bytes[" + strconv.FormatInt(int64(len(v)), 10) + "]")
            } else {
                sb.WriteString("null")
            }
            first = false
        }
        sb.WriteString("}]")
    } else {
        sb.WriteString(",f3=[0][{}]")
    }
    sb.WriteString(",f4=")
    if s.F4 != nil {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.F4)), 10) + "][{")
        for k, v := range s.F4 {
            if first { sb.WriteString("") } else { sb.WriteString(",") }
            sb.WriteString("\"" + k + "\"")
            sb.WriteString("->")
            if v != nil { 
                sb.WriteString("bytes[" + strconv.FormatInt(int64(len(*v)), 10) + "]")
            } else {
                sb.WriteString("null")
            }
            first = false
        }
        sb.WriteString("}]")
    } else {
        sb.WriteString(",f4=[0][{}]")
    }
    sb.WriteString(",f5=")
    if s.F5 != nil {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.F5)), 10) + "][{")
        for k, v := range s.F5 {
            if first { sb.WriteString("") } else { sb.WriteString(",") }
            sb.WriteString("\"" + k + "\"")
            sb.WriteString("->")
            sb.WriteString(v.String())
            first = false
        }
        sb.WriteString("}]")
    } else {
        sb.WriteString(",f5=[0][{}]")
    }
    sb.WriteString(",f6=")
    if s.F6 != nil {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.F6)), 10) + "][{")
        for k, v := range s.F6 {
            if first { sb.WriteString("") } else { sb.WriteString(",") }
            sb.WriteString("\"" + k + "\"")
            sb.WriteString("->")
            if v != nil { 
                sb.WriteString(v.String())
            } else {
                sb.WriteString("null")
            }
            first = false
        }
        sb.WriteString("}]")
    } else {
        sb.WriteString(",f6=[0][{}]")
    }
    sb.WriteString(",f7=")
    if s.F7 != nil {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.F7)), 10) + "][{")
        for k, v := range s.F7 {
            if first { sb.WriteString("") } else { sb.WriteString(",") }
            sb.WriteString("\"" + k + "\"")
            sb.WriteString("->")
            sb.WriteString(v.String())
            first = false
        }
        sb.WriteString("}]")
    } else {
        sb.WriteString(",f7=[0][{}]")
    }
    sb.WriteString(",f8=")
    if s.F8 != nil {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.F8)), 10) + "][{")
        for k, v := range s.F8 {
            if first { sb.WriteString("") } else { sb.WriteString(",") }
            sb.WriteString("\"" + k + "\"")
            sb.WriteString("->")
            if v != nil { 
                sb.WriteString(v.String())
            } else {
                sb.WriteString("null")
            }
            first = false
        }
        sb.WriteString("}]")
    } else {
        sb.WriteString(",f8=[0][{}]")
    }
    sb.WriteString(",f9=")
    if s.F9 != nil {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.F9)), 10) + "][{")
        for k, v := range s.F9 {
            if first { sb.WriteString("") } else { sb.WriteString(",") }
            sb.WriteString("\"" + k + "\"")
            sb.WriteString("->")
            sb.WriteString(v.String())
            first = false
        }
        sb.WriteString("}]")
    } else {
        sb.WriteString(",f9=[0][{}]")
    }
    sb.WriteString(",f10=")
    if s.F10 != nil {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.F10)), 10) + "][{")
        for k, v := range s.F10 {
            if first { sb.WriteString("") } else { sb.WriteString(",") }
            sb.WriteString("\"" + k + "\"")
            sb.WriteString("->")
            if v != nil { 
                sb.WriteString(v.String())
            } else {
                sb.WriteString("null")
            }
            first = false
        }
        sb.WriteString("}]")
    } else {
        sb.WriteString(",f10=[0][{}]")
    }
    sb.WriteString(")")
    return sb.String()
}

// Convert struct to JSON
func (s *StructHash) JSON() ([]byte, error) {
    return fbe.Json.Marshal(s)
}
