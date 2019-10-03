// Chapter 4: Self-review exercise 4.30
// (Replacing switch with if ... else ) Rewrite the program of Fig. 4.7
//  by replacing the switch statement with a nested if ... else statement;
//  be careful to deal with the default case properly. Then rewrite this new
//  version by replacing the nested if ... else statement with a series of
//  if statements; here, too, be careful to deal with the default case
//  properly (this is more difficult than in the nested if ... else version).
//  This exercise demonstrates that switch is a convenience and that any switch
//  statement can be written with only single-selection statements.

// Fig. 4.7: fig04_07.c
// Counting letter grades with switch.
#include <stdio.h>

int main(void)
{
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int fCount = 0;

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input.");
    int grade; // one grade

    // loop until user types end-of-file key sequence
    while ((grade = getchar()) != EOF) {

        if (grade == 'A' || grade == 'a') {
            ++aCount;
        } else if (grade == 'B' || grade == 'b') {
            ++bCount;
        } else if (grade == 'C' || grade == 'c') {
            ++cCount;
        } else if (grade == 'D' || grade == 'd') {
            ++dCount;
        } else if (grade == 'F' || grade == 'f') {
            ++fCount;
        } else if (grade == '\n' || grade == '\t' || grade == ' ') {
            continue;
        } else {
            printf("%s", "Incorrect letter grade entered.");
            puts(" Enter a new grade.");
            continue;
        }
    } // end while

    // output summary of results
    puts("\nTotals for each letter grade are: ");
    printf("A: %u\n", aCount);
    printf("B: %u\n", bCount);
    printf("C: %u\n", cCount);
    printf("D: %u\n", dCount);
    printf("F: %u\n", fCount);
}