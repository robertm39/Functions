/**
 * @file Function.h
 * @author Robert Morton
 *
 * The function class.
 */

#ifndef FUNCTIONS_FUNCTION_H
#define FUNCTIONS_FUNCTION_H

#include <memory>

#include "FunctionImpl.h"

/**
 * The function class.
 * Contains a smart pointer to an implementation.
 */
class Function {
private:
    std::shared_ptr<FunctionImpl> impl;
public:
    Function(std::shared_ptr<FunctionImpl> f): impl(f) {}
    b_float apply(b_float x) {return impl->apply(x);}
    b_float nthDerivAtZero(int n) {return impl->nthDerivAtZero(n);}
};

Function operator+(Function f1, Function f2);
/*{
    std::shared_ptr<FunctionImpl> impl = std::shared_ptr<FunctionImpl>(new SumImpl(f1, f2));
    return Function(impl);
}*/

Function operator*(Function f1, Function f2);
/*{
    std::shared_ptr<FunctionImpl> impl = std::shard_ptr<FunctionImpl>(new CompositionImpl(f1, f2));
    return Function(impl);
}*/

#endif //FUNCTIONS_FUNCTION_H
