// Let's have a backend now

import structs/ArrayList
import ast/Program, Parser, Backend

// entry point
main: func (args: ArrayList<String>) -> Int {
    if(args size < 2) {
        "Syntax: %s FILE" printfln(args[0] toCString())
        return 1
    }

    parser := Parser new(args[1])
    parser parse()

    backend := Backend new(parser program)
    backend generate()

}
