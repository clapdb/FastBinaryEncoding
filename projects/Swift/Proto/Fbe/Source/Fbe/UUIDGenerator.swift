//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: FBE
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

import Foundation

// Fast Binary Encoding UUID generator
public struct UUIDGenerator {

    // Generate nil UUID0 (all bits set to zero)
    public static func `nil`() -> UUID {
        return UUID(uuid: (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
    }

    // Generate sequential UUID1 (time based version)
    public static func sequential() -> UUID {
        var uuid: uuid_t = (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
        withUnsafeMutablePointer(to: &uuid) {
            $0.withMemoryRebound(to: UInt8.self, capacity: 16) {
                uuid_generate_time($0)
            }
        }

        return UUID(uuid: uuid)
    }

    // Generate random UUID4 (randomly or pseudo-randomly generated version)
    public static func random() -> UUID {
        var uuid: uuid_t = (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
        withUnsafeMutablePointer(to: &uuid) {
            $0.withMemoryRebound(to: UInt8.self, capacity: 16) {
                uuid_generate_random($0)
            }
        }

        return UUID(uuid: uuid)
    }
}

extension UUID: Comparable {
    public static func < (lhs: UUID, rhs: UUID) -> Bool {
        return lhs.hashValue < rhs.hashValue
    }
}
