// Chapter 5: Self-review exercise 5.13
/* Write statements that assign random integers 
   to the variable n in the following ranges: 
	a) 1 ≤ n ≤ 6
	b) 100 ≤ n ≤ 1000
	c) 0 ≤ n ≤ 19
	d) 1000 ≤ n ≤ 2222
	e) –1 ≤ n ≤ 1
	f) –3 ≤ n ≤ 11
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n1 = 1 + rand() % 6;
	int n2 = 100 + rand() % 1000;
	int n3 = 0 + rand() % 19;
	int n4 = 1000 + rand() % 2222;
	int n5 = -1 + rand() % 1;
	int n6 = -3 + rand() % 11;

	printf("%d\n%d\n%d\n%d\n%d\n%d\n", n1, n2, n3, n4, n5, n6);
	return 0;
}