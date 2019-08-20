// Chapter 3: Self-review exercise 3.44 (a)
// (Factorial) The factorial of a nonnegative integer n is written n!
//  (pronounced “n factorial”) and is defined as follows:
//  n! = n · (n - 1) · (n - 2) · ... · 1
//  (for values of n greater than or equal to 1) and n! = 1 (for n = 0).
//  For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120.

// a) Write a program that reads a nonnegative integer
// and computes and prints its factorial.
#include <stdio.h>

int main(void)
{
    int i;
    printf("%s", "Give me a non-negative integer: ");
    scanf("%u", &i);

    int fact = i;
    int n = 1;

    if (i == 0) {
        fact = 1;
    }
    else {
        int counter = 1;
        while (counter < i) {
            fact *= i - n;
            n++;
            counter++;
        }
    }

    printf("The factorial is: %d\n", fact);
}