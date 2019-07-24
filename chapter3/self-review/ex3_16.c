// Chapter 3: Self-review exercise 3.16
// (Sales Tax) Sales tax is collected from buyers and remitted to the government. A retailer
//  has to file a monthly sales tax report which lists the sales for the month and the amount of sales
//  tax collected, at both the county and state levels. Develop a program that will input the total
//  collections for a month, calculate the sales tax on the collections, and display the county and state
//  taxes. Assume that states have a 4% sales tax and counties have a 5% sales tax. Here is a sample
//  input/output dialog.

// Enter total amount collected (-1 to quit): 45678
// Enter name of month: January
// Total Collections: $ 45678.00
// Sales: $ 41906.42
// County Sales Tax: $ 2095.32
// State Sales Tax: $ 1676.26
// Total Sales Tax Collected: $ 3771.58
#include <stdio.h>

int main(void) {

    float total_collected;
    char month[20];
    float total_sales;
    float county_tax;
    float state_tax;
    float total_tax;

    printf("%s", "Enter total amount collected (-1 to quit): ");
    scanf("%f", &total_collected);

    if (total_collected != -1) {
        printf("%s", "Enter name of month: ");
        scanf("%s", month);

        total_sales = total_collected / 1.09;
        county_tax = total_sales * 0.05;
        state_tax = total_sales * 0.04;
        total_tax = county_tax + state_tax;
    }
    else {
        return 1;
    }

    printf("Total Collections: %.2f\n", total_collected);
    printf("Sales: %.2f\n", total_sales);
    printf("County Sales Tax: %.2f\n", county_tax);
    printf("State Sales Tax: %.2f\n", state_tax);
    printf("Total Sales Tax Collected: %.2f\n", total_tax);
}