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
    b_float apply(b_float x) const {return impl->apply(x);}
    b_float nthDerivAtZero(int n) const {return impl->nthDerivAtZero(n);}
};

Function operator+(Function f1, Function f2);
Function operator*(Function f1, Function f2);

// You can only left-multiply (to avoid ambiguity)
Function operator*(b_float c, Function f);

Function taylorTransform(Function f1, Function f2, int order);

#endif //FUNCTIONS_FUNCTION_H
