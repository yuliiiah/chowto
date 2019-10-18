// Chapter 5: Self-review exercise 5.3
// Write a program that tests whether the examples of the math library
//  function calls shown in Fig. 5.2 actually produce the indicated results.
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("The square root of x is: %.2f\n", sqrt(900.0));
    printf("The cube root of x is: %.2f\n", cbrt(27.0));
    printf("The exponential function of x is: %.2f\n", exp(1.0));
    printf("The natural logarithm of x is: %.2f\n", log(2.718282));
    printf("The logarithm of x (base 10) is: %.2f\n", log10(10.0));
    printf("The absolute value of x as a floating-point number is: %.2f\n",
            fabs(13.5));
    printf("x rounded to the smallest integer not less than x is: %.2f\n",
            ceil(9.2));
    printf("x rounded to the largest integer not greater than x is: %.2f\n",
            floor(9.2));
    printf("x raised to power of y is: %.2f\n", pow(2,7));
    printf("The remainder of x/y as a floating-point number is: %.2f\n",
            fmod(13.657, 2.333));
    printf("The trigonometric sine of x (x in radians) is: %.2f\n", sin(0.0));
    printf("The trigonometric cosine of x (x in radians) is: %.2f\n",
            cos(0.0));
    printf("The trigonometric tangent of x (x in radians) is: %.2f\n",
            tan(0.0));
}