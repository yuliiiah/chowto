// Self-review exercises from Ch. 2: 2.31
// (Table of Squares and Cubes) Using only the techniques
//  you learned in this chapter, write a program that calculates
//  the squares and cubes of the numbers from 0 to 10 and
//  uses tabs to print the following table of values:
//      number  square  cube
//      0       0       0
//      1       1       1
//      2       4       8
//      3       9       27
//      4       16      64
//      5       25      125
//      6       36      216
//      7       49      343
//      8       64      512
//      9       81      729
//      10      100     1000
#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 1;
    int c = 2;
    int d = 3;
    int e = 4;
    int f = 5;
    int g = 6;
    int h = 7;
    int i = 8;
    int j = 9;
    int k = 10;

    printf("%s", "number\tsquare\tcube\n");
    printf("%d\t%d\t%d\n", a, a * a, a * a * a);
    printf("%d\t%d\t%d\n", b, b * b, b * b * b);
    printf("%d\t%d\t%d\n", c, c * c, c * c * c);
    printf("%d\t%d\t%d\n", d, d * d, d * d * d);
    printf("%d\t%d\t%d\n", e, e * e, e * e * e);
    printf("%d\t%d\t%d\n", f, f * f, f * f * f);
    printf("%d\t%d\t%d\n", g, g * g, g * g * g);
    printf("%d\t%d\t%d\n", h, h * h, h * h * h);
    printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    printf("%d\t%d\t%d\n", j, j * j, j * j * j);
    printf("%d\t%d\t%d\n", k, k * k, k * k * k);
}