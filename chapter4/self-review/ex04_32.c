// Chapter 4: Self-review exercise 4.32
// (Modified Diamond-Printing Program) Modify the program you wrote in
//  Exercise 4.31 to read an odd number in the range 1 to 19 to specify the
//  number of rows in the diamond. Your program should then display
//  a diamond of the appropriate size.
#include <stdio.h>

int main(void)
{
    int rows;
    printf("%s", "Give me an odd number from 1 to 19: ");
    scanf("%d", &rows);

    if (rows % 2 != 0) {
        int blanks = rows / 2;
        int asts = 1;

        for (int i = 1; i <= rows; i++) {
            for (int b = 1; b <= blanks; b++) {
                printf("%s", " ");
            }
            for (int a = 1; a <= asts; a++) {
                printf("%s", "*");
            }

            if (i < (rows / 2 + 1)) {
                blanks -= 1;
                asts += 2;
            } else {
                blanks += 1;
                asts -= 2;
            }

            puts("");
        }
    } else {
        puts("Your number wasn't odd. Try again.");
    }
}