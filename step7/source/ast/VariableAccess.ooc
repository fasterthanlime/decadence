
import Expr, Visitor

/**
 * Represents access to a variable
 */
VariableAccess: class extends Expr {

    name: String

    init: func (=name) {}

    toString: func -> String {
        name
    }

    accept: func (v: Visitor) {
        v visitVariableAccess(this)
    }

}
