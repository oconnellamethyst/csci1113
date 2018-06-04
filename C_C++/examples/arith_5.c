/*     FILE: arith_5.c     */

/* More arithmetic operators with floating-point data */

#include <stdio.h>

int main( )
{
  float first, second, sum;

  first = 1.35;
  second = 2.75;

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


/*    OUTPUT: arith_5.c

	1.350000 + 2.750000 = 4.100000
	1.350000 - 2.750000 = -1.400000
	2.750000 - 1.350000 = 1.400000
	1.350000 * 2.750000 = 3.712500
	1.350000 / 2.750000 = 0.490909

*/
