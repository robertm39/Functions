/**
 * @file consts.h
 * @author Robert Morton
 *
 * The b_float type and the epsilon value.
 */

#ifndef FUNCTIONS_CONSTS_H

#include <cmath>

#include <boost/multiprecision/cpp_bin_float.hpp>
#include <boost/multiprecision/number.hpp>

using boost::multiprecision::cpp_bin_float;
using boost::multiprecision::number;

//40 digits of precision, 20 digits of buffer
typedef number<cpp_bin_float<40> > b_float;

//eps = 1e-20
const b_float EPS = pow(b_float(10), b_float(-20));

#define FUNCTIONS_CONSTS_H

#endif //FUNCTIONS_CONSTS_H
