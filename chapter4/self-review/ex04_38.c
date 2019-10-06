// Chapter 4: Self-review exercise 4.38
// (“The Twelve Days of Christmas” Song) Write a program that uses
//  iteration and switch statements to print the song “The Twelve Days of
//  Christmas.” One switch statement should be used to print the day (i.e.,
//  “first,” “second,” etc.). A separate switch statement should be used to
//  print the remainder of each verse.
#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 12; i++) {

        printf("%s", "On the ");
        switch (i) {
            case 1:
                printf("%s", "first");
                break;
            case 2:
                printf("%s", "second");
                break;
            case 3:
                printf("%s", "third");
                break;
            case 4:
                printf("%s", "fourth");
                break;
            case 5:
                printf("%s", "fifth");
                break;
            case 6:
                printf("%s", "sixth");
                break;
            case 7:
                printf("%s", "seventh");
                break;
            case 8:
                printf("%s", "eighth");
                break;
            case 9:
                printf("%s", "ninth");
                break;
            case 10:
                printf("%s", "tenth");
                break;
            case 11:
                printf("%s", "eleventh");
                break;
            case 12:
                printf("%s", "twelfth");
                break;
        }

        printf("%s", " day of Christmas\n"
                     "My true love gave to me:\n");

        if (i == 1) {
            puts("A Partridge in a Pear Tree\n");
            continue;
        }

        switch (i) {
            case 12:
                puts("12 Drummers Drumming");
            case 11:
                puts("'leven Pipers Piping");
            case 10:
                puts("10 Lords a Leaping");
            case 9:
                puts("Nine Ladies Waiting");
            case 8:
                puts("Eight Maids a Milking");
            case 7:
                puts("Seven Swans a Swimming");
            case 6:
                puts("Six Geese a Laying");
            case 5:
                puts("Five Golden Rings");
            case 4:
                puts("Four Calling Birds");
            case 3:
                puts("Three French Hens");
            case 2:
                puts("Two Turtle Doves");
            case 1:
                puts("And a Partridge in a Pear Tree");
                puts("");
        }
    }
}