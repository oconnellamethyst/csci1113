/*     FILE: for_2.c     */

/* for loop example with adjustment for counting from 0. */

#include <stdio.h>

int main( )
{
  int i;

  for(i = 0; i < 10; i++)
  {
     printf("i = %d\n", i + 1);
  }

  return 0;
}


/*    OUTPUT: for_2.c

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
