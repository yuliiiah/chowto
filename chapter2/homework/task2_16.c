// Self-review exercises from Ch. 2: 2.16
// Arithmetic) Write a program that asks the user
//  to enter two numbers, obtains them from
//  the user and prints their sum, product,
//  difference, quotient and remainder.
#include <stdio.h>

int main(void)
{
    printf("%s", "Enter two integers: ");

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    printf("The sum is: %d\n", num1 + num2);
    printf("The product is: %d\n", num1 * num2);
    printf("The difference is: %d\n", num1 - num2);
    printf("The quotient is: %d\n", num1 / num2);
    printf("The remainder is: %d\n", num1 % num2);
}