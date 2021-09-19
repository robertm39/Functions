/**
 * @file FunctionImpl.cpp
 * @author rober
 */

#include <utility>
#include <cmath>
#include <unordered_map>
#include <boost/math/special_functions/binomial.hpp>

#include "FunctionImpl.h"

//using std::beta;
using boost::math::binomial_coefficient;
using std::pow;
using std::make_pair;

/**
 * The nth derivative of this function at zero (used for Taylor series).
 * Prone to overflow when n is too high (~300).
 *
 * @param n The order of the derivative.
 * @return The nth derivative of this function at zero.
 */
b_float FunctionImpl::nthDerivAtZero(int n) const
{
    // Check the cache, because this can be expensive
    if(derivs.count(n) > 0)
    {
        return derivs.at(n);
    }

    b_float total = 0;
    b_float half_n = n / 2.0;
    //int sign = 1;
    for(int i = 0, sign = 1; i <= n; i++, sign *= -1)
    {
        total += sign * binomial_coefficient<b_float>(n, i) * apply( (half_n - i) * EPS);
    }

    // Hopefully this will be more accurate
    for(int i = 0; i < n; i++)
    {
        total /= EPS;
    }

    derivs.insert(make_pair(n, total));

    return total;
}