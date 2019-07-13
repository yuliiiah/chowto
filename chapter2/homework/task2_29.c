// Self-review exercises from Ch. 2: 2.29
// Write a C program that prints the integer equivalents
//  of some uppercase letters, lowercase letters, digits
//  and special symbols. As a minimum, determine the integer
//  equivalents of the following: A B C a b c 0 1 2 $ * + /
//  and the blank character.
#include <stdio.h>

int main(void)
{
    printf("Here's the integer equivalent of 'A': %d\n", 'A');
    printf("Here's the integer equivalent of 'B': %d\n", 'B');
    printf("Here's the integer equivalent of 'C': %d\n", 'C');
    printf("Here's the integer equivalent of 'a': %d\n", 'a');
    printf("Here's the integer equivalent of 'b': %d\n", 'b');
    printf("Here's the integer equivalent of 'c': %d\n", 'c');
    printf("Here's the integer equivalent of '0': %d\n", '0');
    printf("Here's the integer equivalent of '1': %d\n", '1');
    printf("Here's the integer equivalent of '2': %d\n", '2');
    printf("Here's the integer equivalent of '$': %d\n", '$');
    printf("Here's the integer equivalent of '*': %d\n", '*');
    printf("Here's the integer equivalent of '+': %d\n", '+');
    printf("Here's the integer equivalent of '/': %d\n", '/');
    printf("Here's the integer equivalent of ' ': %d\n", ' ');
}