// Chapter 4: Self-review exercise 4.28
// (Calculating Weekly Pay) A company pays its employees as
//  - managers (who receive a fixed weekly salary),
//  - hourly workers (who receive a fixed hourly wage for up to the first 40
//  hours they work and “time-and-a-half”—i.e., 1.5 times their hourly
//  wage—for overtime hours worked),
//  - commission workers (who receive $250 plus 5.7% of their gross weekly sales),
//  - or pieceworkers (who receive a fixed amount of money for each of the
//  items they produce—each pieceworker in this company works on only one
//  type of item).
//  Write a program to compute the weekly pay for each employee. You do not
//  know the number of employees in advance. Each type of employee has its
//  own pay code: Managers have paycode 1, hourly workers have code 2,
//  commission workers have code 3 and pieceworkers have code 4. Use a
//  switch to compute each employee’s pay based on that employee’s paycode.
//  Within the switch , prompt the user (i.e., the payroll clerk) to enter
//  the appropriate facts your program needs to calculate each employee’s pay
//  based on that employee’s paycode. [Note: You can input values of type
//  double using the conversion specifier %lf with scanf .]
#include <stdio.h>

int main(void)
{
    int paycode = 0;
    do {
        float salary = 0;
        float hourly_wage, weekly_sales, item_worth;
        int hours_worked, items_produced;

        printf("%s", "Enter employee paycode (-1 to exit): ");
        scanf("%d", &paycode);

        switch (paycode) {
            case -1:
                break;
            case 1:
                // managers (who receive a fixed weekly salary)
                printf("%s", "Enter the fixed salary: ");
                scanf("%f", &salary);

                printf("This manager's pay is: %.2f\n", salary);
                puts("");
                break;
            case 2:
                // hourly workers (who receive a fixed hourly wage for up
                //  to the first 40 hours they work and “time-and-a-half”—
                //  i.e., 1.5 times their hourly wage—for overtime hours
                //  worked)
                printf("%s", "Enter the hourly wage and hours worked: ");
                scanf("%f %d", &hourly_wage, &hours_worked);

                for (int hour = 1; hour <= hours_worked; hour++) {
                    if (hour > 40) {
                        salary += hourly_wage * 1.5;
                    } else {
                        salary += hourly_wage;
                    }
                }
                printf("The hourly worker's pay is: %.2f\n", salary);
                puts("");
                break;
            case 3:
                // commission workers (who receive $250 plus 5.7%
                //  of their gross weekly sales)
                printf("%s", "Enter the gross weekly sales: ");
                scanf("%f", &weekly_sales);

                salary = 250 + weekly_sales * 0.057;
                printf("The commission worker's pay is: %.2f\n", salary);
                puts("");
                break;
            case 4:
                // pieceworkers (who receive a fixed amount of money for
                //  each of the items they produce—each pieceworker in this
                //  company works on only one type of item)
                printf("%s", "Enter the amount of items produced"
                             " and item worth: ");
                scanf("%d %f", &items_produced, &item_worth);

                salary = item_worth * items_produced;
                printf("The pieceworker's pay is: %.2f\n", salary);
                puts("");
                break;
            default:
                puts("You've entered a wrong paycode, try again.");
                puts("");
        }
    } while (paycode != -1);
}