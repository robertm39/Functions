/**
 * @file ProductImpl.h
 * @author rober
 *
 *
 */

#ifndef FUNCTIONS_PRODUCTIMPL_H
#define FUNCTIONS_PRODUCTIMPL_H

#include "FunctionImpl.h"
#include "Function.h"

class ProductImpl : public FunctionImpl {
private:
    const b_float c;
    const Function f;
public:
    ProductImpl(b_float c_, Function f_): c(c_), f(f_) {}
    virtual b_float apply(b_float x) const {return c * f.apply(x);}
    virtual b_float nthDerivAtZero(int n) const {return c * f.nthDerivAtZero(n);}
};

#endif //FUNCTIONS_PRODUCTIMPL_H
