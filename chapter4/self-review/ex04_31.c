// Chapter 4: Self-review exercise 4.31
// (Diamond-Printing Program) Write a program that prints the
//  following diamond shape. You may use printf statements that print either
//  a single asterisk ( * ) or a single blank. Maximize your use of
//  iteration (with nested for statements) and minimize the number of
//  printf statements.
//          *
//         ***
//        *****
//       *******
//      *********
//       *******
//        *****
//         ***
//          *
#include <stdio.h>

int main(void)
{
    int blanks = 4;
    int asts = 1;

    for (int i = 1; i <= 9; i++) {
        for (int b = 1; b <= blanks; b++) {
            printf("%s", " ");
        }
        for (int a = 1; a <= asts; a++) {
            printf("%s", "*");
        }

        if (i < 5) {
            blanks -= 1;
            asts += 2;
        } else {
            blanks += 1;
            asts -= 2;
        }

        puts("");
    }
}