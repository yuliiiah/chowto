// Chapter 4: Self-review exercise 4.15
// (Modified Compound-Interest Program) Modify the compound-interest program
//  of Section 4.6 to repeat its steps for interest rates of 5%, 6%, 7%, 8%,
//  9%, and 10%. Use a for loop to vary the interest rate.
#include <stdio.h>
#include <math.h>

int main(void)
{
    double principal = 1000.0; // starting principal
    double rate = .05; // annual interest rate

    for (int counter = 1; counter <= 6; counter++) {
        // output table column heads
        printf("%4s%21s%8s\n", "Year", "Amount on deposit", "Rate");

        // calculate amount on deposit for each of ten years
        for (unsigned int year = 1; year <= 10; year++) {

            // calculate new amount for specified year
            double amount = principal * pow(1.0 + rate, year);

            // output one table row
            printf("%4u%21.2f%8.2f\n", year, amount, rate);
        }

        rate += 0.01;
    }
}