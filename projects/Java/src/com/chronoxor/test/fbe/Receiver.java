// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// Version: 1.8.0.0

package com.chronoxor.test.fbe;

// Fast Binary Encoding com.chronoxor.test receiver
public class Receiver extends com.chronoxor.fbe.Receiver
{
    // Imported receivers
    public com.chronoxor.proto.fbe.Receiver protoReceiver;

    // Receiver values accessors

    // Receiver models accessors

    public Receiver()
    {
        super(false);
        protoReceiver = new com.chronoxor.proto.fbe.Receiver(getBuffer());
    }
    public Receiver(com.chronoxor.fbe.Buffer buffer)
    {
        super(buffer, false);
        protoReceiver = new com.chronoxor.proto.fbe.Receiver(getBuffer());
    }

    // Receive handlers

    @Override
    public boolean onReceive(long type, byte[] buffer, long offset, long size)
    {
        switch ((int)type)
        {
            default: break;
        }

        if ((protoReceiver != null) && protoReceiver.onReceive(type, buffer, offset, size))
            return true;

        return false;
    }
}
