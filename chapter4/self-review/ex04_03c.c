// Chapter 4: Self-review exercise 4.3
// Write a statement or a set of statements to accomplish each
//  of the following tasks:
//      c) Calculate the value of 2.5 raised to the power of 3 using the
//          pow function. Print the result with a precision of 2
//          in a field width of 10 positions. What is the value that prints?
#include <stdio.h>
#include <math.h>

int main(void)
{
    double result = pow(2.5, 3);

    printf("%10.2f\n", result);
}