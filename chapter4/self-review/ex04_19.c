// Chapter 4: Self-review exercise 4.19
// (Calculating Sales) An online retailer sells five different products
//  whose retail prices are shown in the following table:
//      Product number      Retail price
//      1                   $ 2.98
//      2                   $ 4.50
//      3                   $ 9.98
//      4                   $ 4.49
//      5                   $ 6.87
//
//  Write a program that reads a series of pairs of numbers as follows:
//      a) Product number
//      b) Quantity sold for one day
//  Your program should use a switch statement to help determine the
//  retail price for each product. Your program should calculate and display
//  the total retail value of all products sold last week.
#include <stdio.h>

int main(void)
{
    int product_number, product_quantity;
    float total_retail = 0;

    do {
        printf("%s", "Enter product number and quantity (-1 0 to stop): ");
        scanf("%d%d", &product_number, &product_quantity);

        switch (product_number) {

            case -1:
                break;
            case 1:
                total_retail += product_quantity * 2.98;
                break;
            case 2:
                total_retail += product_quantity * 4.50;
                break;
            case 3:
                total_retail += product_quantity * 9.98;
                break;
            case 4:
                total_retail += product_quantity * 4.49;
                break;
            case 5:
                total_retail += product_quantity * 6.87;
                break;
            default:
                puts("You entered a wrong product number. Try 1 through 5.");
        }
    } while (product_number != -1);

    if (product_number == -1) {
        printf("The total retail value is: %.2f\n", total_retail);
    }
}