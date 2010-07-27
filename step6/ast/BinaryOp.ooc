
import Expr, Visitor

/**
 * A binary operation
 */
BinaryOp: class extends Expr {

    type: String
    left, right: Expr

    init: func (=type, =left, =right) {
        "[%s] %s" printfln(class name, toString())
    }

    toString: func -> String {
        "%s %s %s" format(left toString(), type, right toString())
    }

    accept: func (v: Visitor) {
        v visitBinaryOp(this)
    }

}
