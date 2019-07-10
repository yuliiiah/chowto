// Self-review exercises from Ch 2.: 2.4 and 2.5
// 2.4
// Write a statement (or comment) to accomplish
// each of the following:
//  a) State that a program will calculate the
//      product of three integers.
//  b) Prompt the user to enter three integers.
//  c) Define the variables x , y and z to be of type int .
//  d) Read three integers from the keyboard and
//      store them in the variables x , y and z .
//  e) Define the variable result , compute the product
//      of the integers in the variables x , y and
//      z , and use that product to initialize the variable result .
//  f) Print "The product is" followed by the value
//      of the integer variable result .
// 2.5
// Using the statements you wrote in Exercise 2.4, write a complete program
// that calculates the product of three integers.
#include <stdio.h>

// Calculates the product of three integers.
int main(void)
{
    printf("%s", "Enter three integers: ");

    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    int result = x * y * z;
    printf("The product is %d\n", result);
}