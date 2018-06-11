/*     FILE: stringRead.c     */

/* Reading strings with scanf( ) */

#include <stdio.h>

int main( )
{
  char name[81];

  printf("Enter your name: ");
  scanf("%s", name);
  
  

  printf("\n\n");
  printf("You entered: %s\n", name);

  return 0;
}


/*    OUTPUT: stringRead.c

	Enter your name: Jim Polzin 
	
	
	You entered: Jim

	Enter your name: One Two Three 
	
	
	You entered: One

*/
