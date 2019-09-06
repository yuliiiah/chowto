// Chapter 4: Self-review exercise 4.10
// (Conversion Celsius to Fahrenheit) Write a program that converts
//  temperatures from 30 ° C to 50 ° C to the Fahrenheit scale.
//  The program should print a table displaying temperatures in the
//  two scales side by side. [Hint: ° F = 9/5C + 32]
#include <stdio.h>

int main(void)
{
    printf("%-10s %10s", "Celcius", "Fahrenheit\n");

    for (int celc = 30, fahr; celc <= 50; celc++) {
        fahr = 1.8 * celc + 32;
        printf("%-10d %-10d\n", celc, fahr);
    }
}