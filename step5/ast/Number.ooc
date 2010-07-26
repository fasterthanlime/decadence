
import Expr

/**
 * Represents a number literal
 */
Number: class extends Expr {

    value: LLong

    init: func (=value) {
        "[%s] %s" printfln(class name, toString())
    }

    toString: func -> String {
        value toString()
    }

}
