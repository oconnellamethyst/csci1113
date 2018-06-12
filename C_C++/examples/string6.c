/*     FILE: string6.c     */

/* Passing a string to a function - pointers */
#include <stdio.h>
#include <string.h>

void myPuts(char *str);
void myStrcpy(char *dest, char *src);
char * myStrcpy2(char *dest, char *src);

int main( )
{
  char name[81];

  myStrcpy(name,"Jim Polzin");

  myPuts("You created: ");
  myPuts(name);
  myPuts("\n");

  myPuts("You created: ");
  myPuts(myStrcpy2(name,"C Programming Language."));
  myPuts("\n");

  return 0;
}

void myPuts(char *str)
{
  while(*str)
    putchar(*str++);

  return;
}

void myStrcpy(char *dest, char *src)
{
  while(*src != '\0'){
    *dest = *src;
    dest++;
    src++;
  }
  *dest = *src;

  return;
}

char * myStrcpy2(char *dest, char *src)
{
  char * ret = src;

  while(*dest++ = *src++);

  return ret;
}


/*    OUTPUT: string6.c

	You created: Jim Polzin
	You created: C Programming Language.

*/
