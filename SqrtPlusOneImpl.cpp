/**
 * @file SqrtPlusOneImpl.cpp
 * @author Robert Morton
 */

#include <cmath>
#include <utility>

#include "SqrtPlusOneImpl.h"

using std::make_pair;

b_float SqrtPlusOneImpl::nthDerivAtZero(int n) const
{
    if(n == 0)
    {
        return 1;
    }
    if(n == 1)
    {
        return 0.5;
    }

    if(derivs.count(n) > 0)
    {
        return derivs.at(n);
    }

    b_float result = -pow(b_float(0.5), n);
    for(int i = 0; i <= n-2; i++)
    {
        result *= (-2*b_float(i)) + 1;
    }

    derivs.insert(make_pair(n, result));

    return result;
}