/*     FILE: string.c     */

/* Basic C string functionality */

#include <stdio.h>

int main( )
{
  char name[81];

  printf("Prompts are strings.\n");
  printf("String - %s", "Please enter a string: ");
  scanf("%s", name);

  printf("\n\nYou entered- %s\n", name);

  return 0;
}


/*    OUTPUT: string.c

	Prompts are strings.
	String - Please enter a string: Jim
	
	
	You entered- Jim

*/
