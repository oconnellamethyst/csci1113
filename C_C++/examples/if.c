/*     FILE: if.c     */

/* if examples. */

#include <stdio.h>

int main( )
{
  int i;

  i = 5;
  if(i > 0)
    printf("%d > 0\n", i);

  i = -2;
  if(i > 0)
    printf("%d > 0\n", i);
  else
    printf("%d <= 0\n", i);

  i = -2;
  if(i > 0)
    printf("%d > 0\n", i);
  else
    if(i == 0)              /* Test for equality is == */
      printf("%d == 0\n", i);
    else
      printf("%d < 0\n", i);

  return 0;
}


/*    OUTPUT: if.c

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
