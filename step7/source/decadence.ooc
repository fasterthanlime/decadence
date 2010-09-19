// Let's have a backend now

import structs/ArrayList
import ast/Program, Parser, Backend

// entry point
main: func (args: ArrayList<String>) -> Int {
    if(args size < 2) {
        ("Syntax: "+args[0]+ " FILE") println()
        return 1
    }

    parser := Parser new(args[1])
    parser parse()

    backend := Backend new(parser program)
    backend generate()

}
