// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: enums.fbe
// Version: 1.8.0.0

import Foundation
import ChronoxorFbe

// Fast Binary Encoding Enums client
open class Client: ChronoxorFbe.ClientProtocol {
    // Client sender models accessors

    // Client receiver values accessors

    // Client receiver models accessors

    public var sendBuffer: Buffer = Buffer()
    public var receiveBuffer: Buffer = Buffer()
    public var final: Bool = false

    public init() {
        build(with: false)
    }

    public init(sendBuffer: ChronoxorFbe.Buffer, receiveBuffer: ChronoxorFbe.Buffer) {
        build(with: sendBuffer, receiveBuffer: receiveBuffer, final: false)
    }

    public func send(obj: Any) throws -> Int {
        guard let listener = self as? ChronoxorFbe.SenderListener else { return 0 }
        return try send(obj: obj, listener: listener)
    }

    public func send(obj: Any, listener: ChronoxorFbe.SenderListener) throws -> Int {

        return 0
    }
    open func onReceive(type: Int, buffer: Data, offset: Int, size: Int) -> Bool {
        guard let listener = self as? ReceiverListener else { return false }
        return onReceiveListener(listener: listener, type: type, buffer: buffer, offset: offset, size: size)
    }

    open func onReceiveListener(listener: ReceiverListener, type: Int, buffer: Data, offset: Int, size: Int) -> Bool {
        switch type {
        default: break
        }

        return false
    }
}
