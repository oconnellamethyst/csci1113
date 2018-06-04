/*     FILE: pointer.c     */

/* A pointer variable. */
#include <stdio.h>

int main( )
{
  int* ptr;
  int i;

  i = 7;

  ptr = &i;     /* ptr now knows where i is. */

  printf("i = %d and is at address %p\n", i, &i);

  printf("i = %d and is at address %p\n", *ptr, ptr);

  return 0;
}


/*    OUTPUT: pointer.c

	i = 7 and is at address 0022FF68
	i = 7 and is at address 0022FF68

*/
