// Chapter 4: Self-review exercise 4.18
// (Bar-Chart Printing Program) One interesting application of computers
//  is drawing graphs and bar charts. Write a program that reads five
//  numbers (each between 1 and 30). For each number read, your program
//  should print a line containing that number of adjacent asterisks. For
//  example,if your program reads the number seven, it should print *******.
#include <stdio.h>

int main(void)
{
    int num, num2, num3, num4, num5;
    printf("%s", "Enter five numbers between 1 and 30: ");
    scanf("%d%d%d%d%d", &num, &num2, &num3, &num4, &num5);
    puts("");

    int star;
    for (star = 1; star <= num; star++) {
        printf("%s", "*");
    }
    puts("");

    for (star = 1; star <= num2; star++) {
        printf("%s", "*");
    }
    puts("");

    for (star = 1; star <= num3; star++) {
        printf("%s", "*");
    }
    puts("");

    for (star = 1; star <= num4; star++) {
        printf("%s", "*");
    }
    puts("");

    for (star = 1; star <= num5; star++) {
        printf("%s", "*");
    }
    puts("");
}