// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// Version: 1.8.0.0

@file:Suppress("UnusedImport", "unused")

package com.chronoxor.test.fbe

// Fast Binary Encoding StructSimple field model
@Suppress("MemberVisibilityCanBePrivate", "RemoveRedundantCallsOfConversionMethods", "ReplaceGetOrSet")
class FieldModelStructSimple(buffer: com.chronoxor.fbe.Buffer, offset: Long) : com.chronoxor.fbe.FieldModel(buffer, offset)
{
    val id: com.chronoxor.fbe.FieldModelInt32 = com.chronoxor.fbe.FieldModelInt32(buffer, 4 + 4)
    val f1: com.chronoxor.fbe.FieldModelBoolean = com.chronoxor.fbe.FieldModelBoolean(buffer, id.fbeOffset + id.fbeSize)
    val f2: com.chronoxor.fbe.FieldModelBoolean = com.chronoxor.fbe.FieldModelBoolean(buffer, f1.fbeOffset + f1.fbeSize)
    val f3: com.chronoxor.fbe.FieldModelByte = com.chronoxor.fbe.FieldModelByte(buffer, f2.fbeOffset + f2.fbeSize)
    val f4: com.chronoxor.fbe.FieldModelByte = com.chronoxor.fbe.FieldModelByte(buffer, f3.fbeOffset + f3.fbeSize)
    val f5: com.chronoxor.fbe.FieldModelChar = com.chronoxor.fbe.FieldModelChar(buffer, f4.fbeOffset + f4.fbeSize)
    val f6: com.chronoxor.fbe.FieldModelChar = com.chronoxor.fbe.FieldModelChar(buffer, f5.fbeOffset + f5.fbeSize)
    val f7: com.chronoxor.fbe.FieldModelWChar = com.chronoxor.fbe.FieldModelWChar(buffer, f6.fbeOffset + f6.fbeSize)
    val f8: com.chronoxor.fbe.FieldModelWChar = com.chronoxor.fbe.FieldModelWChar(buffer, f7.fbeOffset + f7.fbeSize)
    val f9: com.chronoxor.fbe.FieldModelInt8 = com.chronoxor.fbe.FieldModelInt8(buffer, f8.fbeOffset + f8.fbeSize)
    val f10: com.chronoxor.fbe.FieldModelInt8 = com.chronoxor.fbe.FieldModelInt8(buffer, f9.fbeOffset + f9.fbeSize)
    val f11: com.chronoxor.fbe.FieldModelUInt8 = com.chronoxor.fbe.FieldModelUInt8(buffer, f10.fbeOffset + f10.fbeSize)
    val f12: com.chronoxor.fbe.FieldModelUInt8 = com.chronoxor.fbe.FieldModelUInt8(buffer, f11.fbeOffset + f11.fbeSize)
    val f13: com.chronoxor.fbe.FieldModelInt16 = com.chronoxor.fbe.FieldModelInt16(buffer, f12.fbeOffset + f12.fbeSize)
    val f14: com.chronoxor.fbe.FieldModelInt16 = com.chronoxor.fbe.FieldModelInt16(buffer, f13.fbeOffset + f13.fbeSize)
    val f15: com.chronoxor.fbe.FieldModelUInt16 = com.chronoxor.fbe.FieldModelUInt16(buffer, f14.fbeOffset + f14.fbeSize)
    val f16: com.chronoxor.fbe.FieldModelUInt16 = com.chronoxor.fbe.FieldModelUInt16(buffer, f15.fbeOffset + f15.fbeSize)
    val f17: com.chronoxor.fbe.FieldModelInt32 = com.chronoxor.fbe.FieldModelInt32(buffer, f16.fbeOffset + f16.fbeSize)
    val f18: com.chronoxor.fbe.FieldModelInt32 = com.chronoxor.fbe.FieldModelInt32(buffer, f17.fbeOffset + f17.fbeSize)
    val f19: com.chronoxor.fbe.FieldModelUInt32 = com.chronoxor.fbe.FieldModelUInt32(buffer, f18.fbeOffset + f18.fbeSize)
    val f20: com.chronoxor.fbe.FieldModelUInt32 = com.chronoxor.fbe.FieldModelUInt32(buffer, f19.fbeOffset + f19.fbeSize)
    val f21: com.chronoxor.fbe.FieldModelInt64 = com.chronoxor.fbe.FieldModelInt64(buffer, f20.fbeOffset + f20.fbeSize)
    val f22: com.chronoxor.fbe.FieldModelInt64 = com.chronoxor.fbe.FieldModelInt64(buffer, f21.fbeOffset + f21.fbeSize)
    val f23: com.chronoxor.fbe.FieldModelUInt64 = com.chronoxor.fbe.FieldModelUInt64(buffer, f22.fbeOffset + f22.fbeSize)
    val f24: com.chronoxor.fbe.FieldModelUInt64 = com.chronoxor.fbe.FieldModelUInt64(buffer, f23.fbeOffset + f23.fbeSize)
    val f25: com.chronoxor.fbe.FieldModelFloat = com.chronoxor.fbe.FieldModelFloat(buffer, f24.fbeOffset + f24.fbeSize)
    val f26: com.chronoxor.fbe.FieldModelFloat = com.chronoxor.fbe.FieldModelFloat(buffer, f25.fbeOffset + f25.fbeSize)
    val f27: com.chronoxor.fbe.FieldModelDouble = com.chronoxor.fbe.FieldModelDouble(buffer, f26.fbeOffset + f26.fbeSize)
    val f28: com.chronoxor.fbe.FieldModelDouble = com.chronoxor.fbe.FieldModelDouble(buffer, f27.fbeOffset + f27.fbeSize)
    val f29: com.chronoxor.fbe.FieldModelDecimal = com.chronoxor.fbe.FieldModelDecimal(buffer, f28.fbeOffset + f28.fbeSize)
    val f30: com.chronoxor.fbe.FieldModelDecimal = com.chronoxor.fbe.FieldModelDecimal(buffer, f29.fbeOffset + f29.fbeSize)
    val f31: com.chronoxor.fbe.FieldModelString = com.chronoxor.fbe.FieldModelString(buffer, f30.fbeOffset + f30.fbeSize)
    val f32: com.chronoxor.fbe.FieldModelString = com.chronoxor.fbe.FieldModelString(buffer, f31.fbeOffset + f31.fbeSize)
    val f33: com.chronoxor.fbe.FieldModelTimestamp = com.chronoxor.fbe.FieldModelTimestamp(buffer, f32.fbeOffset + f32.fbeSize)
    val f34: com.chronoxor.fbe.FieldModelTimestamp = com.chronoxor.fbe.FieldModelTimestamp(buffer, f33.fbeOffset + f33.fbeSize)
    val f35: com.chronoxor.fbe.FieldModelTimestamp = com.chronoxor.fbe.FieldModelTimestamp(buffer, f34.fbeOffset + f34.fbeSize)
    val f36: com.chronoxor.fbe.FieldModelUUID = com.chronoxor.fbe.FieldModelUUID(buffer, f35.fbeOffset + f35.fbeSize)
    val f37: com.chronoxor.fbe.FieldModelUUID = com.chronoxor.fbe.FieldModelUUID(buffer, f36.fbeOffset + f36.fbeSize)
    val f38: com.chronoxor.fbe.FieldModelUUID = com.chronoxor.fbe.FieldModelUUID(buffer, f37.fbeOffset + f37.fbeSize)
    val f39: com.chronoxor.proto.fbe.FieldModelOrderSide = com.chronoxor.proto.fbe.FieldModelOrderSide(buffer, f38.fbeOffset + f38.fbeSize)
    val f40: com.chronoxor.proto.fbe.FieldModelOrderType = com.chronoxor.proto.fbe.FieldModelOrderType(buffer, f39.fbeOffset + f39.fbeSize)
    val f41: com.chronoxor.proto.fbe.FieldModelOrder = com.chronoxor.proto.fbe.FieldModelOrder(buffer, f40.fbeOffset + f40.fbeSize)
    val f42: com.chronoxor.proto.fbe.FieldModelBalance = com.chronoxor.proto.fbe.FieldModelBalance(buffer, f41.fbeOffset + f41.fbeSize)
    val f43: com.chronoxor.proto.fbe.FieldModelState = com.chronoxor.proto.fbe.FieldModelState(buffer, f42.fbeOffset + f42.fbeSize)
    val f44: com.chronoxor.proto.fbe.FieldModelAccount = com.chronoxor.proto.fbe.FieldModelAccount(buffer, f43.fbeOffset + f43.fbeSize)

    // Field size
    override val fbeSize: Long = 4

    // Field body size
    val fbeBody: Long = (4 + 4
        + id.fbeSize
        + f1.fbeSize
        + f2.fbeSize
        + f3.fbeSize
        + f4.fbeSize
        + f5.fbeSize
        + f6.fbeSize
        + f7.fbeSize
        + f8.fbeSize
        + f9.fbeSize
        + f10.fbeSize
        + f11.fbeSize
        + f12.fbeSize
        + f13.fbeSize
        + f14.fbeSize
        + f15.fbeSize
        + f16.fbeSize
        + f17.fbeSize
        + f18.fbeSize
        + f19.fbeSize
        + f20.fbeSize
        + f21.fbeSize
        + f22.fbeSize
        + f23.fbeSize
        + f24.fbeSize
        + f25.fbeSize
        + f26.fbeSize
        + f27.fbeSize
        + f28.fbeSize
        + f29.fbeSize
        + f30.fbeSize
        + f31.fbeSize
        + f32.fbeSize
        + f33.fbeSize
        + f34.fbeSize
        + f35.fbeSize
        + f36.fbeSize
        + f37.fbeSize
        + f38.fbeSize
        + f39.fbeSize
        + f40.fbeSize
        + f41.fbeSize
        + f42.fbeSize
        + f43.fbeSize
        + f44.fbeSize
        )

    // Field extra size
    override val fbeExtra: Long get()
    {
        if ((_buffer.offset + fbeOffset + fbeSize) > _buffer.size)
            return 0

        val fbeStructOffset = readUInt32(fbeOffset).toLong()
        if ((fbeStructOffset == 0L) || ((_buffer.offset + fbeStructOffset + 4) > _buffer.size))
            return 0

        _buffer.shift(fbeStructOffset)

        val fbeResult = (fbeBody
            + id.fbeExtra
            + f1.fbeExtra
            + f2.fbeExtra
            + f3.fbeExtra
            + f4.fbeExtra
            + f5.fbeExtra
            + f6.fbeExtra
            + f7.fbeExtra
            + f8.fbeExtra
            + f9.fbeExtra
            + f10.fbeExtra
            + f11.fbeExtra
            + f12.fbeExtra
            + f13.fbeExtra
            + f14.fbeExtra
            + f15.fbeExtra
            + f16.fbeExtra
            + f17.fbeExtra
            + f18.fbeExtra
            + f19.fbeExtra
            + f20.fbeExtra
            + f21.fbeExtra
            + f22.fbeExtra
            + f23.fbeExtra
            + f24.fbeExtra
            + f25.fbeExtra
            + f26.fbeExtra
            + f27.fbeExtra
            + f28.fbeExtra
            + f29.fbeExtra
            + f30.fbeExtra
            + f31.fbeExtra
            + f32.fbeExtra
            + f33.fbeExtra
            + f34.fbeExtra
            + f35.fbeExtra
            + f36.fbeExtra
            + f37.fbeExtra
            + f38.fbeExtra
            + f39.fbeExtra
            + f40.fbeExtra
            + f41.fbeExtra
            + f42.fbeExtra
            + f43.fbeExtra
            + f44.fbeExtra
            )

        _buffer.unshift(fbeStructOffset)

        return fbeResult
    }

    // Field type
    var fbeType: Long = fbeTypeConst

    companion object
    {
        const val fbeTypeConst: Long = 110
    }

    // Check if the struct value is valid
    fun verify(fbeVerifyType: Boolean = true): Boolean
    {
        if ((_buffer.offset + fbeOffset + fbeSize) > _buffer.size)
            return true

        val fbeStructOffset = readUInt32(fbeOffset).toLong()
        if ((fbeStructOffset == 0L) || ((_buffer.offset + fbeStructOffset + 4 + 4) > _buffer.size))
            return false

        val fbeStructSize = readUInt32(fbeStructOffset).toLong()
        if (fbeStructSize < (4 + 4))
            return false

        val fbeStructType = readUInt32(fbeStructOffset + 4).toLong()
        if (fbeVerifyType && (fbeStructType != fbeType))
            return false

        _buffer.shift(fbeStructOffset)
        val fbeResult = verifyFields(fbeStructSize)
        _buffer.unshift(fbeStructOffset)
        return fbeResult
    }

    // Check if the struct fields are valid
    @Suppress("UNUSED_PARAMETER")
    fun verifyFields(fbeStructSize: Long): Boolean
    {
        var fbeCurrentSize = 4L + 4L

        if ((fbeCurrentSize + id.fbeSize) > fbeStructSize)
            return true
        if (!id.verify())
            return false
        fbeCurrentSize += id.fbeSize

        if ((fbeCurrentSize + f1.fbeSize) > fbeStructSize)
            return true
        if (!f1.verify())
            return false
        fbeCurrentSize += f1.fbeSize

        if ((fbeCurrentSize + f2.fbeSize) > fbeStructSize)
            return true
        if (!f2.verify())
            return false
        fbeCurrentSize += f2.fbeSize

        if ((fbeCurrentSize + f3.fbeSize) > fbeStructSize)
            return true
        if (!f3.verify())
            return false
        fbeCurrentSize += f3.fbeSize

        if ((fbeCurrentSize + f4.fbeSize) > fbeStructSize)
            return true
        if (!f4.verify())
            return false
        fbeCurrentSize += f4.fbeSize

        if ((fbeCurrentSize + f5.fbeSize) > fbeStructSize)
            return true
        if (!f5.verify())
            return false
        fbeCurrentSize += f5.fbeSize

        if ((fbeCurrentSize + f6.fbeSize) > fbeStructSize)
            return true
        if (!f6.verify())
            return false
        fbeCurrentSize += f6.fbeSize

        if ((fbeCurrentSize + f7.fbeSize) > fbeStructSize)
            return true
        if (!f7.verify())
            return false
        fbeCurrentSize += f7.fbeSize

        if ((fbeCurrentSize + f8.fbeSize) > fbeStructSize)
            return true
        if (!f8.verify())
            return false
        fbeCurrentSize += f8.fbeSize

        if ((fbeCurrentSize + f9.fbeSize) > fbeStructSize)
            return true
        if (!f9.verify())
            return false
        fbeCurrentSize += f9.fbeSize

        if ((fbeCurrentSize + f10.fbeSize) > fbeStructSize)
            return true
        if (!f10.verify())
            return false
        fbeCurrentSize += f10.fbeSize

        if ((fbeCurrentSize + f11.fbeSize) > fbeStructSize)
            return true
        if (!f11.verify())
            return false
        fbeCurrentSize += f11.fbeSize

        if ((fbeCurrentSize + f12.fbeSize) > fbeStructSize)
            return true
        if (!f12.verify())
            return false
        fbeCurrentSize += f12.fbeSize

        if ((fbeCurrentSize + f13.fbeSize) > fbeStructSize)
            return true
        if (!f13.verify())
            return false
        fbeCurrentSize += f13.fbeSize

        if ((fbeCurrentSize + f14.fbeSize) > fbeStructSize)
            return true
        if (!f14.verify())
            return false
        fbeCurrentSize += f14.fbeSize

        if ((fbeCurrentSize + f15.fbeSize) > fbeStructSize)
            return true
        if (!f15.verify())
            return false
        fbeCurrentSize += f15.fbeSize

        if ((fbeCurrentSize + f16.fbeSize) > fbeStructSize)
            return true
        if (!f16.verify())
            return false
        fbeCurrentSize += f16.fbeSize

        if ((fbeCurrentSize + f17.fbeSize) > fbeStructSize)
            return true
        if (!f17.verify())
            return false
        fbeCurrentSize += f17.fbeSize

        if ((fbeCurrentSize + f18.fbeSize) > fbeStructSize)
            return true
        if (!f18.verify())
            return false
        fbeCurrentSize += f18.fbeSize

        if ((fbeCurrentSize + f19.fbeSize) > fbeStructSize)
            return true
        if (!f19.verify())
            return false
        fbeCurrentSize += f19.fbeSize

        if ((fbeCurrentSize + f20.fbeSize) > fbeStructSize)
            return true
        if (!f20.verify())
            return false
        fbeCurrentSize += f20.fbeSize

        if ((fbeCurrentSize + f21.fbeSize) > fbeStructSize)
            return true
        if (!f21.verify())
            return false
        fbeCurrentSize += f21.fbeSize

        if ((fbeCurrentSize + f22.fbeSize) > fbeStructSize)
            return true
        if (!f22.verify())
            return false
        fbeCurrentSize += f22.fbeSize

        if ((fbeCurrentSize + f23.fbeSize) > fbeStructSize)
            return true
        if (!f23.verify())
            return false
        fbeCurrentSize += f23.fbeSize

        if ((fbeCurrentSize + f24.fbeSize) > fbeStructSize)
            return true
        if (!f24.verify())
            return false
        fbeCurrentSize += f24.fbeSize

        if ((fbeCurrentSize + f25.fbeSize) > fbeStructSize)
            return true
        if (!f25.verify())
            return false
        fbeCurrentSize += f25.fbeSize

        if ((fbeCurrentSize + f26.fbeSize) > fbeStructSize)
            return true
        if (!f26.verify())
            return false
        fbeCurrentSize += f26.fbeSize

        if ((fbeCurrentSize + f27.fbeSize) > fbeStructSize)
            return true
        if (!f27.verify())
            return false
        fbeCurrentSize += f27.fbeSize

        if ((fbeCurrentSize + f28.fbeSize) > fbeStructSize)
            return true
        if (!f28.verify())
            return false
        fbeCurrentSize += f28.fbeSize

        if ((fbeCurrentSize + f29.fbeSize) > fbeStructSize)
            return true
        if (!f29.verify())
            return false
        fbeCurrentSize += f29.fbeSize

        if ((fbeCurrentSize + f30.fbeSize) > fbeStructSize)
            return true
        if (!f30.verify())
            return false
        fbeCurrentSize += f30.fbeSize

        if ((fbeCurrentSize + f31.fbeSize) > fbeStructSize)
            return true
        if (!f31.verify())
            return false
        fbeCurrentSize += f31.fbeSize

        if ((fbeCurrentSize + f32.fbeSize) > fbeStructSize)
            return true
        if (!f32.verify())
            return false
        fbeCurrentSize += f32.fbeSize

        if ((fbeCurrentSize + f33.fbeSize) > fbeStructSize)
            return true
        if (!f33.verify())
            return false
        fbeCurrentSize += f33.fbeSize

        if ((fbeCurrentSize + f34.fbeSize) > fbeStructSize)
            return true
        if (!f34.verify())
            return false
        fbeCurrentSize += f34.fbeSize

        if ((fbeCurrentSize + f35.fbeSize) > fbeStructSize)
            return true
        if (!f35.verify())
            return false
        fbeCurrentSize += f35.fbeSize

        if ((fbeCurrentSize + f36.fbeSize) > fbeStructSize)
            return true
        if (!f36.verify())
            return false
        fbeCurrentSize += f36.fbeSize

        if ((fbeCurrentSize + f37.fbeSize) > fbeStructSize)
            return true
        if (!f37.verify())
            return false
        fbeCurrentSize += f37.fbeSize

        if ((fbeCurrentSize + f38.fbeSize) > fbeStructSize)
            return true
        if (!f38.verify())
            return false
        fbeCurrentSize += f38.fbeSize

        if ((fbeCurrentSize + f39.fbeSize) > fbeStructSize)
            return true
        if (!f39.verify())
            return false
        fbeCurrentSize += f39.fbeSize

        if ((fbeCurrentSize + f40.fbeSize) > fbeStructSize)
            return true
        if (!f40.verify())
            return false
        fbeCurrentSize += f40.fbeSize

        if ((fbeCurrentSize + f41.fbeSize) > fbeStructSize)
            return true
        if (!f41.verify())
            return false
        fbeCurrentSize += f41.fbeSize

        if ((fbeCurrentSize + f42.fbeSize) > fbeStructSize)
            return true
        if (!f42.verify())
            return false
        fbeCurrentSize += f42.fbeSize

        if ((fbeCurrentSize + f43.fbeSize) > fbeStructSize)
            return true
        if (!f43.verify())
            return false
        fbeCurrentSize += f43.fbeSize

        if ((fbeCurrentSize + f44.fbeSize) > fbeStructSize)
            return true
        if (!f44.verify())
            return false
        fbeCurrentSize += f44.fbeSize

        return true
    }

    // Get the struct value (begin phase)
    fun getBegin(): Long
    {
        if ((_buffer.offset + fbeOffset + fbeSize) > _buffer.size)
            return 0

        val fbeStructOffset = readUInt32(fbeOffset).toLong()
        assert((fbeStructOffset > 0) && ((_buffer.offset + fbeStructOffset + 4 + 4) <= _buffer.size)) { "Model is broken!" }
        if ((fbeStructOffset == 0L) || ((_buffer.offset + fbeStructOffset + 4 + 4) > _buffer.size))
            return 0

        val fbeStructSize = readUInt32(fbeStructOffset).toLong()
        assert(fbeStructSize >= (4 + 4)) { "Model is broken!" }
        if (fbeStructSize < (4 + 4))
            return 0

        _buffer.shift(fbeStructOffset)
        return fbeStructOffset
    }

    // Get the struct value (end phase)
    fun getEnd(fbeBegin: Long)
    {
        _buffer.unshift(fbeBegin)
    }

    // Get the struct value
    fun get(fbeValue: com.chronoxor.test.StructSimple = com.chronoxor.test.StructSimple()): com.chronoxor.test.StructSimple
    {
        val fbeBegin = getBegin()
        if (fbeBegin == 0L)
            return fbeValue

        val fbeStructSize = readUInt32(0).toLong()
        getFields(fbeValue, fbeStructSize)
        getEnd(fbeBegin)
        return fbeValue
    }

    // Get the struct fields values
    @Suppress("UNUSED_PARAMETER")
    fun getFields(fbeValue: com.chronoxor.test.StructSimple, fbeStructSize: Long)
    {
        var fbeCurrentSize = 4L + 4L

        if ((fbeCurrentSize + id.fbeSize) <= fbeStructSize)
            fbeValue.id = id.get()
        else
            fbeValue.id = 0
        fbeCurrentSize += id.fbeSize

        if ((fbeCurrentSize + f1.fbeSize) <= fbeStructSize)
            fbeValue.f1 = f1.get()
        else
            fbeValue.f1 = false
        fbeCurrentSize += f1.fbeSize

        if ((fbeCurrentSize + f2.fbeSize) <= fbeStructSize)
            fbeValue.f2 = f2.get(true)
        else
            fbeValue.f2 = true
        fbeCurrentSize += f2.fbeSize

        if ((fbeCurrentSize + f3.fbeSize) <= fbeStructSize)
            fbeValue.f3 = f3.get()
        else
            fbeValue.f3 = 0.toByte()
        fbeCurrentSize += f3.fbeSize

        if ((fbeCurrentSize + f4.fbeSize) <= fbeStructSize)
            fbeValue.f4 = f4.get(0xFF.toByte())
        else
            fbeValue.f4 = 0xFF.toByte()
        fbeCurrentSize += f4.fbeSize

        if ((fbeCurrentSize + f5.fbeSize) <= fbeStructSize)
            fbeValue.f5 = f5.get()
        else
            fbeValue.f5 = '\u0000'
        fbeCurrentSize += f5.fbeSize

        if ((fbeCurrentSize + f6.fbeSize) <= fbeStructSize)
            fbeValue.f6 = f6.get('!'.toChar())
        else
            fbeValue.f6 = '!'.toChar()
        fbeCurrentSize += f6.fbeSize

        if ((fbeCurrentSize + f7.fbeSize) <= fbeStructSize)
            fbeValue.f7 = f7.get()
        else
            fbeValue.f7 = '\u0000'
        fbeCurrentSize += f7.fbeSize

        if ((fbeCurrentSize + f8.fbeSize) <= fbeStructSize)
            fbeValue.f8 = f8.get(0x0444.toChar())
        else
            fbeValue.f8 = 0x0444.toChar()
        fbeCurrentSize += f8.fbeSize

        if ((fbeCurrentSize + f9.fbeSize) <= fbeStructSize)
            fbeValue.f9 = f9.get()
        else
            fbeValue.f9 = 0.toByte()
        fbeCurrentSize += f9.fbeSize

        if ((fbeCurrentSize + f10.fbeSize) <= fbeStructSize)
            fbeValue.f10 = f10.get(Byte.MAX_VALUE)
        else
            fbeValue.f10 = Byte.MAX_VALUE
        fbeCurrentSize += f10.fbeSize

        if ((fbeCurrentSize + f11.fbeSize) <= fbeStructSize)
            fbeValue.f11 = f11.get(UByte.MIN_VALUE)
        else
            fbeValue.f11 = UByte.MIN_VALUE
        fbeCurrentSize += f11.fbeSize

        if ((fbeCurrentSize + f12.fbeSize) <= fbeStructSize)
            fbeValue.f12 = f12.get(UByte.MAX_VALUE)
        else
            fbeValue.f12 = UByte.MAX_VALUE
        fbeCurrentSize += f12.fbeSize

        if ((fbeCurrentSize + f13.fbeSize) <= fbeStructSize)
            fbeValue.f13 = f13.get()
        else
            fbeValue.f13 = 0.toShort()
        fbeCurrentSize += f13.fbeSize

        if ((fbeCurrentSize + f14.fbeSize) <= fbeStructSize)
            fbeValue.f14 = f14.get(Short.MAX_VALUE)
        else
            fbeValue.f14 = Short.MAX_VALUE
        fbeCurrentSize += f14.fbeSize

        if ((fbeCurrentSize + f15.fbeSize) <= fbeStructSize)
            fbeValue.f15 = f15.get(UShort.MIN_VALUE)
        else
            fbeValue.f15 = UShort.MIN_VALUE
        fbeCurrentSize += f15.fbeSize

        if ((fbeCurrentSize + f16.fbeSize) <= fbeStructSize)
            fbeValue.f16 = f16.get(UShort.MAX_VALUE)
        else
            fbeValue.f16 = UShort.MAX_VALUE
        fbeCurrentSize += f16.fbeSize

        if ((fbeCurrentSize + f17.fbeSize) <= fbeStructSize)
            fbeValue.f17 = f17.get()
        else
            fbeValue.f17 = 0
        fbeCurrentSize += f17.fbeSize

        if ((fbeCurrentSize + f18.fbeSize) <= fbeStructSize)
            fbeValue.f18 = f18.get(Int.MAX_VALUE)
        else
            fbeValue.f18 = Int.MAX_VALUE
        fbeCurrentSize += f18.fbeSize

        if ((fbeCurrentSize + f19.fbeSize) <= fbeStructSize)
            fbeValue.f19 = f19.get(UInt.MIN_VALUE)
        else
            fbeValue.f19 = UInt.MIN_VALUE
        fbeCurrentSize += f19.fbeSize

        if ((fbeCurrentSize + f20.fbeSize) <= fbeStructSize)
            fbeValue.f20 = f20.get(UInt.MAX_VALUE)
        else
            fbeValue.f20 = UInt.MAX_VALUE
        fbeCurrentSize += f20.fbeSize

        if ((fbeCurrentSize + f21.fbeSize) <= fbeStructSize)
            fbeValue.f21 = f21.get()
        else
            fbeValue.f21 = 0L
        fbeCurrentSize += f21.fbeSize

        if ((fbeCurrentSize + f22.fbeSize) <= fbeStructSize)
            fbeValue.f22 = f22.get(Long.MAX_VALUE)
        else
            fbeValue.f22 = Long.MAX_VALUE
        fbeCurrentSize += f22.fbeSize

        if ((fbeCurrentSize + f23.fbeSize) <= fbeStructSize)
            fbeValue.f23 = f23.get(ULong.MIN_VALUE)
        else
            fbeValue.f23 = ULong.MIN_VALUE
        fbeCurrentSize += f23.fbeSize

        if ((fbeCurrentSize + f24.fbeSize) <= fbeStructSize)
            fbeValue.f24 = f24.get(ULong.MAX_VALUE)
        else
            fbeValue.f24 = ULong.MAX_VALUE
        fbeCurrentSize += f24.fbeSize

        if ((fbeCurrentSize + f25.fbeSize) <= fbeStructSize)
            fbeValue.f25 = f25.get()
        else
            fbeValue.f25 = 0.0f
        fbeCurrentSize += f25.fbeSize

        if ((fbeCurrentSize + f26.fbeSize) <= fbeStructSize)
            fbeValue.f26 = f26.get(123.456f)
        else
            fbeValue.f26 = 123.456f
        fbeCurrentSize += f26.fbeSize

        if ((fbeCurrentSize + f27.fbeSize) <= fbeStructSize)
            fbeValue.f27 = f27.get()
        else
            fbeValue.f27 = 0.0
        fbeCurrentSize += f27.fbeSize

        if ((fbeCurrentSize + f28.fbeSize) <= fbeStructSize)
            fbeValue.f28 = f28.get(-123.456e+123)
        else
            fbeValue.f28 = -123.456e+123
        fbeCurrentSize += f28.fbeSize

        if ((fbeCurrentSize + f29.fbeSize) <= fbeStructSize)
            fbeValue.f29 = f29.get()
        else
            fbeValue.f29 = java.math.BigDecimal.valueOf(0L)
        fbeCurrentSize += f29.fbeSize

        if ((fbeCurrentSize + f30.fbeSize) <= fbeStructSize)
            fbeValue.f30 = f30.get(java.math.BigDecimal.valueOf(123456.123456))
        else
            fbeValue.f30 = java.math.BigDecimal.valueOf(123456.123456)
        fbeCurrentSize += f30.fbeSize

        if ((fbeCurrentSize + f31.fbeSize) <= fbeStructSize)
            fbeValue.f31 = f31.get()
        else
            fbeValue.f31 = ""
        fbeCurrentSize += f31.fbeSize

        if ((fbeCurrentSize + f32.fbeSize) <= fbeStructSize)
            fbeValue.f32 = f32.get("Initial string!")
        else
            fbeValue.f32 = "Initial string!"
        fbeCurrentSize += f32.fbeSize

        if ((fbeCurrentSize + f33.fbeSize) <= fbeStructSize)
            fbeValue.f33 = f33.get()
        else
            fbeValue.f33 = java.time.Instant.EPOCH
        fbeCurrentSize += f33.fbeSize

        if ((fbeCurrentSize + f34.fbeSize) <= fbeStructSize)
            fbeValue.f34 = f34.get(java.time.Instant.EPOCH)
        else
            fbeValue.f34 = java.time.Instant.EPOCH
        fbeCurrentSize += f34.fbeSize

        if ((fbeCurrentSize + f35.fbeSize) <= fbeStructSize)
            fbeValue.f35 = f35.get(java.time.Instant.now())
        else
            fbeValue.f35 = java.time.Instant.now()
        fbeCurrentSize += f35.fbeSize

        if ((fbeCurrentSize + f36.fbeSize) <= fbeStructSize)
            fbeValue.f36 = f36.get()
        else
            fbeValue.f36 = com.chronoxor.fbe.UUIDGenerator.nil()
        fbeCurrentSize += f36.fbeSize

        if ((fbeCurrentSize + f37.fbeSize) <= fbeStructSize)
            fbeValue.f37 = f37.get(com.chronoxor.fbe.UUIDGenerator.sequential())
        else
            fbeValue.f37 = com.chronoxor.fbe.UUIDGenerator.sequential()
        fbeCurrentSize += f37.fbeSize

        if ((fbeCurrentSize + f38.fbeSize) <= fbeStructSize)
            fbeValue.f38 = f38.get(java.util.UUID.fromString("123e4567-e89b-12d3-a456-426655440000"))
        else
            fbeValue.f38 = java.util.UUID.fromString("123e4567-e89b-12d3-a456-426655440000")
        fbeCurrentSize += f38.fbeSize

        if ((fbeCurrentSize + f39.fbeSize) <= fbeStructSize)
            fbeValue.f39 = f39.get()
        else
            fbeValue.f39 = com.chronoxor.proto.OrderSide()
        fbeCurrentSize += f39.fbeSize

        if ((fbeCurrentSize + f40.fbeSize) <= fbeStructSize)
            fbeValue.f40 = f40.get()
        else
            fbeValue.f40 = com.chronoxor.proto.OrderType()
        fbeCurrentSize += f40.fbeSize

        if ((fbeCurrentSize + f41.fbeSize) <= fbeStructSize)
            fbeValue.f41 = f41.get()
        else
            fbeValue.f41 = com.chronoxor.proto.Order()
        fbeCurrentSize += f41.fbeSize

        if ((fbeCurrentSize + f42.fbeSize) <= fbeStructSize)
            fbeValue.f42 = f42.get()
        else
            fbeValue.f42 = com.chronoxor.proto.Balance()
        fbeCurrentSize += f42.fbeSize

        if ((fbeCurrentSize + f43.fbeSize) <= fbeStructSize)
            fbeValue.f43 = f43.get()
        else
            fbeValue.f43 = com.chronoxor.proto.State()
        fbeCurrentSize += f43.fbeSize

        if ((fbeCurrentSize + f44.fbeSize) <= fbeStructSize)
            fbeValue.f44 = f44.get()
        else
            fbeValue.f44 = com.chronoxor.proto.Account()
        fbeCurrentSize += f44.fbeSize
    }

    // Set the struct value (begin phase)
    fun setBegin(): Long
    {
        assert((_buffer.offset + fbeOffset + fbeSize) <= _buffer.size) { "Model is broken!" }
        if ((_buffer.offset + fbeOffset + fbeSize) > _buffer.size)
            return 0

        val fbeStructSize = fbeBody
        val fbeStructOffset = _buffer.allocate(fbeStructSize) - _buffer.offset
        assert((fbeStructOffset > 0) && ((_buffer.offset + fbeStructOffset + fbeStructSize) <= _buffer.size)) { "Model is broken!" }
        if ((fbeStructOffset <= 0) || ((_buffer.offset + fbeStructOffset + fbeStructSize) > _buffer.size))
            return 0

        write(fbeOffset, fbeStructOffset.toUInt())
        write(fbeStructOffset, fbeStructSize.toUInt())
        write(fbeStructOffset + 4, fbeType.toUInt())

        _buffer.shift(fbeStructOffset)
        return fbeStructOffset
    }

    // Set the struct value (end phase)
    fun setEnd(fbeBegin: Long)
    {
        _buffer.unshift(fbeBegin)
    }

    // Set the struct value
    fun set(fbeValue: com.chronoxor.test.StructSimple)
    {
        val fbeBegin = setBegin()
        if (fbeBegin == 0L)
            return

        setFields(fbeValue)
        setEnd(fbeBegin)
    }

    // Set the struct fields values
    @Suppress("UNUSED_PARAMETER")
    fun setFields(fbeValue: com.chronoxor.test.StructSimple)
    {
        id.set(fbeValue.id)
        f1.set(fbeValue.f1)
        f2.set(fbeValue.f2)
        f3.set(fbeValue.f3)
        f4.set(fbeValue.f4)
        f5.set(fbeValue.f5)
        f6.set(fbeValue.f6)
        f7.set(fbeValue.f7)
        f8.set(fbeValue.f8)
        f9.set(fbeValue.f9)
        f10.set(fbeValue.f10)
        f11.set(fbeValue.f11)
        f12.set(fbeValue.f12)
        f13.set(fbeValue.f13)
        f14.set(fbeValue.f14)
        f15.set(fbeValue.f15)
        f16.set(fbeValue.f16)
        f17.set(fbeValue.f17)
        f18.set(fbeValue.f18)
        f19.set(fbeValue.f19)
        f20.set(fbeValue.f20)
        f21.set(fbeValue.f21)
        f22.set(fbeValue.f22)
        f23.set(fbeValue.f23)
        f24.set(fbeValue.f24)
        f25.set(fbeValue.f25)
        f26.set(fbeValue.f26)
        f27.set(fbeValue.f27)
        f28.set(fbeValue.f28)
        f29.set(fbeValue.f29)
        f30.set(fbeValue.f30)
        f31.set(fbeValue.f31)
        f32.set(fbeValue.f32)
        f33.set(fbeValue.f33)
        f34.set(fbeValue.f34)
        f35.set(fbeValue.f35)
        f36.set(fbeValue.f36)
        f37.set(fbeValue.f37)
        f38.set(fbeValue.f38)
        f39.set(fbeValue.f39)
        f40.set(fbeValue.f40)
        f41.set(fbeValue.f41)
        f42.set(fbeValue.f42)
        f43.set(fbeValue.f43)
        f44.set(fbeValue.f44)
    }
}
