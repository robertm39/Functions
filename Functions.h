/**
 * @file Functions.h
 * @author Robert Morton
 *
 * Many utility functions for making Functions.
 */

#ifndef FUNCTIONS_FUNCTIONS_H
#define FUNCTIONS_FUNCTIONS_H

#include <vector>
#include <memory>

#include "consts.h"
#include "Function.h"
#include "FunctionImpl.h"
#include "PolynomialImpl.h"
#include "SqrtPlusOneImpl.h"

Function polynomial(std::vector<b_float> coeffs);
//Function SQRT_PLUS_ONE = Function(std::make_shared<SqrtPlusOneImpl>());
Function sqrtPlusOne();

#endif //FUNCTIONS_FUNCTIONS_H
