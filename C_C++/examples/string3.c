/*     FILE: string3.c     */

/* Standard C string library routines 

   Note the inclusion of string.h     */
   
#include <stdio.h>
#include <string.h>

int main( )
{
  char name[81];

  strcpy(name,"Jim");

  printf("You created: %s\n", name);

  return 0;
}


/*    OUTPUT: string3.c

	You created: Jim

*/
