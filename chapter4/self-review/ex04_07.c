// Chapter 4: Self-review exercise 4.7
// Write for statements that print the following sequences of values:
//  a) 1, 3, 5, 7, 9, 11, 13
//  b) 2, 5, 8, 11, 14, 17
//  c) 30, 20, 10, 0, –10, –20, –30
//  d) 15, 23, 31, 39, 47, 55
#include <stdio.h>

int main(void)
{
    for (int x = 1; x <= 13; x += 2) {
        printf("%d ", x);
    }
    puts("");

    for (int x = 2; x <= 17; x += 3) {
        printf("%d ", x);
    }
    puts("");

    for (int x = 30; x >= -30; x -= 10) {
        printf("%d ", x);
    }
    puts("");

    for (int x = 15; x <= 55; x += 8) {
        printf("%d ", x);
    }
    puts("");
}