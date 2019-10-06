// Chapter 4: Self-review exercise 4.35
// A criticism of the break statement and the continue statement
//  is that each is unstructured. Actually, break statements and continue
//  statements can always be replaced by structured statements, although
//  doing so can be awkward. Describe in general how you would remove any
//  break statement from a loop in a program and replace that statement with
//  some structured equivalent. [Hint: The break statement leaves a loop
//  from within the body of the loop. The other way to leave is by failing
//  the loop-continuation test. Consider using in the loop-continuation test
//  a second test that indicates “early exit because of a ‘break’ condition.”]
//  Use the technique you developed here to remove the break statement from
//  the program of Fig. 4.11.

// Fig. 4.11: fig04_11.c
// Using the break statement in a for statement.
#include <stdio.h>

int main(void)
{
    unsigned int x; // declared here so it can be used after loop

    // loop 10 times
    for (x = 1; x <= 10; ++x) {

        // if x is 5, terminate loop
        if (x < 5) {
            printf("%u ", x);
        } else {
            x = 11; // fail the for loop test on purpose
        }
    }

    printf("\nBroke out of loop at x == %u\n", x);
}