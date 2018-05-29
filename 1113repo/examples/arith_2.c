/*     FILE: arith_2.c     */

/* Arithmetic operators with nicer output */

#include <stdio.h>

int main( )
{
  int first, second, sum;

  first = 11;
  second = 12;

  sum = first + second;
  printf("%d + %d = %d\n", first, second, sum);

  sum = first - second;
  printf("%d - %d = %d\n", first, second, sum);

  sum = first * second;
  printf("%d * %d = %d\n", first, second, sum);

  sum = first / second;
  printf("%d / %d = %d\n", first, second, sum);

  return 0;
}


/*    OUTPUT: arith_2.c

	11 + 12 = 23
	11 - 12 = -1
	11 * 12 = 132
	11 / 12 = 0

*/
