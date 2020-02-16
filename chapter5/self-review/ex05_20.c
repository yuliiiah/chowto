// Chapter 5: Self-review exercise 5.20
/*
Displaying a Rectangle of Any Character) Modify the function 
created in Exercise 5.19 to form the rectangle out of whatever 
aracter is contained in character parameter fillCharacter. 
Thus if the sides are 5 and 4, and fillCharacter is "@", then 
he function should print the following:
@@@@
@@@@
@@@@
@@@@
@@@@
*/
#include <stdio.h>

void rectangle(int side1, int side2, char fillCharacter);

int main(void)
{
	int side1, side2;
	printf("Provide two sides and a character: ");
	scanf("%d%d", &side1, &side2);

	char fillCharacter;
	printf("Provide a character: ");
	scanf(" %c", &fillCharacter);

	rectangle(side1, side2, fillCharacter);
}

void rectangle(int side1, int side2, char fillCharacter)
{
	for(int i = 1; i <= side1; i++) {
		for(int i = 1; i <= side2; i++)
		{
			putchar(fillCharacter);
		}
		puts("");
	}
}