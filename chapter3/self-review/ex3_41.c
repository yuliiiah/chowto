// Chapter 3: Self-review exercise 3.41
// (Diameter, Circumference and Area of a Cirle) Write a program
//  that reads the radius of a circle (as a float value) and computes and
//  prints the diameter, the circumference and the area.
//  Use the value 3.14159 for π .
#include <stdio.h>

int main(void) {
    float pi = 3.14159;
    float radius;
    printf("%s", "Give me a radius: ");
    scanf("%f", &radius);

    float diameter, circumference, area;

    diameter = radius * 2;
    circumference = 2 * pi * radius;
    area = pi * (radius * radius);

    printf("The diameter is %f.\n"
           "The circumference is %f.\n"
           "The area is %f.\n", diameter, circumference, area);
}