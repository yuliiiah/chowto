// Chapter 4: Self-review exercise 4.27
// (Pythagorean Triples) A right triangle can have sides that are
//  all integers. The set of three integer values for the sides of a right
//  triangle is called a Pythagorean triple. These three sides must satisfy
//  the relationship that the sum of the squares of two of the sides is equal
//  to the square of the hypotenuse. Find all Pythagorean triples for side1,
//  side2, and the hypotenuse all no larger than 500. Use a triple-nested
//  for loop that simply tries all possibilities.
#include <stdio.h>
#include <math.h>

int main(void)
{
    for (int a = 1; a <= 500; a++) {
        for (int b = 1; b <= 500; b++) {
            for (int c = 1; c <= 500; c++) {
                if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
                    printf("%d, %d, %d\n", a, b, c);
                }
            }
        }
    }
}