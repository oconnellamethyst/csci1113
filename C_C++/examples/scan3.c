/*     FILE: scan3.c     */

/*
   Illustration of interpretation caused by conversion specifiers.
*/
#include <stdio.h>

int main( )
{
  char c;
  int x;

  printf("Enter a character: ");
  scanf("%c", &c);

  printf("c = %c\n", c);

  printf("c = %d\n", c);

  printf("Enter an integer: ");
  scanf("%d", &x);

  printf("x = %d\n", x);

  printf("x = %c\n", x);

  return 0;
}


/*    OUTPUT: scan3.c

	Enter a character: 6
	c = 6
	c = 54
	Enter an integer: 6
	x = 6
	x = 

*/
