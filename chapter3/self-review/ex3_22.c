// Chapter 3: Self-review exercise 3.22
// (Checking if a Number is Prime) A prime number is any natural number
//  greater than 1 that is divisible only by 1 and by itself. Write a C
//  program that reads an integer and determines whether
//  it is a prime number or not.
#include <stdio.h>

int main(void)
{
    printf("%s", "Give me a positive integer: ");
    unsigned int num;
    scanf("%u", &num);

    if (num > 1) {

        if (num == 2 || num == 3 || num == 5 || num == 7 || num == 11) {
            puts("Your integer is a prime number.");
        }
        else if (num % 2 == 0) {
            puts("Your integer is not a prime number.");
        }
        else if (num % 3 == 0) {
            puts("Your integer is not a prime number.");
        }
        else if (num % 5 == 0) {
            puts("Your integer is not a prime number.");
        }
        else if (num % 7 == 0) {
            puts("Your integer is not a prime number.");
        }
        else if (num % 11 == 0) {
            puts("Your integer is not a prime number.");
        }
        else {
            puts("Your integer is a prime number.");
        }
    }
    else {
        puts("Your integer is either one, zero or negative, "
             "not a prime number.");
    }
}