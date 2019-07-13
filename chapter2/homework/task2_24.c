// Self-review exercises from Ch. 2: 2.24
// (Odd or Even) Write a program that reads an integer
// and determines and prints whether it’s odd or even.
#include <stdio.h>

int main(void) {
    printf("%s", "Give me an integer: ");

    int integer;
    scanf("%d", &integer);

    if (integer % 2 == 0) {
        puts("The integer is even.");
    }

    if (integer % 2 != 0) {
        puts("The integer is odd.");
    }
}