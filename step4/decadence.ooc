// Let's make it have more interesting nodes now

import structs/ArrayList

// decadenceParser now takes the Parser instance as an argument
// and now also the path of the file to parse.
decadenceParse: extern proto func (this: Parser, path: CString)

main: func (args: ArrayList<String>) -> Int {

    if(args size < 2) {
        "Syntax: %s FILE" printfln(args[0] toCString())
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

    gotLust: unmangled func {
        "Get lost!" println()
    }

    gotNumber: unmangled func (number: String) {
        "Got number %s" printfln(number)
    }

}
