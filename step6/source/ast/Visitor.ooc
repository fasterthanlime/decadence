
import Number, BinaryOp

Visitor: interface {

    visitNumber: func (n: Number)
    visitBinaryOp: func (b: BinaryOp)

}
