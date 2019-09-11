// Chapter 4: Self-review exercise 4.16
// (Triangle-Printing Program) Write a program that prints
//  the following patterns separately, one below the other. Use for loops to
//  generate the patterns. All asterisks ( * ) should be printed by a
//  single printf statement of the form printf("%s", "*" ) ;
//  (this causes the asterisks to print side by side). [Hint: The last two
//  patterns require that each line begin with an appropriate number of
//  blanks.]
//  (A)
//  *
//  **
//  ***
//  ****
//  *****
//  ******
//  *******
//  ********
//  *********
//  **********
//  (B)
//  **********
//  *********
//  ********
//  *******
//  ******
//  *****
//  ****
//  ***
//  **
//  *
//(C)
//  **********
//   *********
//    ********
//     *******
//      ******
//       *****
//        ****
//         ***
//          **
//           *
//  (D)
//           *
//          **
//         ***
//        ****
//       *****
//      ******
//     *******
//    ********
//   *********
//  **********
#include <stdio.h>

int main(void)
{
    for (int x = 1; x <= 10; x++) {

        for (int i = 1; i <= x; i++) {
            printf("%s", "*");
        }
        puts("");
    }

    for (int x = 1; x <= 10; x++) {

        for (int i = 10; i >= x; i--) {
            printf("%s", "*");
        }
        puts("");
    }

    for (int x = 1; x <= 10; x++) {

        for (int s = 1; s < x; s++) {
            printf("%s", " ");
        }

        for (int i = 10; i >= x; i--) {
            printf("%s", "*");
        }
        puts("");
    }

    for (int x = 1; x <= 10; x++) {

        for (int s = 10; s > x; s--) {
            printf("%s", " ");
        }

        for (int i = 1; i <= x; i++) {
            printf("%s", "*");
        }
        puts("");
    }
}