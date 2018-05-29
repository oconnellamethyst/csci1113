/*     FILE: unsigned.c     */

/*
   Illustration of the unsigned keyword.  Allows
   recovering the use of the lead bit for magnitude.
*/
#include <stdio.h>

int main( )
{
  unsigned int x;

  x = 3333222111;

  printf("Unsigned x = %u\n", x);

  printf("Signed x = %d\n", x);

  return 0;
}


/*    OUTPUT: unsigned.c

	Unsigned x = 3333222111
	Signed x = -961745185

*/
