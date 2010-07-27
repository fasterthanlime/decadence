
import Number, BinaryOp, VariableAccess, Assignment

Visitor: interface {

    visitNumber: func (n: Number)
    visitBinaryOp: func (b: BinaryOp)
    visitAssignment: func (a: Assignment)
    visitVariableAccess: func (v: VariableAccess)

}
