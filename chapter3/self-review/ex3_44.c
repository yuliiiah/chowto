// Chapter 3: Self-review exercise 3.44
// (Sides of a Right Triangle) Write a program that reads three
//  nonzero integers and determines and prints whether they
//  could be the sides of a right triangle.
#include <stdio.h>

int main(void)
{
    unsigned int a, b, c;
    printf("%s", "Give me three nonzero integers: ");
    scanf("%u %u %u", &a, &b, &c);

    if (a * a + b * b == c * c) {
        puts("Your integers can represent the sides of a right triangle.");
    } else if (b * b + c * c == a * a) {
        puts("Your integers can represent the sides of a right triangle.");
    } else if (c * c + a * a == b * b) {
        puts("Your integers can represent the sides of a right triangle.");
    } else {
        puts("Your integers cannot represent the sides of a right triangle.");
    }
}