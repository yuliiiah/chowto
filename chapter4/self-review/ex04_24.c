// Chapter 4: Self-review exercise 4.24
//  Assume i = 5 , j = 7 , k = 4 and m = -2.
//   What does each of the following statements print?
//      a) printf("%d", i == 5);
//      b) printf("%d", j!= 3);
//      c) printf("%d", i >= 5 && j < 4);
//      d) printf("%d", !m && k > m);
//      e) printf("%d", !k || m);
//      f) printf("%d", k - m < j || 5 - j >= k);
//      g) printf("%d", j + m <= i && !0);
//      h) printf("%d", !(j - m));
//      i) printf("%d", !(k > m));
//      j) printf("%d", !(j > k));
#include <stdio.h>

int main(void)
{
    int i = 5, j = 7, k = 4, m = -2;

    printf("%d\n", i == 5);
    printf("%d\n", j!= 3);
    printf("%d\n", i >= 5 && j < 4);
    printf("%d\n", !m && k > m);
    printf("%d\n", !k || m);
    printf("%d\n", k - m < j || 5 - j >= k);
    printf("%d\n", j + m <= i && !0);
    printf("%d\n", !(j - m));
    printf("%d\n", !(k > m));
}