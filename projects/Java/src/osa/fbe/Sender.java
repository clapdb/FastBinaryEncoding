//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: osa.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

package osa.fbe;

// Fast Binary Encoding osa sender
public class Sender extends fbe.Sender
{
    // Sender models accessors

    public Sender()
    {
        super(false);
    }
    public Sender(fbe.Buffer buffer)
    {
        super(buffer, false);
    }

    public long send(Object obj)
    {

        return 0;
    }


    // Send message handler
    @Override
    protected long onSend(byte[] buffer, long offset, long size) { throw new UnsupportedOperationException("osa.fbe.Sender.onSend() not implemented!"); }
}
