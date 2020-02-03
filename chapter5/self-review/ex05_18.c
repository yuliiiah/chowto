// Chapter 5: Self-review exercise 5.18
/*
(Even or Odd) Write a program that inputs a series of integers 
and passes them one at a time to function isEven, which uses 
the remainder operator to determine whether an integer is even. 
The function should take an integer argument and return 1 
if the integer is even and 0 otherwise.
*/
#include <stdio.h>

int isEven(int num);

int main(void)
{
	int num = 0;
	while (num != -1) {
		printf("%s", "Enter an integer (\"-1\" to exit): ");
		scanf("%d", &num);

		if (num == -1) {
			break;
		}

		int check = isEven(num);
		printf("%d\n", check);
	}
}

int isEven(int num)
{
	if (num % 2 == 0) {
		return 1;
	} else {
		return 0;
	}
}