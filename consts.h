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
using boost::multiprecision::digit_base_10;
using boost::multiprecision::et_off;
using boost::multiprecision::et_on;

//40 digits of precision, 20 digits of buffer
//typedef number<cpp_bin_float<40> > b_float;
//typedef number<cpp_bin_float<100, digit_base_10, void, std::int32_t, -262142, 262143>, et_off>  b_float;
typedef number<cpp_bin_float<100, digit_base_10, void, std::int32_t, -524285, 524286>, et_off>  b_float;

//eps = 1e-20
//const b_float EPS = pow(b_float(10), b_float(-10));
const b_float EPS = pow(b_float(2), b_float(-7));

#define FUNCTIONS_CONSTS_H

#endif //FUNCTIONS_CONSTS_H
