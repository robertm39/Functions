/**
 * @file Functions.cpp
 * @author Robert Morton
 */

#include <vector>
#include <memory>

#include "consts.h"
#include "Function.h"
#include "FunctionImpl.h"
#include "PolynomialImpl.h"
#include "Functions.h"

using std::vector;
using std::shared_ptr;
using std::make_shared;

Function polynomial(vector<b_float> coeffs)
{
    shared_ptr<FunctionImpl> impl = make_shared<PolynomialImpl>(coeffs);
    return Function(impl);
}

Function sqrtPlusOne()
{
    // inefficient
    return Function(std::make_shared<SqrtPlusOneImpl>());
    //return SQRT_PLUS_ONE;
}