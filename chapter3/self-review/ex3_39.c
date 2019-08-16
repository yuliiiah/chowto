// Chapter 3: Self-review exercise 3.39
// (Checkerboard Pattern of Asterisks) Write a program that displays
//  the following checkerboard pattern:
//      * * * * * * * *
//       * * * * * * * *
//      * * * * * * * *
//       * * * * * * * *
//      * * * * * * * *
//       * * * * * * * *
//      * * * * * * * *
//       * * * * * * * *
//  Your program must use only three output statements,
//  one of each of the following forms:
//      printf( "%s", "* " );
//      printf( "%s", " " );
//      puts( "" ); // outputs a newline
#include <stdio.h>

int main(void)
{
    int outer_counter = 1;

    while (outer_counter <= 8) {
        int inner_counter = 1;

        if (outer_counter % 2 == 0) {
            printf("%s", " ");
            inner_counter++;
        }

        while (inner_counter <= 8) {

            printf("%s", "* ");
            inner_counter++;
        }
        puts("");
        outer_counter++;
    }
}