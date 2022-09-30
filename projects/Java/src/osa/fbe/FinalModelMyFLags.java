//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: osa.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

package osa.fbe;

// Fast Binary Encoding MyFLags final model
public final class FinalModelMyFLags extends fbe.FinalModel
{
    public FinalModelMyFLags(fbe.Buffer buffer, long offset) { super(buffer, offset); }

    // Get the allocation size
    public long fbeAllocationSize(osa.MyFLags value) { return fbeSize(); }

    // Get the final size
    @Override
    public long fbeSize() { return 4; }

    // Check if the value is valid
    @Override
    public long verify()
    {
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return Long.MAX_VALUE;

        return fbeSize();
    }

    // Get the value
    public osa.MyFLags get(fbe.Size size)
    {
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return new osa.MyFLags();

        size.value = fbeSize();
        return new osa.MyFLags(readInt32(fbeOffset()));
    }

    // Set the value
    public long set(osa.MyFLags value)
    {
        assert ((_buffer.getOffset() + fbeOffset() + fbeSize()) <= _buffer.getSize()) : "Model is broken!";
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return 0;

        write(fbeOffset(), value.getRaw());
        return fbeSize();
    }
}
