// // Chapter 4: Self-review exercise 4.21
// (ASCII Values) Write a program to convert and print the characters
//  for the ASCII values 0 to 127. The program should print 10 characters
//  per line.
#include <stdio.h>

int main(void)
{
    for (int i = 0; i <= 127; i++) {
        printf("%c", i);

        if (i != 0 && i % 10 == 0) {
            puts("");
        }
    }
    puts("");
}