// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// Version: 1.8.0.0

@file:Suppress("UnusedImport", "unused")

package com.chronoxor.test

@Suppress("MemberVisibilityCanBePrivate", "RemoveRedundantCallsOfConversionMethods")
open class StructSet : Comparable<Any?>
{
    var f1: java.util.HashSet<Byte>
    var f2: java.util.HashSet<EnumSimple>
    var f3: java.util.HashSet<FlagsSimple>
    var f4: java.util.HashSet<StructSimple>

    @Transient open var fbeType: Long = 132

    constructor(f1: java.util.HashSet<Byte> = java.util.HashSet(), f2: java.util.HashSet<EnumSimple> = java.util.HashSet(), f3: java.util.HashSet<FlagsSimple> = java.util.HashSet(), f4: java.util.HashSet<StructSimple> = java.util.HashSet())
    {
        this.f1 = f1
        this.f2 = f2
        this.f3 = f3
        this.f4 = f4
    }

    @Suppress("UNUSED_PARAMETER")
    constructor(other: StructSet)
    {
        this.f1 = other.f1
        this.f2 = other.f2
        this.f3 = other.f3
        this.f4 = other.f4
    }

    open fun clone(): StructSet
    {
        // Serialize the struct to the FBE stream
        val writer = com.chronoxor.test.fbe.StructSetModel()
        writer.serialize(this)

        // Deserialize the struct from the FBE stream
        val reader = com.chronoxor.test.fbe.StructSetModel()
        reader.attach(writer.buffer)
        return reader.deserialize()
    }

    override fun compareTo(other: Any?): Int
    {
        if (other == null)
            return -1

        if (!StructSet::class.java.isAssignableFrom(other.javaClass))
            return -1

        @Suppress("UNUSED_VARIABLE")
        val obj = other as StructSet? ?: return -1

        @Suppress("VARIABLE_WITH_REDUNDANT_INITIALIZER", "CanBeVal", "UnnecessaryVariable")
        var result = 0
        return result
    }

    override fun equals(other: Any?): Boolean
    {
        if (other == null)
            return false

        if (!StructSet::class.java.isAssignableFrom(other.javaClass))
            return false

        @Suppress("UNUSED_VARIABLE")
        val obj = other as StructSet? ?: return false

        return true
    }

    override fun hashCode(): Int
    {
        @Suppress("CanBeVal", "UnnecessaryVariable")
        var hash = 17
        return hash
    }

    override fun toString(): String
    {
        val sb = StringBuilder()
        sb.append("StructSet(")
        @Suppress("ConstantConditionIf")
        if (true)
        {
            var first = true
            sb.append("f1=[").append(f1.size).append("]{")
            for (item in f1)
            {
                sb.append(if (first) "" else ",").append(item)
                first = false
            }
            sb.append("}")
        }
        @Suppress("ConstantConditionIf")
        if (true)
        {
            var first = true
            sb.append(",f2=[").append(f2.size).append("]{")
            for (item in f2)
            {
                sb.append(if (first) "" else ",").append(item)
                first = false
            }
            sb.append("}")
        }
        @Suppress("ConstantConditionIf")
        if (true)
        {
            var first = true
            sb.append(",f3=[").append(f3.size).append("]{")
            for (item in f3)
            {
                sb.append(if (first) "" else ",").append(item)
                first = false
            }
            sb.append("}")
        }
        @Suppress("ConstantConditionIf")
        if (true)
        {
            var first = true
            sb.append(",f4=[").append(f4.size).append("]{")
            for (item in f4)
            {
                sb.append(if (first) "" else ",").append(item)
                first = false
            }
            sb.append("}")
        }
        sb.append(")")
        return sb.toString()
    }

    open fun toJson(): String = com.chronoxor.test.fbe.Json.engine.toJson(this)

    companion object
    {
        const val fbeTypeConst: Long = 132
        fun fromJson(json: String): StructSet = com.chronoxor.test.fbe.Json.engine.fromJson(json, StructSet::class.java)
    }
}
