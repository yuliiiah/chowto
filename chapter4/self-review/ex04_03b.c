// Chapter 4: Self-review exercise 4.3
// Write a statement or a set of statements to accomplish each
//  of the following tasks:
//      b) Print the value 333.546372 in a field width of 15 characters
//          with precisions of 1 , 2 , 3 , 4 and 5. Left justify the output.
//          What are the five values that print?
#include <stdio.h>

int main(void)
{
    float value = 333.546372;

    printf("%-15.1f\n", value);
    printf("%-15.2f\n", value);
    printf("%-15.3f\n", value);
    printf("%-15.4f\n", value);
    printf("%-15.5f\n", value);
}