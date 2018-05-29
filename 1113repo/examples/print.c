/*     FILE: print.c     */

/*
   Illustration of printf( ) and conversion specifiers.
*/
#include <stdio.h>

int main( )
{
  int x = 12;
  float y = 3.75;

  printf("%d", x);

  printf("\nx = %d\n", x);

  printf("y = %f\n", y);

  return 0;
}


/*    OUTPUT: print.c

	12
	x = 12
	y = 3.750000

*/
