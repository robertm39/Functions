/**
 * @file Polynomial.h
 * @author Robert Morton
 *
 * A polynomial function.
 */

#ifndef FUNCTIONS_POLYNOMIAL_H
#define FUNCTIONS_POLYNOMIAL_H

#include <vector>

#include "consts.h"
#include "Function.h"

/**
 * A polynomial function.
 */
class Polynomial : public Function {
private:
    const std::vector<b_float> coeffs;

public:
    Polynomial(std::vector<b_float> c): coeffs(c) {}

    virtual b_float apply(b_float);
    virtual b_float nthDerivAtZero(int);
};

#endif //FUNCTIONS_POLYNOMIAL_H
