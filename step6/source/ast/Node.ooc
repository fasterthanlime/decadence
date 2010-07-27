
import Visitor

/**
 * An AST node
 */
Node: abstract class {

    // Gives a string representation of this node
    toString: abstract func -> String

    accept: abstract func (v: Visitor)

}

