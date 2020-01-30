// Chapter 5: Self-review exercise 5.15
/*
(Hypotenuse Calculations) Define a function called hypotenuse 
that calculates the length of the hypotenuse of a right 
triangle when the other two sides are given. The function 
should take two arguments of type double and return 
the hypotenuse as a double. Test your program with the
side values specified in Fig. 5.22.
*/
#include <stdio.h>
#include <math.h>

double hypotenuse(double side1, double side2);

int main(void)
{
	double side1, side2;
	printf("%s", "Enter two sides of a right triangle: ");
	scanf("%lf%lf", &side1, &side2);

	double hypo = hypotenuse(side1, side2);
	printf("The length of hypotenuse is: %.2f.\n", hypo);
}

double hypotenuse(double side1, double side2)
{
	double hypo = sqrt(pow(side1, 2) + pow(side2, 2));
	return hypo;
}