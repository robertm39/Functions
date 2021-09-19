/**
 * @file CompositionImpl.h
 * @author Robert Morton
 *
 * The composition of two functions.
 */

#ifndef FUNCTIONS_COMPOSITIONIMPL_H
#define FUNCTIONS_COMPOSITIONIMPL_H

/**
 * The composition of two functions.
 */
class CompositionImpl : FunctionImpl{
private:
    Function f1;
    Function f2;
public:
    CompositionImpl(Function f1_, Function f2_): f1(f1_), f2(f2_) {}
    virtual b_float apply(b_float x) {return f1.apply(f2.apply(x));}
    // Use the numerical method for finding the nth derivative at zero
};

#endif //FUNCTIONS_COMPOSITIONIMPL_H
