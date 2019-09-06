// Chapter 4: Self-review exercise 4.12
// (Prime Numbers) Write a program to calculate and print
//  a list of all prime numbers from 1 to 100.
#include <stdio.h>

int main(void)
{
    int number, sum = 0;

    for (number = 0; number <= 100; number++) {

        if (number == 0 || number == 1) {
            continue;
        } else if (number == 2 || number == 3 || number == 5 || number == 7
        || number == 11 || number == 13) {
            sum += number;
            continue;
        } else if (number % 2 == 0 || number % 3 == 0 || number % 5 == 0 ||
        number % 7 == 0 || number % 11 == 0 || number % 13 == 0) {
            continue;
        } else {
            sum += number;
        }
    }

    printf("%d\n", sum);
}