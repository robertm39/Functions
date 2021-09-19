/**
 * @file SumImpl.h
 * @author Robert Morton
 *
 * The implementation for the sum of two functions.
 */

#ifndef FUNCTIONS_SUMIMPL_H
#define FUNCTIONS_SUMIMPL_H

#include "FunctionImpl.h"
#include "Function.h"

class SumImpl : FunctionImpl {
private:
    Function f1;
    Function f2;
public:
    SumImpl(Function f1_, Function f2_): f1(f1_), f2(f2_) {}
    virtual b_float apply(b_float x) {return f1.apply(x) + f2.apply(x);}
    virtual b_float nthDerivAtZero(int n) {return f1.nthDerivAtZero(n) + f2.nthDerivAtZero(n)};
};

#endif //FUNCTIONS_SUMIMPL_H
