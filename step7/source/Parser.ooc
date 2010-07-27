
import ast/[Node, Expr, Number, BinaryOp, Program, VariableAccess, Assignment]

/**
 * Our simple parser that creates an AST
 */
Parser: class {

    path: String
    program: Program

    init: func (=path) {
        program = Program new(path)
    }

    parse: func {
        decadenceParse(this, path)
    }

    gotNumber: unmangled func (number: String) -> Number {
        Number new(number toLLong())
    }

    gotBinaryOp: unmangled func (type: String, left, right: Expr) -> BinaryOp {
        BinaryOp new(type clone(), left, right)
    }

    gotAssignment: unmangled func (left: String, right: Expr) -> Assignment {
        Assignment new(left clone(), right)
    }

    gotVariableAccess: unmangled func (name: String) -> VariableAccess {
        VariableAccess new(name clone())
    }

    onExpr: unmangled func (n: Node) {
        program body add(n)
    }

}

stringClone: unmangled func (s: String) -> String { s clone() }

// decadenceParser's prototype
decadenceParse: extern proto func (this: Parser, path: String)
