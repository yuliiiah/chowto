// Self-review exercises from Ch. 2: 2.27
// (Checkerboard Pattern of Asterisks) Display
//  the following checkerboard pattern with eight
//  printf statements and then display the same pattern
//  with as few printf statements as possible.
// * * * * * * * *
//  * * * * * * * *
// * * * * * * * *
//  * * * * * * * *
// * * * * * * * *
//  * * * * * * * *
// * * * * * * * *
//  * * * * * * * *
#include <stdio.h>

int main(void) {
    puts("Printing with eight printfs:");
    printf("%s", "* * * * * * * *\n");
    printf("%s", " * * * * * * * *\n");
    printf("%s", "* * * * * * * *\n");
    printf("%s", " * * * * * * * *\n");
    printf("%s", "* * * * * * * *\n");
    printf("%s", " * * * * * * * *\n");
    printf("%s", "* * * * * * * *\n");
    printf("%s", " * * * * * * * *\n");

    puts("Printing with one printf:");
    printf("%s", "* * * * * * * *\n"
                 " * * * * * * * *\n"
                 "* * * * * * * *\n"
                 " * * * * * * * *\n"
                 "* * * * * * * *\n"
                 " * * * * * * * *\n"
                 "* * * * * * * *\n"
                 " * * * * * * * *\n");
}