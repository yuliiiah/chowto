// Self-review exercises from Ch 2.: 2.9
// Write a single C statement or line that
//  accomplishes each of the following:
//      a) Print the message “Have a nice day.”
//      b) Assign the sum of variables b and c to variable a.
//      c) Check if the value of variable a is greater than variable b. If it is, store the difference of
//          the two in variable c.
//      d) Input three integer values from the keyboard and place them in int variables p, q, and r.
#include <stdio.h>

int main(void)
{
    puts("Have a nice day.");

    int a, b, c;
    c = a + b;

    if (a > b) {
        c = a - b;
    }

    int p, q, r;
    printf("Enter three integers: ");
    scanf("%d %d %d", &p, &q, &r);
}