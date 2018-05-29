/*     FILE: scan2.c     */

/*
   Illustration of scanf( ) with characters and characters
   are integers.
*/
#include <stdio.h>

int main( )
{
  char c;

  printf("Enter a character: ");
  scanf("%c", &c);

  printf("c = %c\n", c);

  printf("c = %d\n", c);

  return 0;
}


/*    OUTPUT: scan2.c

	Enter a character: A
	c = A
	c = 65

*/
