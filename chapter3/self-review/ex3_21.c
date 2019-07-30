// // Chapter 3: Self-review exercise 3.21
// (Preincrementing vs Postincrementing) Write a program that
// demonstrates the difference between preincrementing and postincrementing
// using the increment operator ++.
#include <stdio.h>

int main(void)
{
    printf("%s", "Give me an integer: ");

    int a;
    scanf("%d", &a);
    puts("Thanks! I stored your integer in a variable a.\n");

    puts("Now, I will run some calculations...");
    printf("a++ will return %d, THEN add one to it, \n", a++);
    printf("like this: %d. This is POSTincrementing (post == after).\n\n", a);

    a -= 1;

    printf("++a will add one to a FIRST, then return the final value,\n"
           "like this: %d. This is PREincrementing (pre == before).\n", ++a);
}