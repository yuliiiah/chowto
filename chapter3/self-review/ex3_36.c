// Chapter 3: Self-review exercise 3.36
// (Armstrong Numbers) Armstrong numbers are numbers that are equal
//  to the sum of their digits raised to power of the number of digits
//  in them. The number 153, for example, equals 1^3 + 5^3 + 3^3.Thus it is
//  an Armstrong number. Write a program to display all three-digit
//  Armstrong numbers.
#include <stdio.h>

int main(void)
{
    int number = 100;

    while (number < 1000) {
        int armstrong = 0;
        int temp = number;

        while (temp != 0) {
            int digit = temp % 10;
            temp /= 10;
            armstrong += digit * digit * digit;
        }

        if (armstrong == number) {
            printf("%d\n", armstrong);
        }

        number++;
    }
}