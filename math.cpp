
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /**
     * Basic Functions

        max(x, y): Returns the maximum of x and y.

        min(x, y): Returns the minimum of x and y.

        abs(x): Returns the absolute value of x.

      * Trigonometric Functions

        sin(x): Returns the sine of x (in radians).

        cos(x): Returns the cosine of x (in radians).

        tan(x): Returns the tangent of x (in radians).

        asin(x): Returns the arc sine of x.

        acos(x): Returns the arc cosine of x.

        atan(x): Returns the arc tangent of x.

      * Exponential and Logarithmic Functions

        exp(x): Returns e raised to the power of x.

        log(x): Returns the natural logarithm of x.

        log10(x): Returns the base-10 logarithm of x.

      * Power Functions

        pow(x, y): Returns x raised to the power of y.

        sqrt(x): Returns the square root of x.

        cbrt(x): Returns the cubic root of x.

       * Rounding Functions

        ceil(x): Returns the smallest integer greater than or equal to x.

        floor(x): Returns the largest integer less than or equal to x.

        round(x): Rounds x to the nearest integer.

       * Hyperbolic Functions

        sinh(x): Returns the hyperbolic sine of x.

        cosh(x): Returns the hyperbolic cosine of x.

        tanh(x): Returns the hyperbolic tangent of x.
     */

    double x = 2.3;
    std::cout << "Sine value of x=2.3: " << sin(x) << std::endl;
    std::cout << "Cosine value of x=2.3: " << cos(x) << std::endl;
    std::cout << "Tangent value of x=2.3: " << tan(x) << std::endl;
    double y = 0.25;
    std::cout << "Square root value of y=0.25: " << sqrt(y) << std::endl;
    int z = -10;
    std::cout << "Absolute value of z=-10: " << abs(z) << std::endl;
    std::cout << "Power value: x^y = (2.3^0.25): " << pow(x, y) << std::endl;
    x = 3.0;
    y = 4.0;
    std::cout << "Hypotenuse having other two sides as x=3.0 and y=4.0: " << hypot(x, y) << std::endl;
    x = 4.56;
    std::cout << "Floor value of x=4.56 is: " << floor(x) << std::endl;
    x = -4.57;
    std::cout << "Absolute value of x=-4.57 is: " << fabs(x) << std::endl;
    x = 1.0;
    std::cout << "Arc Cosine value of x=1.0: " << acos(x) << std::endl;
    std::cout << "Arc Sine value of x=1.0: " << asin(x) << std::endl;
    std::cout << "Arc Tangent value of x=1.0: " << atan(x) << std::endl;
    y = 12.3;
    std::cout << "Ceiling value of y=12.3: " << ceil(y) << std::endl;
    x = 57.3; // in radians
    std::cout << "Hyperbolic Cosine of x=57.3: " << cosh(x) << std::endl;
    std::cout << "Hyperbolic tangent of x=57.3: " << tanh(x) << std::endl;
    y = 100.0;
    std::cout << "Log value of y=100.0 is: " << log(y) << std::endl;

    return 0;
}