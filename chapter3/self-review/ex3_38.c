// Chapter 3: Self-review exercise 3.38
// (Counting 9s) Write a program that reads an integer (5 digits or fewer)
//  and determines and prints how many digits in the integer are 9s.
#include <stdio.h>

int main(void)
{
    int input_num;
    printf("%s", "Enter a number (5 digits or fewer): ");
    scanf("%d", &input_num);

    int nine_counter = 0;
    int current_digit;
    while (input_num != 0) {
        current_digit = input_num % 10;

        if (current_digit == 9) {
            nine_counter++;
        }

        input_num /= 10;
    }

    printf("There are %d nines in you number.\n", nine_counter);
}