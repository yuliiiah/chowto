// Chapter 3: Self-review exercise 3.25
// (Tabular Output) Write a program that utilizes looping to produce the
// following table of values:
//  A     A+3    A+6    A*9
//  7     10     13     63
//  14    17     20     126
//  21    24     27     189
//  28    31     34     252
//  35    38     41     315
#include <stdio.h>

int main(void)
{
    int a = 7;
    int mult = 1;

    puts("A\tA+3\tA+6\tA*9");
    while (mult <= 5) {
        int b = a * mult;
        printf("%d\t%d\t%d\t%d\n", b, b + 3, b + 6, b * 9);
        mult++;
    }
}