/*     FILE: loopChar2.c     */

/* Reading characters in a loop with
   getchar( ).

*/

#include <stdio.h>

int main( )
{
  int ch;

  while((ch = getchar( )) != EOF)
  {
     printf("character = %c\n", ch);
  }

  return 0;
}


/*    OUTPUT: loopChar2.c

	character = a
	character = 
	
	character = b
	character = 
	
	character = 
	
	character = c
	character =  
	character =  
	character = d
	character = 
	
	character = 
	
	character = 
	
	character = 
	
	character = F
	character = 
	

       INPUT: 

	a
	b
	
	c  d
	
	
	
	F

*/
