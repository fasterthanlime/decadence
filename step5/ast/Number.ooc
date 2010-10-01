
import Expr

/**
 * Represents a number literal
 */
Number: class extends Expr {

    value: LLong

    init: func (=value) {
        "[%s] %s" printfln(class name toCString(), toString() toCString())
    }

    toString: func -> String {
        value toString()
    }

}
