/*     FILE: arith_4.c     */

/* Arithmetic operators with floating-point data */

#include <stdio.h>

int main( )
{
  float first, second, sum;

  first = 11;
  second = 12;

  sum = first + second;
  printf("%f + %f = %f\n", first, second, sum);

  sum = first - second;
  printf("%f - %f = %f\n", first, second, sum);

  sum = second - first;
  printf("%f - %f = %f\n", second, first, sum);

  sum = first * second;
  printf("%f * %f = %f\n", first, second, sum);

  sum = first / second;
  printf("%f / %f = %f\n", first, second, sum);

  return 0;
}


/*    OUTPUT: arith_4.c

	11.000000 + 12.000000 = 23.000000
	11.000000 - 12.000000 = -1.000000
	12.000000 - 11.000000 = 1.000000
	11.000000 * 12.000000 = 132.000000
	11.000000 / 12.000000 = 0.916667

*/
