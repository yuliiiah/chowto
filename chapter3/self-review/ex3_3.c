// Chapter 3: Self-review exercise 3.3
// Write a single C statement to accomplish each of the following:
//  a) Multiply the variable product by 2 using the *= operator.
//  b) Multiply the variable product by 2 using the = and * operators.
//  c) Test whether the value of the variable count is greater than 10. If it is, print “ Count is
//      greater than 10 .”
//  d) Calculate the remainder after q is divided by divisor and assign the result to q . Write
//      this statement two different ways.
//  e) Print the value 123.4567 with two digits of precision. What value is printed?
//  f) Print the floating-point value 3.14159 with three digits to the right of the decimal point.
//      What value is printed?
#include <stdio.h>

int main(void)
{
    int a;
    int x = 2;
    a = x *= 2;
    a = x * 2;

    int count = 11;
    if (count > 10) {
        puts("Count is greater than 10.");
    }

    int q = 17;
    q = q % x;
    q %= x;

    float f = 123.4567;
    printf("%.2f\n", f);

    float p = 3.14159;
    printf("%.3f\n", p);
}