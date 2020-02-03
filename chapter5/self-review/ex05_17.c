// Chapter 5: Self-review exercise 5.17
/*
(Sides of a Right Triangle) Write a function that reads 
three nonzero integers and determines whether they are the 
sides of a right-angled triangle. The function should take 
three integer arguments and return 1 (true) if the arguments 
comprise a right-angled triangle, and 0 (false) otherwise. 
Use this function in a program that inputs a series of sets 
of integers.
*/
#include <stdio.h>
#include <math.h>

int rightAngled(int s1, int s2, int s3);

int main(void) 
{
	int s1 = 1, s2 = 1, s3 = 1;

	while(s1 > 0 && s2 > 0 && s3 > 0) {
		printf("Enter three nonzero integers (zeros to exit): ");
		scanf("%d%d%d", &s1, &s2, &s3);

		// check that the values are positive and nonzero
		if (s1 > 0 && s2 > 0 && s3 > 0) {

			// check that the values represent sides of a triangle
			if (s1 + s2 > s3 &&
				s2 + s3 > s1 &&
				s3 + s1 > s2) {

				// check that the triangle is right-sided
				int right_check = rightAngled(s1, s2, s3);
				printf("%d\n", right_check);
			} else {
				puts("The values you've entered do not represent the sides of a triangle.");
			}
		} else {
			puts("You've entered a zero or a negative value.");
			break;
		}
	}
}

int rightAngled(int s1, int s2, int s3) 
{
	// see that the Pythagorean theorem checks out for
	// either side
	if ((pow(s1, 2) + pow(s2, 2)) == (pow(s3, 2)) ||
		(pow(s2, 2) + pow(s3, 2)) == (pow(s1, 2)) ||
		(pow(s3, 2) + pow(s1, 2)) == (pow(s2, 2))) {
		return 1;
	} else {
		return 0;
	}
}