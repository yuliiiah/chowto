// Chapter 4: Self-review exercise 4.29
// (De Morgan’s Laws) In this chapter, we discussed the logical operators
//  &&, ||, and !. De Morgan’s Laws can sometimes make it more convenient
//  for us to express a logical expression. These laws state that the
//  expression !(condition1 && condition2) is logically equivalent to
//  the expression (!condition1 || !condition2). Also, the expression
//  !(condition1 || condition2 ) is logically equivalent to the expression
//  (! condition1 && ! condition2). Use De Morgan’s Laws to write equivalent
//  expressions for each of the following, and then write a program
//  to show that both the original expression and the new expression in each
//  case are equivalent.
//      a) !(x < 5) && !(y >= 7)
//      b) !(a == b) || !(g != 5)
//      c) !((x <= 8) && (y > 4))
//      d) !((i > 4) || (j <= 6))
#include <stdio.h>

int main(void)
{
    int x = 7, y = 6;
    if (!(x < 5) && !(y >= 7)) {
        puts("The equation is true in both cases!");
    }
    if (!(x < 5 || y >= 7)){
        puts("The equation is true in both cases!");
    }
    puts("");

    int a = 3, b = 4, g = 3;
    if (!(a == b) || !(g != 5)) {
        puts("The equation is true in both cases!");
    }
    if (!(a == b && g != 5)){
        puts("The equation is true in both cases!");
    }
    puts("");

    x = 18;
    y = 2;
    if (!((x <= 8) && (y > 4))) {
        puts("The equation is true in both cases!");
    }
    if (!(x <= 8 || y > 4)){
        puts("The equation is true in both cases!");
    }
    puts("");

    int i = 2, j = 9;
    if (!((i > 4) || (j <= 6))) {
        puts("The equation is true in both cases!");
    }
    if (!(i > 4) && !(j <= 6)){
        puts("The equation is true in both cases!");
    }
    puts("");
}