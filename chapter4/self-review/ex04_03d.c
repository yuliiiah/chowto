// Chapter 4: Self-review exercise 4.3
// Write a statement or a set of statements to accomplish each
//  of the following tasks:
//      d) Print the integers from 1 to 20 using a while loop and the counter
//          variable x. Print only five integers per line. [Hint: Use the
//          calculation x % 5. When the value of this is 0, print
//          a newline character, otherwise print a tab character.]
#include <stdio.h>

int main(void)
{
    int x = 1;

    while (x <= 20) {
        printf("%d ", x);

        if (x % 5 == 0) {
            puts("");
        }

        x++;
    }
}