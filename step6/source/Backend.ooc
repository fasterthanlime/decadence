
import os/Process
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
        name := program path substring(0, program path lastIndexOf('.'))

        fw = FileWriter new(name + ".c")
        fw write("#include <stdio.h>\n\nint main(int argc, char **argv) {\n\n")

        for(e in program body) {
            fw write("    printf(\"%d\\n\", ")
            e accept(this)
            fw write(");\n")
        }

        fw write("\n}\n\n")
        fw close()

        "Generated C sources, now compiling." println()
        (output, exitCode) := Process new(["gcc", "-o", name, name + ".c"]) getOutput()
        output print()
        if(exitCode == 0) {
            "Done! Executable is in %s. Have fun!" printfln(name toCString())
        } else {
            "Failed :(\nKeeping %s around for inspection." printfln((name + ".c") toCString())
        }
    }

    visitNumber: func (n: Number) {
        fw writef("%Ld", n value)
    }

    visitBinaryOp: func (b: BinaryOp) {
        b left accept(this)
        fw writef(" %s ", b type toCString())
        b right accept(this)
    }

}


