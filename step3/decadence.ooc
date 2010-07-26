// Let's make it read files now

import structs/ArrayList

// decadenceParser now takes the Parser instance as an argument
// and now also the path of the file to parse.
decadenceParse: extern proto func (this: Parser, path: String)

main: func (args: ArrayList<String>) -> Int {

    if(args size() < 2) {
        "Syntax: %s FILE" printfln(args[0])
        return 1
    }

    Parser new(args[1]) parse()

}


Parser: class {

    path: String

    init: func (=path) {}

    parse: func {
        decadenceParse(this, path)
    }

    // gotLust is now a member method - which means we can access
    // the member fields / methods of Parser in it.
    gotLust: unmangled func {
        "Got lust!" println()
    }

}
