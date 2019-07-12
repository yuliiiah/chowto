// Self-review exercises from Ch. 2: 2.19
// (Arithmetic, Largest Value and Smallest Value) Write a program that inputs three different
//  integers from the keyboard, then prints the sum, the average, the product, the smallest and the
//  largest of these numbers. Use only the single-selection form of the if statement you learned in
//  this chapter.
#include <stdio.h>

int main(void)
{
    printf("%s", "Enter three different integers: ");

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int sum = a + b + c;
    int average = (a + b + c) / 3;
    int product = a * b * c;

    int smallest, largest;

    if (a < b && a < c) {
        smallest = a;
    }

    if (b < c && b < a) {
        smallest = b;
    }

    if (c < a && c < b) {
        smallest = c;
    }

    if (a > b && a > c) {
        largest = a;
    }

    if (b > c && b > a) {
        largest = b;
    }

    if (c > a && c > b) {
        largest = c;
    }

    printf("Sum is %d\n"
           "Average is %d\n"
           "Product is %d\n"
           "Smallest is %d\n"
           "Largest is %d\n", sum, average, product, smallest, largest);
}