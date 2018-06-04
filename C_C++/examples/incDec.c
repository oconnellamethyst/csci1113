/*     FILE: incDec.c     */

/* Example of increment & decrement, postfix and prefix. */

#include <stdio.h>

int main( )
{
  int i =7;
  
  printf("i = %d\n", i++);
  printf("After postfix ++, i = %d\n\n", i);
  
  printf("i = %d\n", ++i);
  printf("After prefix ++, i = %d\n\n", i);
  
  printf("i = %d\n", i--);
  printf("After postfix --, i = %d\n\n", i);
  
  printf("i = %d\n", --i);
  printf("After prefix --, i = %d\n\n", i);
  
  return 0;
}


/*    OUTPUT: incDec.c

	i = 7
	After postfix ++, i = 8
	
	i = 9
	After prefix ++, i = 9
	
	i = 9
	After postfix --, i = 8
	
	i = 7
	After prefix --, i = 7
	

*/
