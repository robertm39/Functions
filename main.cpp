#include <iostream>

#include <memory>
#include <vector>

#include "FunctionImpl.h"
#include "Function.h"
#include "PolynomialImpl.h"

using std::cout;
using std::endl;
using std::vector;
//using std::unique_ptr;
using std::shared_ptr;
using std::make_shared;

int main()
{
    vector<b_float> coeffs{1, 3, 1};
    shared_ptr<FunctionImpl> polyImpl = make_shared<PolynomialImpl>(coeffs);
    Function poly = Function(polyImpl);

    std::cout.precision(std::numeric_limits<b_float>::digits10); // Show 50 decimal digit precision.

    /*cout << "Testing values" << endl;
    for(int i = -2; i <= 2; i++)
    {
        cout << "Value at x=" << i << ": " << poly->apply(i) << endl;
    }
    cout << endl;*/
    cout << "Testing derivatives at zero" << endl;
    for(int i = 0; i <= 10; i++)
    {
        b_float deriv = poly.nthDerivAtZero(i);
        cout << i << "th derivative at zero: " << deriv << endl;
    }
}
