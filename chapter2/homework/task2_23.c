// Self-review exercises from Ch. 2: 2.23
// (Largest and Smallest Integers) Write a program that
//  reads in three integers and then determines and prints
//  the largest and the smallest integers in the group.
//  Use only the programming techniques you have learned in this chapter.
#include <stdio.h>

int main(void)
{
    printf("%s", "Enter three integers: ");

    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    int largest, smallest;
    if (num1 > num2 && num1 > num3) {
        largest = num1;
    }

    if (num2 > num3 && num2 > num1) {
        largest = num2;
    }

    if (num3 > num1 && num3 > num2) {
        largest = num3;
    }

    if (num1 < num2 && num1 < num3) {
        smallest = num1;
    }

    if (num2 < num3 && num2 < num1) {
        smallest = num2;
    }

    if (num3 < num1 && num3 < num2) {
        smallest = num3;
    }

    printf("The largest integer is %d, and the smallest is %d.\n", largest, smallest);
}