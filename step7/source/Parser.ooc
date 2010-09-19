
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
        decadenceParse(this, path toCString())
    }

    gotNumber: unmangled func (number: CString) -> Number {
        Number new(number toString() toLLong())
    }

    gotBinaryOp: unmangled func (type: CString, left, right: Expr) -> BinaryOp {
        BinaryOp new(type toString() clone(), left, right)
    }

    gotAssignment: unmangled func (left: CString, right: Expr) -> Assignment {
        Assignment new(left toString() clone(), right)
    }

    gotVariableAccess: unmangled func (name: CString) -> VariableAccess {
        VariableAccess new(name toString() clone())
    }

    onExpr: unmangled func (n: Node) {
        program body add(n)
    }

}

stringClone: unmangled func (s: CString) -> CString { s clone() }

// decadenceParser's prototype
decadenceParse: extern proto func (this: Parser, path: CString)
