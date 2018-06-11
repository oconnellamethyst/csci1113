/*     FILE: string4.c     */

/* Standard C string library routines */
   
#include <stdio.h>
#include <string.h>

int main( )
{
  char name[81];

  strcpy(name,"Jim");
  strcat(name," Polzin");

  printf("You created: %s\n", name);

  if(strcmp(name,"jim polzin") == 0)
    printf("%s matches %s\n", name, "jim polzin");
  else
    printf("%s doesn't match %s\n", name, "jim polzin");

  if(strcmp(name,"Jim Polzin") == 0)
    printf("%s matches %s\n", name, "Jim Polzin");
  else
    printf("%s doesn't match %s\n", name, "Jim Polzin");


  printf("\n\nString length = %d\n", strlen(name));
  printf("\n\nSize of name  = %d\n", sizeof(name));

  return 0;
}


/*    OUTPUT: string4.c

	You created: Jim Polzin
	Jim Polzin doesn't match jim polzin
	Jim Polzin matches Jim Polzin
	
	
	String length = 10
	
	
	Size of name  = 81

*/
