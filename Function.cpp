/**
 * @file Function.cpp
 * @author Robert Morton
 */

#include <memory>

#include "Function.h"
#include "FunctionImpl.h"
#include "SumImpl.h"
#include "CompositionImpl.h"

using std::shared_ptr;
using std::make_shared;

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