// Self-review exercises from Ch. 2: 2.3
// Write a single C statement to accomplish each
// of the following.
#include <stdio.h>

int main(void)
{
    // Define the variables c , thisVariable ,
    // q76354 and number to be of type int.
    int c;
    int thisVariable;
    int q76354;
    int number;

    // Prompt the user to enter an integer.
    // End your prompting message with a colon ( : )
    // followed by a space and leave the cursor
    // positioned after the space.
    printf("%s", "Enter an integer, please: ");

    // Read an integer from the keyboard and store
    // the value entered in integer variable a.
    int a;
    scanf("%d", &a);

    // If number is not equal to 7 , print
    // "The variable number is not equal to 7 ."
    if (a != 7) {
        puts("The variable number is not equal to 7.");
    }

    // Print the message "This is a C program."
    // on one line.
    puts("This is a C program.");

    // Print the message "This is a C program."
    // on two lines so that the first line ends with C.
    puts("This is a C\n program.");

    // Print the message "This is a C program."
    // with each word on a separate line.
    puts("This\n is\n a\n C\n program.");

    // Print the message "This is a C program."
    // with the words separated by tabs.
    puts("This\t is\t a\t C\t program.");
}