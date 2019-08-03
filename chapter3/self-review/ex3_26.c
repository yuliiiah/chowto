// Chapter 3: Self-review exercise 3.26
// (Find the Two Largest Numbers) Using an approach similar to Exercise 3.23,
//  find the two largest values of the 10 numbers. [Note: You may input each
//  number only once.]
#include <stdio.h>

int main(void)
{
    int counter = 0;
    int number = 0;
    int largest1 = 0;
    int largest2 = 0;

    while (counter < 10) {
        printf("%s", "Give me a positive number; input each number only once: ");
        scanf("%d", &number);

        if (number > largest2) {
            largest2 = number;
        }

        if (largest2 > largest1) {
            largest2 = largest1;
            largest1 = number;
        }
        counter++;
    }

    printf("The first largest number is: %d\n", largest1);
    printf("The second largest number is: %d\n", largest2);
}