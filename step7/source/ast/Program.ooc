import structs/ArrayList
import Visitor, Node

/**
 * A decadence program
 */
Program: class {

    path: String

    // it's just a list of expressions, right?
    body := ArrayList<Node> new()

    init: func (=path) {}

    toString: func -> String {
        b := Buffer new()
        for(n in body) b append(n toString()). append('\n')
        b toString()
    }

}
