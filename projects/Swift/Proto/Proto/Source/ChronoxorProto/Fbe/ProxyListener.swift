// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: proto.fbe
// Version: 1.8.0.0

import ChronoxorFbe
import Foundation

// Fast Binary Encoding ChronoxorProto proxy listener
public protocol ProxyListener {
    func onProxy(model: OrderMessageModel, type: Int, buffer: Data, offset: Int, size: Int)
    func onProxy(model: BalanceMessageModel, type: Int, buffer: Data, offset: Int, size: Int)
    func onProxy(model: AccountMessageModel, type: Int, buffer: Data, offset: Int, size: Int)
}

public extension ProxyListener {
    func onProxy(model: OrderModel, type: Int, buffer: Data, offset: Int, size: Int) {}
    func onProxy(model: BalanceModel, type: Int, buffer: Data, offset: Int, size: Int) {}
    func onProxy(model: AccountModel, type: Int, buffer: Data, offset: Int, size: Int) {}
    func onProxy(model: OrderMessageModel, type: Int, buffer: Data, offset: Int, size: Int) {}
    func onProxy(model: BalanceMessageModel, type: Int, buffer: Data, offset: Int, size: Int) {}
    func onProxy(model: AccountMessageModel, type: Int, buffer: Data, offset: Int, size: Int) {}
}
