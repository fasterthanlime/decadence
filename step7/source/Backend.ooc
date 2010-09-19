
import structs/ArrayList
import os/Process
import io/[File, FileWriter]
import ast/[Node, Expr, Number, BinaryOp, Program, Visitor, Assignment, VariableAccess]

/**
 * Our simple backend, which creates a C file
 */
Backend: class implements Visitor {

    program: Program
    fw: FileWriter
    definedVariables := ArrayList<String> new()

    init: func (=program) {}

    generate: func {
        name := program path  substring(0, program path lastIndexOf('.'))

        fw = FileWriter new(name + ".c")
        fw write("#include <stdio.h>\n\nint main(int argc, char **argv) {\n\n")

        for(e in program body) {
            fw write("    ")
            if(e instanceOf?(Expr)) {
                fw write("printf(\"%d\\n\", ")
                e accept(this)
                fw write(")")
            } else {
                e accept(this)
            }
            fw write(";\n")
        }

        fw write("\n}\n\n")
        fw close()

        "Generated C sources, now compiling." println()
        (output, exitCode) := Process new(["gcc", "-o", name, name + ".c"]) getOutput()
        output print()
        if(exitCode == 0) {
            ("Done! Executable is in "+name+" Have fun!") println()
        } else {
            "Failed :(\nKeeping %s around for inspection." printfln(name + ".c")
        }
    }

    visitAssignment: func (a: Assignment) {
        if(definedVariables indexOf(a left) == -1) {
            definedVariables add(a left)
            fw write("int ")
        }
        fw write(a left). write(" = ")
        a right accept(this)
    }

    visitVariableAccess: func (v: VariableAccess) {
        fw write(v name)
    }

    visitNumber: func (n: Number) {
        fw write(n value toString())
    }

    visitBinaryOp: func (b: BinaryOp) {
        b left accept(this)
        fw write(b type)
        b right accept(this)
    }

}


