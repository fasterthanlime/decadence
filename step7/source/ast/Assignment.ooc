
import Expr, Visitor, Node

/**
 * A binary operation
 */
Assignment: class extends Node {

    left: String
    right: Expr

    init: func (=left, =right) {}

    toString: func -> String {
        "%s = %s" format(left, right toString())
    }

    accept: func (v: Visitor) {
        v visitAssignment(this)
    }

}
