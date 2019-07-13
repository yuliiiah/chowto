// Self-review exercises from Ch. 2: 2.30
// (Separating Digits in an Integer) Write a program
//  that inputs one five-digit number, separates the number
//  into its individual digits and prints the digits separated
//  from one another by three spaces each. For example, if
//  the user types in 42139, the program should print
//  4   2   1   3   9
#include <stdio.h>

int main(void)
{
    printf("%s", "Enter a five-digit number: ");

    int in, out1, out2, out3, out4, out5;
    scanf("%d", &in);

    out1 = in / 10000;
    in = in % 10000;

    out2 = in / 1000;
    in = in % 1000;

    out3 = in / 100;
    in = in % 100;

    out4 = in / 10;
    out5 = in % 10;

    printf("%d   %d   %d   %d   %d\n", out1, out2, out3, out4, out5);
}