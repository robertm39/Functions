/**
 * @file Function.h
 * @author Robert Morton
 *
 * A function.
 */

#ifndef FUNCTIONS_FUNCTION_H
#define FUNCTIONS_FUNCTION_H

#include "consts.h"

/**
 * A function from the reals to the reals.
 */
class Function {
private:

public:
    virtual b_float apply(b_float) = 0;
    virtual b_float nthDerivAtZero(int);
};

#endif //FUNCTIONS_FUNCTION_H
