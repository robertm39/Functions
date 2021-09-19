#include <iostream>

#include <memory>

#include "Function.h"
#include "Polynomial.h"

using std::cout;
using std::endl;
using std::unique_ptr;
using std::make_unique;

int main()
{
    unique_ptr<Function> poly = make_unique<Polynomial>(Polynomial({1, 3, 1}));

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
        b_float deriv = poly->nthDerivAtZero(i);
        cout << i << "th derivative at zero: " << deriv << endl;
    }
}
