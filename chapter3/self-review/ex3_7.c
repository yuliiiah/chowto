// Chapter 3: Self-review exercise 3.7
// Write a C program that uses the statements in Exercise 3.6 to calculate x
//  raised to the y power. The program should have a while iteration control statement.
#include <stdio.h>

int main(void)
{
    printf("%s", "Give me two positive integers: ");

    unsigned int x, y;
    scanf("%u %u", &x, &y);

    unsigned int result = x;
    while (y != 0) {
        result *= x;
        y--;
    }

    printf("The result is %u\n", result);
}