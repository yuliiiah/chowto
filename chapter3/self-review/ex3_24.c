// Chapter 3: Self-review exercise 3.24
// (Tabular Output) Write a program that uses looping to print
//  the following table of values. Use the tab escape sequence, \t, in the
//  printf statement to separate the columns with tabs.
//      N       N2      N3      N4
//      1       1       1       1
//      2       4       8       16
//      3       9       27      81
//      4       16      64      256
//      5       25      125     625
//      6       36      216     1296
//      7       49      343     2401
//      8       64      512     4096
//      9       81      729     6561
//      10      100     1000    10000
#include <stdio.h>

int main(void)
{
    int n = 1;
    int counter = 0;

    puts("N\tN2\tN3\tN4");

    while (counter < 10) {
        printf("%d\t%d\t%d\t%d\n", n, n * n, n * n * n, n * n * n * n);
        n++;
        counter++;
    }
}