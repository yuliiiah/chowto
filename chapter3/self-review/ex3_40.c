// Chapter 3: Self-review exercise 3.39
// (Powers of 3 with an Infinite Loop) Write a program that keeps
//  printing the powers of the integer 3, namely 3, 9, 27, 91, 273, and so
//  on. Your loop should not terminate (i.e., you should create an infinite
//  loop). What happens when you run this program?
#include <stdio.h>

int main(void)
{
    int result = 1;
    int power = 3;

    while (result) {
        result *= power;
        printf("%d\n", result);
    }
}

// The program doesn't stop running until stopped manually.
// It quickly begins printing out weird numbers that are simply too
// large for the int to handle. I think. I'm not sure.