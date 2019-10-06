// Chapter 4: Self-review exercise 4.37
// Describe in general how you would remove any continue statement
//  from a loop in a program and replace that statement with some
//  structured equivalent. Use the technique you developed here to remove
//  the continue statement from the program of Fig. 4.12.

// Fig. 4.12: fig04_12.c
// Using the continue statement in a for statement.
#include <stdio.h>

int main(void)
{
    // loop 10 times
    for (unsigned int x = 1; x <= 10; ++x) {

        // if x is 5, continue with next iteration of loop
        if (x == 5) {
            // continue; // skip remaining code in loop body
            x = 6;
        }

        printf("%u ", x);
    }

    puts("\nUsed structured programming to skip printing the value 5");
}