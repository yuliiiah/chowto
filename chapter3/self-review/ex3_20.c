// Chapter 3: Self-review exercise 3.19
// (Salary Calculator) Develop a program that will determine the gross pay
//  for each of several employees. The company pays “straight time” for the
//  first 40 hours worked by each employee and pays “time-and-a-half” for
//  all hours worked in excess of 40 hours. You’re given a list
//  of the employees of the company, the number of hours each employee worked
//  last week and the hourly rate of each employee. Your program should
//  input this information for each employee and should determine and display
//  the employee's gross pay. Here is a sample input/output dialog:
//      Enter # of hours worked (-1 to end): 39
//      Enter hourly rate of the worker ($00.00): 10.00
//      Salary is $390.00
//
//      Enter # of hours worked (-1 to end): 40
//      Enter hourly rate of the worker ($00.00): 10.00
//      Salary is $400.00
//
//      Enter # of hours worked (-1 to end): 41
//      Enter hourly rate of the worker ($00.00): 10.00
//      Salary is $415.00
//
//      Enter # of hours worked (-1 to end): -1
#include <stdio.h>

int main(void)
{
    int hours_worked;
    printf("%s", "Enter # of hours worked (-1 to end): ");
    scanf("%i", &hours_worked);

    while (hours_worked != -1) {
        float hourly_rate, salary;
        printf("%s", "Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &hourly_rate);

        if (hours_worked <= 40) {
            salary = hours_worked * hourly_rate;
        }
        else {
            salary = 40 * hourly_rate;

            int hour = 41;
            while (hour <= hours_worked) {
                salary += hourly_rate + hourly_rate * 0.5;
                hour++;
            }
        }

        printf("Salary is $%.2f\n\n", salary);

        printf("%s", "Enter # of hours worked (-1 to end): ");
        scanf("%i", &hours_worked);
    }
}