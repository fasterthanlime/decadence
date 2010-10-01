
import structs/ArrayList
import Expr

/**
 * A decadence program
 */
Program: class {

    path: String

    // it's just a list of expressions, right?
    body := ArrayList<Expr> new()

    init: func (=path) {}

    addExpr: func (e: Expr) { body add(e) }

    toString: func -> String {
        b := Buffer new()
        for(e in body) b append(e toString()). append('\n')
        b toString()
    }

}
