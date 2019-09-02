// Chapter 4: Self-review exercise 4.3
// Write a statement or a set of statements to accomplish each
//  of the following tasks:
//      a) Sum the odd integers between 1 and 99 using a for statement.
//          Use the unsigned integer variables sum and count.
#include <stdio.h>

int main(void)
{
    unsigned int sum = 0;

    for (unsigned int count = 1; count <= 99; count++) {
        sum += count;
    }

    printf("The sum is: %u\n", sum);
}