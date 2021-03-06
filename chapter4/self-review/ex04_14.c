// Chapter 4: Self-review exercise 4.14
// (Factorials) The factorial function is used frequently
//  in probability problems. The factorial of a positive integer n (written
//  n! and pronounced “n factorial”) is equal to the product of the positive
//  integers from 1 to n. Write a program that evaluates the factorials of
//  the integers from 1 to 5. Print the results in tabular format. What
//  difficulty might prevent you from calculating the factorial of 20?
#include <stdio.h>

int main(void)
{
    for (int num = 1; num <= 5; num++) {
        int fact = 1;
        int temp = num;

        while (temp >= 1) {
            fact *= temp;
            temp--;
        }

        printf("%d\t", fact);
    }
    puts("");
}