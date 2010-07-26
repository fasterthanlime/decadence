
// Let's make it OO now.

// decadenceParser now takes the Parser instance as an argument
decadenceParse: extern proto func (this: Parser)

main: func {

    Parser new() parse()

}


Parser: class {

    parse: func {
        decadenceParse(this)
    }

    // gotLust is now a member method - which means we can access
    // the member fields / methods of Parser in it.
    gotLust: unmangled func {
        "Got lust!" println()
    }

}
