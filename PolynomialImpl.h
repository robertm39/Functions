/**
 * @file PolynomialImpl.h
 * @author Robert Morton
 *
 * A polynomial function.
 */

#ifndef FUNCTIONS_POLYNOMIALIMPL_H
#define FUNCTIONS_POLYNOMIALIMPL_H

#include <vector>

#include "consts.h"
#include "FunctionImpl.h"

/**
 * A polynomial function.
 */
class PolynomialImpl : public FunctionImpl {
private:
    ///The coefficients of the polynomial.
    const std::vector<b_float> coeffs;

public:
    /**
     * The constructor.
     * @param c The coefficients of the polynomial
     */
    PolynomialImpl(std::vector<b_float> c): coeffs(c) {}

    virtual b_float apply(b_float) const;
    virtual b_float nthDerivAtZero(int) const;
};

#endif //FUNCTIONS_POLYNOMIALIMPL_H
