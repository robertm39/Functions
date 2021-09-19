/**
 * @file Function.cpp
 * @author Robert Morton
 */

#include <memory>
#include <boost/math/special_functions/factorials.hpp>

#include "Function.h"
#include "FunctionImpl.h"
#include "Functions.h"
#include "SumImpl.h"
#include "CompositionImpl.h"
#include "ProductImpl.h"

using std::shared_ptr;
using std::make_shared;
using boost::math::factorial;

/**
 * The sum of the two functions.
 * @param f1 The first function to sum.
 * @param f2 The second function to sum.
 * @return The sum of the two functions.
 */
Function operator+(Function f1, Function f2)
{
    shared_ptr<FunctionImpl> impl = make_shared<SumImpl>(f1, f2);
    return Function(impl);
}

/**
 * The composition of the two functions.
 * @param f1 The outer function.
 * @param f2 The inner function.
 * @return The composition of the two functions.
 */
Function operator*(Function f1, Function f2)
{
    shared_ptr<FunctionImpl> impl = make_shared<CompositionImpl>(f1, f2);
    return Function(impl);
}

Function operator*(b_float c, Function f)
{
    shared_ptr<FunctionImpl> impl = make_shared<ProductImpl>(c, f);
    return Function(impl);
}

/**
 * Use f1 as a transformation to transform f2.
 * @param f1 The outer function.
 * @param f2 The inner function.
 * @param order The maximum order derivative.
 * @return The transformed function.
 */
Function taylorTransform(Function f1, Function f2, int order)
{
    // Start with the zero function
    Function result = polynomial({});

    // The identity function
    Function power = polynomial({0, 1});

    for(int i = 0; i <= order; i++)
    {
        // The coefficient for the power
        b_float coeff = f1.nthDerivAtZero(i) / factorial<b_float>(i);
        result = result + coeff * power;

        power = f2 * power;
    }

    return result;
}