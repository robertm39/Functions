/**
 * @file Polynomial.cpp
 * @author rober
 */

#include <boost/math/special_functions/factorials.hpp>

#include "Polynomial.h"

using boost::math::factorial;

b_float Polynomial::apply(b_float x)
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

b_float Polynomial::nthDerivAtZero(int n)
{
    if(n < coeffs.size())
    {
        return coeffs.at(n) * factorial<b_float>(n);
    }
    return 0;
}