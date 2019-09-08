// Chapter 4: Self-review exercise 4.13
// (Natural Numbers Arithmetic) Write a program that prints the sum,
//  the sum of the squares, and the sum of the cubes of all natural numbers
//  from 1 till any number entered by the user.
#include <stdio.h>
#include <math.h>

int main(void)
{
    int input;
    printf("Give me a natural number: ");
    scanf("%d", &input);

    int sum = 0, square_sum = 0, cube_sum = 0;
    for (int i = 1; i <= input; i++) {
        sum += i;
        square_sum += pow(i, 2);
        cube_sum += pow(i, 3);
    }

    printf("The sum is: %d\n"
           "The sum of squares is: %d\n"
           "The sum of cubes is: %d\n", sum, square_sum, cube_sum);
}