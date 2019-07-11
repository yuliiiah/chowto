// Self-review exercises from Ch. 2: 2.18
// (Comparing Values) Write a program that asks the user to enter the highest rainfall ever in
//  one season for a country, and the rainfall in the current year for that country, obtains the values from
//  the user, checks if the current rainfall exceed the highest rainfall and prints an appropriate message
//  on the screen. If the current rainfall is higher, it assigns that value as the highest rainfall ever. Use
//  only the single-selection form of the if statement you learned in this chapter.
#include <stdio.h>

int main(void)
{
    int current, highest;

    printf("%s", "Enter the highest rainfall ever for your country: ");
    scanf("%d", &highest);

    printf("%s", "Enter the rainfall in the current year: ");
    scanf("%d", &current);

    if (current > highest) {
        highest = current;
        puts("This year's rainfall is now the highest ever.");
    }
}