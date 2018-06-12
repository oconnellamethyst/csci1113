/*     FILE: array1.c     */

/* A simple array example.
   Stores values and displays them. */

#include <stdio.h>

main( )
{
  int ar[10];
  int i;

  for(i=0; i<10; i++)
    ar[i] = 23 - i;

  for(i=0; i<10; i++)
    printf("%d\n", ar[i]);

  return 0;
}



/*    OUTPUT: array1.c

	23
	22
	21
	20
	19
	18
	17
	16
	15
	14

*/
