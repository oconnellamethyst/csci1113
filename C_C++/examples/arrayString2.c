/*     FILE: arrayString2.c     */

/* Strings are arrays */
   
#include <stdio.h>
#include <string.h>

int main( )
{
  int i;
  char name[81];

  strcpy(name,"Jim");
  strcat(name," Polzin");

  printf("You created: ");

  for(i=0; name[i] != '\0'; i++)
    putchar(name[i]);
    
  putchar('\n');
 
  return 0;
}


/*    OUTPUT: arrayString2.c

	You created: Jim Polzin

*/
