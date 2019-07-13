// Self-review exercises from Ch. 2: 2.25
// (Multiples) Write a program that reads in two integers
//  and determines and prints whether the first is a multiple of the second.
#include <stdio.h>

int main(void)
{
    printf("%s", "Give me two integers: ");

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    if (num1 % num2 == 0) {
        puts("The first integer is a multiple of the second.");
    }
    if (num1 % num2 != 0) {
        puts("The first integer is not a multiple of the second.");
    }
}