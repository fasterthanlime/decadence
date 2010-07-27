
import io/[File, FileWriter]
import ast/[Node, Expr, Number, BinaryOp, Program, Visitor]

/**
 * Our simple backend, which creates a Cfile
 */
Backend: class implements Visitor {

    program: Program
    fw: FileWriter

    init: func (=program) {}

    generate: func {
        name := File new(program path) name()
        name = name substring(0, name lastIndexOf('.'))

        fw = FileWriter new(name + ".c")
        fw write("#include <stdio.h>\n\nint main(int argc, char **argv) {\n\n")

        for(e in program body) {
            fw write("    printf(\"%d\\n\", ")
            e accept(this)
            fw write(");\n")
        }

        fw write("\n}\n\n")
    }

    visitNumber: func (n: Number) {
        fw writef("%Ld", n value)
    }

    visitBinaryOp: func (b: BinaryOp) {
        b left accept(this)
        fw writef(" %s ", b type)
        b right accept(this)
    }

}


