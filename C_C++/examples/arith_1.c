/*     FILE: arith_1.c     */

/* Arithmetic operators */

#include <stdio.h>

int main( )
{
  int first, second, sum;

  first = 11;
  second = 12;

  sum = first + second;
  printf("sum = %d\n", sum);

  sum = first - second;
  printf("sum = %d\n", sum);

  sum = first * second;
  printf("sum = %d\n", sum);

  sum = first / second;
  printf("sum = %d\n", sum);

  return 0;
}


/*    OUTPUT: arith_1.c

	sum = 23
	sum = -1
	sum = 132
	sum = 0

*/
