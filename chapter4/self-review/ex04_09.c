// Chapter 4: Self-review exercise 4.9
// (Sum and Average of Integers) Write a program to sum a sequence
//  of integers and calculate their average. Assume that the first integer
//  read with scanf specifies the number of values to be entered. Your
//  program should read only one value each time scanf is executed.
//  A typical input sequence might be
//      7 678 234 315 489 536 456 367
//  where the 7 indicates that the subsequent 7 values are to be summed.
#include <stdio.h>

int main(void)
{
    int value_count;
    printf("State how many values there are and then state the values: ");
    scanf("%d", &value_count);

    int value_sum = 0, value = 0;
    for (int x = 1; x <= value_count; x++) {
        scanf("%d", &value);
        value_sum += value;
    }

    int average = value_sum / value_count;
    printf("\nThe average for your values is: %d\n", average);
}