// Chapter 3: Self-review exercise 3.23
// (Find the Largest Number) The process of finding the largest number
//  (i.e., the maximum of a group of numbers) is used frequently in computer
//  applications. For example, a program that determines the winner of a
//  sales contest would input the number of units sold by each salesperson.
//  The salesperson who sells the most units wins the contest. Write a
//  pseudocode program and then a program that inputs a series of 10
//  non-negative numbers and determines and prints the largest of
//  the numbers.
#include <stdio.h>

int main(void)
{
    unsigned int counter = 1;
    unsigned int largest = 0;
    unsigned int number;

    while (counter <= 10) {

        printf("%s", "Give me a non-negative number: ");
        scanf("%u", &number);

        if (number > largest) {
            largest = number;
        }

        counter++;
    }
    printf("The largest number is %u\n", largest);
}