/*     FILE: string2.c     */

/* Basic C string functionality */

#include <stdio.h>

int main( )
{
  char name[81];

  name[0] = 'J';
  name[1] = 'i';
  name[2] = 'm';
  name[3] = '\0';

  printf("\n\nYou created: %s\n", name);

  return 0;
}


/*    OUTPUT: string2.c

	
	
	You created: Jim

*/
