// Chapter 3: Self-review exercise 3.34
// (Floyd's Triangle) Floyd’s Triangle is a right-angled triangular
//  array of natural numbers. It is defined by filling rows with consecutive
//  integers. Thus, row 1 will have the number 1, row 2 will have the
//  numbers 2 and 3, and so on. Write a program that draws a 10-line Floyd’s
//  triangle. An outer loop can control the number of lines to be printed
//  and an inner loop can ensure that each row contains the correct number
//  of integers.
#include <stdio.h>

int main(void)
{
    int number = 1;
    int outer_counter = 1;
    int line_length = 1;

    while (outer_counter <= 10) {
        int inner_counter = 1;

        while (inner_counter <= line_length) {
            printf("%d", number);

            number++;
            inner_counter++;
        }

        printf("\n");
        outer_counter++;
        line_length++;
    }
}