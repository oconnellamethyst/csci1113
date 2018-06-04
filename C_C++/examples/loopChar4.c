/*     FILE: loopChar4.c     */

/*
   Reading characters in a loop with
   getchar( ).

   Using the isspace( ) function to skip
   whitespace.
*/

#include <stdio.h>
#include <ctype.h>

int main( )
{
  int ch;

  while((ch = getchar( )) != EOF)
  {
     if (!isspace(ch))
       printf("character = %c\n", ch);
  }

  return 0;
}


/*    OUTPUT: loopChar4.c

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
