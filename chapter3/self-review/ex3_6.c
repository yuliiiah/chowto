// Chapter 3: Self-review exercise 3.6
// Write single C statements that
//  a) Input unsigned integer variable x with scanf . Use the conversion specifier %u .
//  b) Input unsigned integer variable y with scanf . Use the conversion specifier %u .
//  c) Set unsigned integer variable i to 1 .
//  d) Set unsigned integer variable power to 1 .
//  e) Multiply unsigned integer variable power by x and assign the result to power .
//  f) Increment variable i by 1 .
//  g) Test i to see if it’s less than or equal to y in the condition of a while statement.
//  h) Output unsigned integer variable power with printf . Use the conversion specifier %u .
#include <stdio.h>

int main(void)
{
    printf("%s", "Give me two positive integers: ");

    unsigned int x, y;
    scanf("%u %u", &x, &y);

    unsigned int i = 1;
    unsigned int power = 1;

    power *= x;
    i++;

    while (i <= y) {
        puts("Variable i is less than or equal to y.");
        i++;
    }

    printf("Power is %u\n", power);
}