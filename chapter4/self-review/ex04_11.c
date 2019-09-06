// Chapter 4: Self-review exercise 4.11
// (Calculating the Sum of Multiples) Write a program to calculate
//  and print the sum of all multiples of 7 from 1 to 100.
#include <stdio.h>

int main(void)
{
    int sum = 0;
    for (int x = 7; x <= 100; x += 7) {
        sum += x;
    }

    printf("%d\n", sum);
}