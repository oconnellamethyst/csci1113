/*     FILE: loopChar.c     */

/* Reading characters in a loop.

   Note the space in front of the %c.
   It causes scanf( ) to skip leading
   whitespace characters.

   Ctrl/z produces an EOF from the
   keyboard on a PC.

*/

#include <stdio.h>

int main( )
{
  int ch;

  while(scanf(" %c", &ch) != EOF)
  {
     printf("character = %c\n", ch);
  }

  return 0;
}


/*    OUTPUT: loopChar.c

	character = a
	character = b
	character = c
	character = d
	character = F

       INPUT: 

	a
	b
	
	c  d
	
	
	
	F

*/
