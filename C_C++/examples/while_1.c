/*     FILE: while_1.c     */

/* while loop example. */

#include <stdio.h>

int main( )
{
  int i;

  i = 0;
  while (i < 10)
  {
     printf("i = %d\n", i + 1);
     i++;
  }

  return 0;
}


/*    OUTPUT: while_1.c

	i = 1
	i = 2
	i = 3
	i = 4
	i = 5
	i = 6
	i = 7
	i = 8
	i = 9
	i = 10

*/
