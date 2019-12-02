// Chapter 5: Self-review exercise 5.9
// (Car Rental Services) A car rental service charges a minimum fee of $25.00
//  to rent a car for 8 hours, and charges an additional $5 per hour after 8
//  hours. The maximum charge per day is $50 exclusive of service tax. The
//  company charges an additional $0.50 per hour as service tax. Assume that
//  no car is rented for more than 72 hours at a time. If a car is rented for
//  more than 24 hours, then rental is calculated on a daily basis. Write a
//  program that calculates and prints the rental charges for each of three
//  customers who rented cars from this agency yesterday. You should enter
//  the hours for which the car has been rented for each customer. Your
//  program should print the results in a neat tabular format and should
//  calculate and print the total of yesterday’s receipts. The program should
//  use the function calculateCharges to determine the charges for each
//  customer. Your outputs should appear in the following format:
//      Car     Hours   Charge
//      1        12      56.00
//      2        34     117.00
//      3        48     124.00
//      TOTAL    94     297.00
#include <stdio.h>

float calculateCharge(int hoursRented);

int main(void) {

    int hoursCar1, hoursCar2, hoursCar3, hoursTotal = 0;
    float chargeCar1 = 0, chargeCar2 = 0, chargeCar3 = 0, chargeTotal = 0.0;

    printf("Enter the hours for which the three cars have been rented: ");
    scanf("%d%d%d", &hoursCar1, &hoursCar2, &hoursCar3);

    chargeCar1 = calculateCharge(hoursCar1);
    chargeCar2 = calculateCharge(hoursCar2);
    chargeCar3 = calculateCharge(hoursCar3);

    hoursTotal = hoursCar1 + hoursCar2 + hoursCar3;
    chargeTotal = chargeCar1 + chargeCar2 +chargeCar3;

    printf("%-8s%-8s%8s\n", "Car", "Hours", "Charge");
    printf("%-8d %-8d%7.2f\n", 1, hoursCar1, chargeCar1);
    printf("%-8d %-8d%7.2f\n", 2, hoursCar2, chargeCar2);
    printf("%-8d %-8d%7.2f\n", 3, hoursCar3, chargeCar3);
    printf("%-8s %-8d%7.2f\n", "TOTAL", hoursTotal, chargeTotal);
}

float calculateCharge(int hoursRented)
{
    float charge = 0.0, day_fee = 50.0;
    float service_tax = 0.5 * hoursRented;

    while (hoursRented > 0) {
        if (hoursRented % 24 == 0 || hoursRented % 24 > 0) {
            charge += day_fee;
            hoursRented -= 24;
        }
    }

    charge += service_tax;
    return charge;
}
