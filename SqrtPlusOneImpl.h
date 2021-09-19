/**
 * @file SqrtPlusOneImpl.h
 * @author Robert Morton
 *
 * The square-root function.
 */

#ifndef FUNCTIONS_SQRTPLUSONEIMPL_H
#define FUNCTIONS_SQRTPLUSONEIMPL_H

#include <cmath>
#include <unordered_map>

#include "FunctionImpl.h"

/**
 * The square root of x plus one.
 *
 * Use sqrt(x+1) instead of sqrt(x) so the Taylor series is defined.
 */
class SqrtPlusOneImpl : public FunctionImpl {
private:
    mutable std::unordered_map<int, b_float> derivs;
public:
    virtual b_float apply(b_float x) const {return sqrt(x + 1);}
    virtual b_float nthDerivAtZero(int n) const;
};

#endif //FUNCTIONS_SQRTPLUSONEIMPL_H
