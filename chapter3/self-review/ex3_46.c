// Chapter 3: Self-review exercise 3.46
// (World-Population-Growth Calculator) Use the web to determine
//  the current world population and the annual world population growth rate.
//  Write an application that inputs these values, then displays the
//  estimated world population after one, two, three, four and five years.
#include <stdio.h>

int main(void)
{
    float current_pop, ann_growth;
    printf("%s", "Enter the current world population: ");
    scanf("%f", &current_pop);

    printf("%s", "Enter the annual world population growth rate: ");
    scanf("%f", &ann_growth);

    float in_one, in_two, in_three, in_four, in_five;

    in_one = current_pop + ((ann_growth / 100) * current_pop);
    in_two = in_one + ((ann_growth / 100) * in_one);
    in_three = in_two + ((ann_growth / 100) * in_two);
    in_four = in_three + ((ann_growth / 100) * in_three);
    in_five = in_four + ((ann_growth / 100) * in_four);

    printf("In one year, the world population will be: %.2f billion.\n"
           "In two years, the world population will be: %.2f billion.\n"
           "In three years, the world population will be: %.2f billion.\n"
           "In four years, the world population will be: %.2f billion.\n"
           "In five years, the world population will be: %.2f billion.\n",
           in_one, in_two, in_three, in_four, in_five);
}