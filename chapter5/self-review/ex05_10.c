// Chapter 5: Self-review exercise 5.10
// (Rounding Numbers) An application of function ceil is rounding a value
//  to the nearest integer. The statement y = ceil(x + .5); rounds the
//  number x to the nearest integer and assigns the result to y.
//  Write a program that reads several numbers and uses the preceding
//  statement to round each of these numbers to the nearest integer. For
//  each number processed, print both the original number and the rounded number.
#include <stdio.h>
#include <math.h>

int main(void)
{
    float number, rounded;

    do {
        printf("%s", "Provide a number to round (-1 to exit): ");
        scanf("%f", &number);

        if (number == -1) {
            break;
        }

        rounded = ceil(number);

        printf("%-10s%-10s\n", "Original", "Rounded");
        printf("%-10.2f%-10.2f\n", number, rounded);
    } while (number != -1);
}