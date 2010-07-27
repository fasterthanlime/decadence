
import Expr, Visitor

/**
 * Represents a number literal
 */
Number: class extends Expr {

    value: LLong

    init: func (=value) {}

    toString: func -> String {
        value toString()
    }

    accept: func (v: Visitor) {
        v visitNumber(this)
    }

}
