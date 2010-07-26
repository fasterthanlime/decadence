
// This function is defined in decadence.leg, but it's not in any
// header file, so we declare it 'proto'
decadenceParse: extern proto func

// Entry point
main: func {

    // Just call the parse function =)
    decadenceParse()

}

// Hook called when 'Program' is matched.
// It's 'unmangled' so it can easily be called from C, otherwise
// we'd have to deal with prefixes from the .leg file - which we
// definitely want to avoid.
gotLust: unmangled func {

    "Got lust!" println()

}
