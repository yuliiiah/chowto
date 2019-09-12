// Chapter 4: Self-review exercise 4.17
// (Calculating Credit Limits) Collecting money becomes increasingly
//  difficult during periods of recession, so companies may tighten
//  their credit limits to prevent their accounts receivable (money owed to
//  them) from becoming too large. In response to a prolonged recession,
//  one company has cut its customers’ credit limits in half. Thus, if a
//  particular customer had a credit limit of $2000, it’s now $1000. If a
//  customer had a credit limit of $5000, it’s now $2500. Write a program
//  that analyzes the credit status of three customers of this company.
//  For each customer you’re given:
//      a) The customer’s account number.
//      b) The customer’s credit limit before the recession.
//      c) The customer’s current balance (i.e., the amount
//      the customer owes the company).
//  Your program should calculate and print the new credit limit for each
//  customer and should determine (and print) which customers have current
//  balances that exceed their new credit limits.
#include <stdio.h>

int main(void)
{
    int account_number;
    float account_balance, old_credit, new_credit;
    printf("%s", "Enter your account number, credit limit, and current "
                 "balance: ");
    scanf("%d%f%f", &account_number, &old_credit, &account_balance);

    new_credit = old_credit / 2;
    printf("\nYour new credit limit is: %.2f\n", new_credit);
    puts(account_balance > new_credit ? "Your account balance exceeds the "
                                        "new credit limit." :
                                        "Your account balance does not exceed "
                                        "the new credit limit.");
}