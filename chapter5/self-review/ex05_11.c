// Chapter 5: Self-review exercise 5.11
// (Rounding Numbers) Function floor may be used to round a number
//  to a specific decimal place. The statement
//      y = floor(x * 10 + .5) / 10;
//  rounds x to the tenths position (the first position to the right
//  of the decimal point). The statement
//      y = floor(x * 100 + .5) / 100;
//  rounds x to the hundredths position (the second position to the right
//  of the decimal point). Write a program that defines four functions to
//  round a number x in various ways
//  a) roundToInteger(number)
//  b) roundToTenths(number)
//  c) roundToHundreths(number)
//  d) roundToThousandths(number)

//  For each value read, your program should print the original value,
//  the number rounded to the nearest integer, the number rounded to the
//  nearest tenth, the number rounded to the nearest hundredth,
//  and the number rounded to the nearest thousandth.
#include <stdio.h>
#include <math.h>

int roundToInteger(float number);
float roundToTenths(float number);
float roundToHundreths(float number);
float roundToThousandths(float number);

int main(void)
{
    float original;
    printf("%s", "Provide a number to round: ");
    scanf("%f", &original);

    int integer = roundToInteger(original);
    float tenths = roundToTenths(original);
    float hundreths = roundToThousandths(original);
    float thousandths = roundToThousandths(original);

    printf("%-15s%-15s%-15s%-15s%-15s\n", "Original", "Integer", "Tenths",
           "Hundreths", "Thousandths");
    printf("%-15f%-15d%-15.1f%-15.2f%-15.3f\n", original, integer, tenths,
            hundreths, thousandths);
}

int roundToInteger(float number)
{
    int integer = (int)floor(number + .5);
    return integer;
}

float roundToTenths(float number)
{
    float tenths = floor(number * 10 + .5) / 10;
    return tenths;
}

float roundToHundreths(float number)
{
    float hundreths = floor(number * 100 + .5) / 100;
    return hundreths;
}

float roundToThousandths(float number)
{
    float thousandths = floor(number * 1000 + .5) / 1000;
    return thousandths;
}