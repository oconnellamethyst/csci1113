/*     FILE: array2.c     */

/* A simple array example.
   Stores values and displays them.
   
   The output is a little fancier. */

#include <stdio.h>

main( )
{
  int ar[10];
  int i;

  for(i=0; i<10; i++)
    ar[i] = 23 - i;

  for(i=0; i<10; i++)
    printf("ar[%d] = %d\n", i, ar[i]);

  return 0;
}



/*    OUTPUT: array2.c

	ar[0] = 23
	ar[1] = 22
	ar[2] = 21
	ar[3] = 20
	ar[4] = 19
	ar[5] = 18
	ar[6] = 17
	ar[7] = 16
	ar[8] = 15
	ar[9] = 14

*/
