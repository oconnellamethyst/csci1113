/*     FILE: arith_6.c     */

/* Precedence of operators */

#include <stdio.h>

int main( )
{
  int first, second, sum;

  first = 10;
  second = 12;

  sum = first + second / 3;
  printf("%d + %d / 3 = %d\n", first, second, sum);

  return 0;
}


/*    OUTPUT: arith_6.c

	10 + 12 / 3 = 14

*/
