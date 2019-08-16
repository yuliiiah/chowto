// Chapter 3: Self-review exercise 3.43
// (Sides of a Triangle) Write a program that reads three nonzero
//  integer values and determines and prints whether they could represent
//  the sides of a triangle.
#include <stdio.h>

int main(void)
{
    unsigned int a, b, c;
    printf("%s", "Give me three nonzero integers: ");
    scanf("%u %u %u", &a, &b, &c);

    if (a + b > c) {
        if (b + c > a) {
            if (c + a > b) {
                puts("Your numbers can represent the sides of a triangle.");
            }
        }
    } else {
        puts("Your numbers cannot represent the sides of a triangle.");
    }
}