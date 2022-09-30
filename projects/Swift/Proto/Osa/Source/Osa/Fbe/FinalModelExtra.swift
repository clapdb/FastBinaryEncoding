//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: osa.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

import Fbe

// Fast Binary Encoding Extra final model
public class FinalModelExtra: FinalModel {
    public var _buffer: Buffer
    public var _offset: Int

    let name: Fbe.FinalModelString
    let detail: Fbe.FinalModelString
    let sex: FinalModelSex
    let flag: FinalModelMyFLags

    // Field type
    public var fbeType: Int = fbeTypeConst

    public static let fbeTypeConst: Int = 1

    public required init(buffer: Buffer, offset: Int) {
        _buffer = buffer
        _offset = offset

        name = FinalModelString(buffer: buffer, offset: 0)
        detail = FinalModelString(buffer: buffer, offset: 0)
        sex = FinalModelSex(buffer: buffer, offset: 0)
        flag = FinalModelMyFLags(buffer: buffer, offset: 0)
    }

    // Get the allocation size
    public func fbeAllocationSize(value fbeValue: Extra) -> Int {
        return 0
            + name.fbeAllocationSize(value: fbeValue.name)
            + detail.fbeAllocationSize(value: fbeValue.detail)
            + sex.fbeAllocationSize(value: fbeValue.sex)
            + flag.fbeAllocationSize(value: fbeValue.flag)
    }

    // Check if the struct value is valid
    public func verify() -> Int {
        _buffer.shift(offset: fbeOffset)
        let fbeResult = verifyFields()
        _buffer.unshift(offset: fbeOffset)
        return fbeResult
    }

    // Check if the struct fields are valid
    public func verifyFields() -> Int {
        var fbeCurrentOffset: Int = 0
        var fbeFieldSize: Int = 0

        name.fbeOffset = fbeCurrentOffset
        fbeFieldSize = name.verify()
        if fbeFieldSize == Int.max {
            return Int.max
        }
        fbeCurrentOffset += fbeFieldSize

        detail.fbeOffset = fbeCurrentOffset
        fbeFieldSize = detail.verify()
        if fbeFieldSize == Int.max {
            return Int.max
        }
        fbeCurrentOffset += fbeFieldSize

        sex.fbeOffset = fbeCurrentOffset
        fbeFieldSize = sex.verify()
        if fbeFieldSize == Int.max {
            return Int.max
        }
        fbeCurrentOffset += fbeFieldSize

        flag.fbeOffset = fbeCurrentOffset
        fbeFieldSize = flag.verify()
        if fbeFieldSize == Int.max {
            return Int.max
        }
        fbeCurrentOffset += fbeFieldSize

        return fbeCurrentOffset
    }

    // Get the struct value
    public func get(size: inout Size) -> Extra {
        var fbeValue = Extra()
        return get(size: &size, fbeValue: &fbeValue)
    }

    // Get the struct value
    public func get(size: inout Size, fbeValue: inout Extra) -> Extra {
        _buffer.shift(offset: fbeOffset)
        size.value = getFields(fbeValue: &fbeValue)
        _buffer.unshift(offset: fbeOffset)
        return fbeValue
    }

    // Get the struct fields values
    public func getFields(fbeValue: inout Extra) -> Int {
        var fbeCurrentOffset: Int = 0
        var fbeCurrentSize: Int = 0
        var fbeFieldSize = Size()

        name.fbeOffset = fbeCurrentOffset
        fbeValue.name = name.get(size: &fbeFieldSize)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        detail.fbeOffset = fbeCurrentOffset
        fbeValue.detail = detail.get(size: &fbeFieldSize)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        sex.fbeOffset = fbeCurrentOffset
        fbeValue.sex = sex.get(size: &fbeFieldSize)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        flag.fbeOffset = fbeCurrentOffset
        fbeValue.flag = flag.get(size: &fbeFieldSize)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        return fbeCurrentSize
    }

    // Set the struct value
    public func set(value fbeValue: Extra) throws -> Int {
        _buffer.shift(offset: fbeOffset)
        let fbeSize = try setFields(fbeValue: fbeValue)
        _buffer.unshift(offset: fbeOffset)
        return fbeSize
    }

    // Set the struct fields values
    public func setFields(fbeValue: Extra) throws -> Int {
        var fbeCurrentOffset: Int = 0
        var fbeCurrentSize: Int = 0
        let fbeFieldSize = Size()

        name.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = try name.set(value: fbeValue.name)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        detail.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = try detail.set(value: fbeValue.detail)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        sex.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = try sex.set(value: fbeValue.sex)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        flag.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = try flag.set(value: fbeValue.flag)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        return fbeCurrentSize
    }
}
