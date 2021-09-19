/**
 * @file FunctionImpl.h
 * @author Robert Morton
 *
 * A function.
 */

#ifndef FUNCTIONS_FUNCTIONIMPL_H
#define FUNCTIONS_FUNCTIONIMPL_H

#include <unordered_map>

#include "consts.h"

/**
 * A function from the reals to the reals.
 */
class FunctionImpl {
private:
    ///A cache to hold derivatives, because they can be expensive to compute.
    mutable std::unordered_map<int, b_float> derivs;
public:
    virtual ~FunctionImpl() {}
    virtual b_float apply(b_float) const = 0;
    virtual b_float nthDerivAtZero(int) const;
};



#endif //FUNCTIONS_FUNCTIONIMPL_H
