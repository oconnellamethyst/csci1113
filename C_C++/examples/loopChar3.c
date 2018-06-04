/*     FILE: loopChar3.c     */

/* Reading characters in a loop with
   getchar( ).

*/

#include <stdio.h>

int main( )
{
  int ch;

  while((ch = getchar( )) != EOF)
  {
     if (ch != '\n' && ch != '\t' && ch != ' ')
       printf("character = %c\n", ch);
  }

  return 0;
}


/*    OUTPUT: loopChar3.c

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
