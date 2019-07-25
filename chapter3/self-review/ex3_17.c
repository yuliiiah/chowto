// Chapter 3: Self-review exercise 3.17
// (Mortgage Calculator) Develop a C program to calculate the interest accrued on a bank
// customer's mortgage. For each customer, the following facts are available:
//      a) the account number
//      b) the mortgage amount
//      c) the mortgage term
//      d) the interest rate
// The program should input each fact, calculate the total interest payable
// ( = mortgage amount × interest rate × mortgage term), and add it to the mortgage
// amount to get the total amount payable. It should calculate the required
// monthly payment by dividing the total amount payable by the number of months
// in the mortgage term. The program should display the required monthly payment
// rounded off to the nearest dollar. The program should process
// each customer's account at a time. Here is a sample input/ output dialog:
//  Enter account number (-1 to end): 100
//  Enter mortgage amount (in dollars): 6500
//  Enter mortgage term (in years): 3
//  Enter interest rate (as a decimal): 0.075
//  The monthly payable interest $ 221
#include <stdio.h>

// Calculate the interest accrued on a bank customer's mortgage.
int main(void)
{
	// Initialize variables:
	int account_num; // account number (i)
    unsigned int mortgage_amount; // mortgage amount (i)
    unsigned int mortgage_term; // mortgage term (i)
    float interest_rate; // interest rate (f)

    // Get and store data from the user
	printf("%s", "Enter account number (-1 to end): ");
	scanf("%d", &account_num);

	// Exit if the user enters -1
	if (account_num != -1) {
        printf("%s", "Enter mortgage amount (in dollars): ");
        scanf("%u", &mortgage_amount);

        printf("%s", "Enter mortgage term (in years): ");
        scanf("%u", &mortgage_term);

        printf("%s", "Enter interest rate (as a decimal): ");
        scanf("%f", &interest_rate);

        // Calculate the total interest payable
        unsigned int total_interest;
        total_interest = mortgage_amount * interest_rate * mortgage_term;

        // Calculate the total amount payable
        unsigned int total_amount_payable;
        total_amount_payable = total_interest + mortgage_amount;

        // Calculate the required monthly payment
        unsigned int monthly_payment;
        monthly_payment = total_amount_payable / (mortgage_term * 12);

        // Display the required monthly payment (int)
        printf("The monthly payable interest is: %d\n", (int) monthly_payment);
	}
	else {
        return 0;
	}
} // end main