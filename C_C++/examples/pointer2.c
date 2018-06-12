/*     FILE: pointer2.c     */

/* Array names are addresses. */
#include <stdio.h>

int main( )
{
  int* ptr;
  int i;
  int ar[5];

  for (i=0; i<5; i++)
    ar[i] = i+1;

  ptr = ar;     /* ptr now knows where ar is. */

  printf("ar[0] = %d and is at address %p\n", ar[0], ar);

  printf("*ptr = %d and is at address %p\n\n", *ptr, ptr);

  for (i=0; i<5; i++)
    printf("ar[%d] = %d and is at address %p\n", i, ar[i], ar+i);

  printf("\n");
  for (i=0; i<5; i++)
    printf("*(ptr+i) = %d and is at address %p\n", *(ptr+i), ptr+i);

  return 0;
}


/*    OUTPUT: pointer2.c

	ar[0] = 1 and is at address 0022FF38
	*ptr = 1 and is at address 0022FF38
	
	ar[0] = 1 and is at address 0022FF38
	ar[1] = 2 and is at address 0022FF3C
	ar[2] = 3 and is at address 0022FF40
	ar[3] = 4 and is at address 0022FF44
	ar[4] = 5 and is at address 0022FF48
	
	*(ptr+i) = 1 and is at address 0022FF38
	*(ptr+i) = 2 and is at address 0022FF3C
	*(ptr+i) = 3 and is at address 0022FF40
	*(ptr+i) = 4 and is at address 0022FF44
	*(ptr+i) = 5 and is at address 0022FF48

*/
