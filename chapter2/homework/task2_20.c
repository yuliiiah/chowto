// Self-review exercises from Ch. 2: 2.20
// (Converting from seconds to hours, minutes and seconds) Write a program that asks the
//  user to enter the total time elapsed, in seconds, since an event and converts the time to hours,
//  minutes and seconds.
#include <stdio.h>

int main(void)
{
    printf("%s", "Enter the total time in seconds: ");

    int seconds, minutes, hours;
    scanf("%d", &seconds);

    minutes = seconds / 60;
    seconds = seconds % 60;

    hours = minutes / 60;
    minutes = minutes % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);
}