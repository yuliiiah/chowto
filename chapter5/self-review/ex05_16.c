// Chapter 5: Self-review exercise 5.16
/*
(Sides of a Triangle) Write a function that reads three 
nonzero double values as the sides of a triangle, and 
calculates and returns the area of the triangle as a 
double variable. It should also check whether the numbers 
represent the sides of a triangle before calculating the area. 
Use this function in a program that inputs a series of sets 
of numbers.
*/
#include <stdio.h>

double triangleArea(double s1, double s2, double s3);

int main(void)
{
	// read three nonzero doubles as sides of a triangle
	double s1, s2, s3;
	printf("Give me three nonzero values: ");
	scanf("%lf%lf%lf", &s1, &s2, &s3);

	if (s1 > 0 && s2 > 0 && s3 > 0) {
		// check that these numbers are sides of a triangle
		if (s1 + s2 > s3 &&
			s2 + s3 > s1 &&
			s3 + s1 > s2) {

			double area = triangleArea(s1, s2, s3);
			printf("The area of your triangle is %.2f.\n", area);
		} else {
			puts("The values you've entered do not represent the sides of a triangle.");
		}
	} else {
		puts("The values you've entered are not nonzero.");
	}
}

double triangleArea(double s1, double s2, double s3)
{
	// calculate and return area of the triangle
	double area = (s1 + s2 + s3)/2;
	return area;
}