// Chapter 3: Self-review exercise 3.32
// (Square of Asterisks) Write a program that reads in the side of a square
//  and then prints that square out of asterisks. Your program should work
//  for squares of all side sizes between 1 and 20. For example, if your
//  program reads a size of 4, it should print
//      ****
//      ****
//      ****
//      ****
#include <stdio.h>

int main(void)
{
    int square_size;
    int height_counter = 1;

    printf("%s", "Provide a size for your square (up to 20): ");
    scanf("%d", &square_size);

    if (square_size > 0 && square_size <= 20) {
        while (height_counter <= square_size) {
            int width_counter = 1;
            while (width_counter <= square_size) {
                printf("%s", "*");
                width_counter++;
            }

            printf("\n");
            height_counter++;
        }
    } else {
        puts("Your number was either too large or too little.");
    }

}