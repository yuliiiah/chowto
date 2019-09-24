// Chapter 4: Self-review exercise 4.25
// (Table of Decimal, Binary, Octal and Hexadecimal Equivalents)
//  Write a program that prints a table of the binary, octal and hexadecimal
//  equivalents of the decimal numbers in the range 1 through 256. If you’re
//  not familiar with these number systems, read Appendix C before you attempt
//  this exercise. [Note: You can display an integer as an octal or
//  hexadecimal value with the conversion specifiers %o and %X , respectively.]
#include <stdio.h>

int main(void)
{
    printf("%-15s%-15s%-15s%-15s\n", "Decimal", "Octal",
            "Hexadecimal", "Binary");
    printf("%-15d%-15d%-15d%-15d\n", 1, 1, 1, 1);

    for (int i = 2; i <= 256; i++) {
        printf("%-15d%-15o%-15x", i, i, i);

        int base = 2;
        while (i / base > 1) {
            base *= 2;
        }

        int temp = i;
        while (temp >= 0 && base >= 1) {
            if (temp / base >= 1) {
                printf("%d", 1);
            } else {
                printf("%d", 0);
            }

            temp %= base;
            base /= 2;
        }
        puts("");
    }
    puts("");
}