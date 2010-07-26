// Let's build an AST now.

import structs/ArrayList

import ast/[Node, Expr, Number, BinaryOp, Program]


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

    onExpr: unmangled func (e: Expr) {
        program addExpr(e)
    }

}

stringClone: unmangled func (s: String) -> String { s clone() }

// decadenceParser's prototype
decadenceParse: extern proto func (this: Parser, path: String)

// entry point
main: func (args: ArrayList<String>) -> Int {
    if(args size() < 2) {
        "Syntax: %s FILE" printfln(args[0])
        return 1
    }

    parser := Parser new(args[1])
    parser parse()
    "\n\n ====== Finished parsing! AST is: =======" printfln()
    parser program toString() println()
}
