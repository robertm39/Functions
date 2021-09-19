#include <iostream>

#include <memory>

#include "FunctionImpl.h"
#include "PolynomialImpl.h"

using std::cout;
using std::endl;
using std::unique_ptr;
using std::make_unique;

int main()
{
    unique_ptr<FunctionImpl> poly = make_unique<PolynomialImpl>(PolynomialImpl({1, 3, 1}));

    std::cout.precision(std::numeric_limits<b_float>::digits10); // Show 50 decimal digit precision.

    /*cout << "Testing values" << endl;
    for(int i = -2; i <= 2; i++)
    {
        cout << "Value at x=" << i << ": " << poly->apply(i) << endl;
    }
    cout << endl;*/
    cout << "Testing derivatives at zero" << endl;
    for(int i = 0; i <= 200; i++)
    {
        b_float deriv = poly->nthDerivAtZero(i);
        cout << i << "th derivative at zero: " << deriv << endl;
    }
}
