// Chapter 5: Self-review exercise 5.19
/*
	(Rectangle of Asterisks) Write a function that displays 
	a solid rectangle of asterisks whose sides are specified 
	in the integer parameters side1 and side2. For example, 
	if the sides are 4 and 5, the function displays 
	the following:
	*****
	*****
	*****
	*****
*/
#include <stdio.h>

void rectangle(int side1, int side2);

int main(void)
{
	int side1, side2;
	printf("Provide two sides of a rectangle: ");
	scanf("%d%d", &side1, &side2);

	rectangle(side1, side2);
}

void rectangle(int side1, int side2)
{
	for(int i = 1; i <= side1; i++) {
		for(int i = 1; i <= side2; i++)
		{
			printf("%s", "*");
		}
		puts("");
	}
}