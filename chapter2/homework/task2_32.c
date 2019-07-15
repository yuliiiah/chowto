// Self-review exercises from Ch. 2: 2.32
// (Body Mass Index Calculator) We introduced the body mass index (BMI) calculator
//  in Exercise 1.12. The formula for calculating BMI is:
//  BMI = weightInKilograms / heightInMeters × heightInMeters

// Create a BMI calculator application that reads the user’s weight in kilograms and height in meters,
// then calculates and displays the user’s body mass index. Also, the application should display
// the following information from the Department of Health and Human Services/National Institutes of Health
// so the user can evaluate his/her BMI:
//  BMI VALUES
//  Underweight: less than 18.5
//  Normal: between 18.5 and 24.9
//  Overweight: between 25 and 29.9
//  Obese: 30 or greater
#include <stdio.h>

int main(void)
{
    printf("%s", "Enter your weight in kilograms and height in meters: ");

    int weight, height;
    scanf("%d %d", &weight, &height);

    int bmi = weight / (height * height);

    printf("BMI VALUES\n"
           "Underweight: less than 18.5\n"
           "Normal: between 18.5 and 24.9\n"
           "Overweight: between 25 and 29.9\n"
           "Obese: 30 or greater\n"
           "\n"
           "Your BMI is %d\n", bmi);
}