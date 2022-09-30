//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variants.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

@file:Suppress("UnusedImport", "unused")

package variants.fbe

// Fast Binary Encoding variants sender
@Suppress("MemberVisibilityCanBePrivate", "PropertyName")
open class Sender : fbe.Sender, ISenderListener
{
    // Sender models accessors

    constructor() : super(false)
    {
    }

    constructor(buffer: fbe.Buffer) : super(buffer, false)
    {
    }

    fun send(obj: Any): Long
    {
        return sendListener(this, obj)
    }

    @Suppress("JoinDeclarationAndAssignment", "UNUSED_PARAMETER")
    fun sendListener(listener: ISenderListener, obj: Any): Long
    {

        return 0
    }

}
