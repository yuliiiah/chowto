// Fig. 2.3: fig02_03.c
// Using if statements, relational
// operators, and equality operators.
#include <stdio.h>

// function main begins program execution
int main(void)
{
    printf("Enter two integers, and I will tell you\n");
    printf("the relationship they satisfy: ");

    int num1; // first number to be read from the user
    int num2; // second number to be read from the user

    scanf("%d %d", &num1, &num2); // read two integers

    if (num1 == num2) {
        printf("%d is equal to %d\n", num1, num2);
    } // end if

    if (num1 != num2) {
        printf("%d is not equal to %d\n", num1, num2);
    } // end if

    if (num1 < num2) {
        printf("%d is less than %d\n", num1, num2);
    } // end if

    if (num1 > num2) {
        printf("%d is greater than %d\n", num1, num2);
    } // end if

    if (num1 <= num2) {
        printf("%d is less than or equals to %d\n", num1, num2);
    } // end if

    if (num1 >= num2) {
        printf("%d is greater than or equals to %d\n", num1, num2);
    } // end if
} // end function main
