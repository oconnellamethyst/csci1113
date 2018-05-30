/*     FILE: scan.c     */

/*
   Illustration of scanf( ).
*/
#include <stdio.h>

int main( )
{
  float x1;
  float x2;
  float y1;
  float y2;
  float m;
  
  printf("Enter an floating-point value for x1: ");
  scanf("%f", &x1);

  printf("x1 = %f\n", x1);
  
  printf("Enter an floating-point value for x2: ");
  scanf("%f", &x2);
  
  printf("x2 = %f\n", x2);
  
  printf("Enter an floating-point value for y1: ");
  scanf("%f", &y1);
  
  printf("y1 = %f\n", y1);
  
  printf("Enter an floating-point value for y2: ");
  scanf("%f", &y2);
  
  printf("y2 = %f\n", y2);
  
  m = (y2-y1)/(x2-x1);
  
  printf("m = %.15f\n",m);

  return 0;
}


/*    OUTPUT: scan.c

	Enter an floating-point value for x1: 1
	x1 = 1.000000
	Enter an floating-point value for x2: 2
	x2 = 2.000000
	Enter an floating-point value for y1: 3
	y1 = 3.000000
	Enter an floating-point value for y2: 4
	y2 = 4.000000
	m = 1.000000000000000

*/
