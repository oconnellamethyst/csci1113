/*     FILE: arith_3.c     */

/* More arithmetic operators with nicer output */

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

  sum = second - first;
  printf("%d - %d = %d\n", second, first, sum);

  sum = first * second;
  printf("%d * %d = %d\n", first, second, sum);

  sum = first / second;
  printf("%d / %d = %d\n", first, second, sum);

  return 0;
}


/*    OUTPUT: arith_3.c

	11 + 12 = 23
	11 - 12 = -1
	12 - 11 = 1
	11 * 12 = 132
	11 / 12 = 0

*/
