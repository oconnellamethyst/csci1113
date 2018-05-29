/*     FILE: scan.c     */

/*
   Illustration of scanf( ).
*/
#include <stdio.h>

int main( )
{
  int x;
  float y;

  printf("x = %d\n", x);

  printf("y = %f\n", y);

  printf("Enter an integer value for x: ");
  scanf("%d", &x);

  printf("Enter a floating-point value for y: ");
  scanf("%f", &y);

  printf("x = %d\n", x);

  printf("y = %f\n", y);

  return 0;
}


/*    OUTPUT: scan.c

	x = 4206596
	y = 0.000000
	Enter an integer value for x: 7
	Enter a floating-point value for y: 3.3
	x = 7
	y = 3.300000

*/
