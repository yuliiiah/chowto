// Chapter 5: Self-review exercise 5.14
/*
For each of the following sets of integers, write a single statement 
that will print a number at random from the set.
	a) 3, 6, 9, 12, 15, 18, 21, 24, 27, 30
	b) 3, 5, 7, 9, 11, 13, 15, 17, 19
	c) 3, 8, 13, 18, 23, 28, 33
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(0));

	int num1 = (rand() % ((30 - 3) / 3)) * 3 + 3;
	int num2 = (rand() % ((19 - 3) / 2)) * 2 + 3;
	int num3 = (rand() % ((33 - 3) / 5)) * 5 + 3;

	printf("%d\n%d\n%d\n", num1, num2, num3);
}