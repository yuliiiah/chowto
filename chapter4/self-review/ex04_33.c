// Chapter 4: Self-review exercise 4.33
// (Roman-Numeral Equivalent of Decimal Values) Write a program
//  that prints a table of all the Roman-numeral equivalents of the decimal
//  numbers in the range 1 to 100.
#include <stdio.h>

int main(void)
{
    printf("%-15s%-15s\n", "Decimal", "Roman");

    for (int i = 1; i <= 100; i++) {
        printf("%-15d", i);

        int rom = i;
        while (rom > 0) {
            if (rom == 100){
                printf("%s", "C");
                rom -= 100;
            }
            else if (rom >= 90) {
                printf("%s", "XC");
                rom -= 90;
            } else if (rom >= 80) {
                printf("%s", "LXXX");
                rom -= 80;
            } else if (rom >= 70) {
                printf("%s", "LXX");
                rom -= 70;
            } else if (rom >= 60) {
                printf("%s", "LX");
                rom -= 60;
            } else if (rom >= 50) {
                printf("%s", "L");
                rom -= 50;
            } else if (rom >= 40) {
                printf("%s", "XL");
                rom -= 40;
            } else if (rom >= 30) {
                printf("%s", "XXX");
                rom -= 30;
            } else if (rom >= 20) {
                printf("%s", "XX");
                rom -= 20;
            } else if (rom >= 10) {
                printf("%s", "X");
                rom -= 10;
            } else if (rom >= 9) {
                printf("%s", "IX");
                rom -= 9;
            } else if (rom >= 5) {
                printf("%s", "V");
                rom -= 5;
            } else if (rom >= 4) {
                printf("%s", "IV");
                rom -= 4;
            } else {
                printf("%s", "I");
                rom -= 1;
            }
        }
        puts("");
    }
    puts("");
}