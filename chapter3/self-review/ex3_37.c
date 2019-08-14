// Chapter 3: Self-review exercise 3.37
// (Detecting Multiples of a Number) Write a program that prints
//  500 dollar signs ($) one after the other, separated by a space. After
//  every fiftieth dollar sign, the program should print a newline character.
//  [Hint: Count from 1 to 500. Use the remainder operator to recognize
//  when the counter reaches a multiple of 50]
#include <stdio.h>

int main(void)
{
    int counter = 1;

    while (counter <= 500) {
        printf("$ ");

        if (counter % 50 == 0) {
            printf("%s", "\n");
        }

        counter++;
    }
}