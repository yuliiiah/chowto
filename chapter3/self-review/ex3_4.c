// Chapter 3: Self-review exercise 3.4
// Write a C statement to accomplish each of the following tasks.
//  a) Define variables sum and x to be of type int .
//  b) Set variable x to 1 .
//  c) Set variable sum to 0 .
//  d) Add variable x to variable sum and assign the result to variable sum .
//  e) Print "The sum is: " followed by the value of variable sum .
#include <stdio.h>

int main(void)
{
    int x, sum;
    x = 1;
    sum = 0;

    sum += x;

    printf("The sum is: %d\n", sum);
}