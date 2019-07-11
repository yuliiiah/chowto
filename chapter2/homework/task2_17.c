// Self-review exercises from Ch. 2: 2.17
// (Final Velocity) Write a program that
//  asks the user to enter the initial velocity and
//  acceleration of an object, and the time that has elapsed,
//  places them in the variables u, a, and t, and prints
//  the final velocity, v, and distance traversed, s,
//  using the following equations:
//      a) v = u + at
//      b) s = ut + 0.5at^2
#include <stdio.h>

int main(void)
{
    puts("Give me initial velocity, object acceleration, and elapsed time:");

    int u, a, t;
    scanf("%d %d %d", &u, &a, &t);

    int v = u + a * t;
    int s = (u * t) + (0.5 * a * t * t);

    printf("\nFinal velocity is: %d\n", v);
    printf("Distance traversed is: %d\n", s);
}