/*     FILE: string5.c     */

/* Passing a string to a function - pointer */
#include <stdio.h>
#include <string.h>

void myPuts(char *str);

int main( )
{
  char name[81];

  strcpy(name,"Jim");
  strcat(name," Polzin");

  printf("You created: %s\n", name);
/* Another way */
  myPuts("You created: ");
  myPuts(name);
  myPuts("\n");

  return 0;
}

void myPuts(char *str)
{
  while(*str != '\0')
    putchar(*str++);

  return;
}


/*    OUTPUT: string5.c

	You created: Jim Polzin
	You created: Jim Polzin

*/
