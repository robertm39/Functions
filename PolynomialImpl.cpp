/**
 * @file PolynomialImpl.cpp
 * @author rober
 */

#include <boost/math/special_functions/factorials.hpp>

#include "PolynomialImpl.h"

using boost::math::factorial;

/**
 * The value of the polynomial at x.
 * @param x The input value.
 * @return The value of the polynomial at x.
 */
b_float PolynomialImpl::apply(b_float x) const
{
    b_float total = 0;

    b_float x_to_power = 1;
    for(auto coeff: coeffs)
    {
        total += coeff * x_to_power;
        x_to_power *= x;
    }

    return total;
}

/**
 * The nth derivative of the polynomial at zero.
 * @param n The order of the derivative.
 * @return The nth derivative of the polynomial at zero.
 */
b_float PolynomialImpl::nthDerivAtZero(int n) const
{
    if(n < coeffs.size())
    {
        return coeffs.at(n) * factorial<b_float>(n);
    }
    return 0;
}