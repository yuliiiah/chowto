// Chapter 3: Self-review exercise 3.33
// (Hollow Square of Asterisks) Modify the program you wrote in Exercise 3.32
//  so that it prints a hollow square. For example, if your program reads a
//  size of 5, it should print
//      *****
//      *   *
//      *   *
//      *   *
//      *****
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
            int hollow_counter = square_size - 2;

            while (width_counter <= square_size) {
                printf("%s", "*");

                if (height_counter >= 2 && height_counter < square_size) {
                    while (hollow_counter != 0) {
                        printf("%s", " ");
                        hollow_counter--;
                        width_counter++;
                    }
                }

                width_counter++;
            }
            printf("\n");
            height_counter++;
        }
    } else {
        puts("Your number was either too large or too little.");
    }
}