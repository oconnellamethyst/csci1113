/*     FILE: funcPt2.c     */

/* swap( ) function that works due to pointers */

#include <stdio.h>
void swap(int* x, int* y);

int main( )
{
  int x, y;

  x = 3;
  y = 5;

  printf("Before swap, x = %d, y = %d\n", x, y);
  swap(&x,&y);
  printf("After swap, x = %d, y = %d\n", x, y);

  return 0;
}

void swap(int* x, int* y)
{
  int temp;

  printf("In swap before: %d %d\n", *x, *y);

  temp = *x;
  *x = *y;
  *y = temp;

  printf("In swap after: %d %d\n", *x, *y);

  return;
}


/*    OUTPUT: funcPt2.c

	Before swap, x = 3, y = 5
	In swap before: 3 5
	In swap after: 5 3
	After swap, x = 5, y = 3

*/
