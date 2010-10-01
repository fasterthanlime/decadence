
import Expr

/**
 * A binary operation
 */
BinaryOp: class extends Expr {

    type: String
    left, right: Expr

    init: func (=type, =left, =right) {
        "[%s] %s" printfln(class name toCString(), toString() toCString())
    }

    toString: func -> String {
        "%s %s %s" format(left toString() toCString(), type toCString(), right toString() toCString())
    }

}
