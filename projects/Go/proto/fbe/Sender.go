// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: FBE
// Version: 1.8.0.0

package fbe

// Send message interface
type OnSend interface {
    OnSend(buffer []byte) (int, error)
}

// Send message function
type OnSendFunc func(buffer []byte) (int, error)
func (f OnSendFunc) OnSend(buffer []byte) (int, error) {
    return f(buffer)
}

// Send log message interface
type OnSendLog interface {
    OnSendLog(message string)
}

// Send log message function
type OnSendLogFunc func(message string)
func (f OnSendLogFunc) OnSendLog(message string) {
    f(message)
}

// Fast Binary Encoding base sender
type Sender struct {
    // Sender bytes buffer
    buffer *Buffer
    // Logging flag
    logging bool
    // Final protocol flag
    final bool

    // Send message handler
    HandlerOnSend OnSend
    // Send log message handler
    HandlerOnSendLog OnSendLog
}

// Create a new base sender
func NewSender(buffer *Buffer, final bool) *Sender {
    sender := &Sender{buffer: buffer, logging: false, final: final}
    sender.SetupHandlerOnSendFunc(func(buffer []byte) (int, error) { panic("send handler is not provided") })
    sender.SetupHandlerOnSendLogFunc(func(message string) {})
    return sender
}

// Get the bytes buffer
func (s *Sender) Buffer() *Buffer { return s.buffer }

// Get the final protocol flag
func (s *Sender) Final() bool { return s.final }

// Get the logging flag
func (s *Sender) Logging() bool { return s.logging }
// Set the logging flag
func (s *Sender) SetLogging(logging bool) { s.logging = logging }

// Setup handlers
func (s *Sender) SetupHandlers(handlers interface{}) {
    if handler, ok := handlers.(OnSend); ok {
        s.SetupHandlerOnSend(handler)
    }
    if handler, ok := handlers.(OnSendLog); ok {
        s.SetupHandlerOnSendLog(handler)
    }
}

// Setup send message handler
func (s *Sender) SetupHandlerOnSend(handler OnSend) { s.HandlerOnSend = handler }
// Setup send message handler function
func (s *Sender) SetupHandlerOnSendFunc(function func(buffer []byte) (int, error)) { s.HandlerOnSend = OnSendFunc(function) }
// Setup send log message handler
func (s *Sender) SetupHandlerOnSendLog(handler OnSendLog) { s.HandlerOnSendLog = handler }
// Setup send log message handler function
func (s *Sender) SetupHandlerOnSendLogFunc(function func(message string)) { s.HandlerOnSendLog = OnSendLogFunc(function) }

// Reset the sender buffer
func (s *Sender) Reset() { s.buffer.Reset() }

// Send serialized buffer.
// Direct call of the method requires knowledge about internals of FBE models serialization.
// Use it with care!
func (s *Sender) SendSerialized(serialized int) (int, error) {
    if serialized <= 0 {
        return 0, nil
    }

    // Shift the send buffer
    s.buffer.Shift(serialized)

    // Send the value
    sent, err := s.HandlerOnSend.OnSend(s.buffer.Data()[:s.buffer.Size()])
    s.buffer.Remove(0, sent)
    return sent, err
}
