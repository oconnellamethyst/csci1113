/*     FILE: arith_7.c     */

/* Parentheses override precedence of operators */

#include <stdio.h>

int main( )
{
  int first, second, sum;

  first = 10;
  second = 12;

  sum = (first + second) / 3;
  printf("(%d + %d) / 3 = %d\n", first, second, sum);

  return 0;
}


/*    OUTPUT: arith_7.c

	(10 + 12) / 3 = 7

*/
