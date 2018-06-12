/*     FILE: arrayString.c     */

/* Strings are arrays */
   
#include <stdio.h>
#include <string.h>

int main( )
{
  char name[81];

  strcpy(name,"Jim");
  strcat(name," Polzin");

  printf("You created: %s\n", name);

  name[6] = 'L';
  
  printf("It was changed to: %s\n", name);
 
  return 0;
}


/*    OUTPUT: arrayString.c

	You created: Jim Polzin
	It was changed to: Jim PoLzin

*/
