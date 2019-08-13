// Chapter 3: Self-review exercise 3.27
// (Validating User Input) Modify the program in Figure 3.10
//  to validate its inputs. On any input, if the value entered is other than
//  1 or 2, keep looping until the user enters a correct value.

// Fig. 3.10: fig03_10.c
// Analysis of examination results.
#include <stdio.h>

// function main begins program execution
int main(void)
{
    // initialize variables in definitions
    unsigned int passes = 0; // number of passes
    unsigned int failures = 0; // number of failures
    unsigned int student = 1; // student counter
    int result; // one exam result

    while (student <= 10) {

        // prompt user for input and obtain value from user
        printf("%s", "Enter result (1=pass, 2=fail): ");
        scanf("%d", &result);

        // if result 1, increment passes
        if (result == 1) {
            passes = passes + 1;
            student = student + 1; // increment student counter
        }// end if
        else if (result == 2){// otherwise, increment failures
            failures = failures + 1;
            student = student + 1; // increment student counter
        }// end else if
        else {
            // prompt user for input and obtain value from user
            printf("%s", "Enter result (1=pass, 2=fail): ");
            scanf("%d", &result);
        }
    }// end while

    // termination phase; display number of passes and failures
    printf("Passed %u\n", passes);
    printf("Failed %u\n", failures);

    // if more than 8 students passed, print "Bonus to instructor!"
    if (passes > 8) {
        puts("Bonus to instructor!");
    }// end if
}// end function main