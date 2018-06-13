/*     FILE: bitop.c     */

/* Exercises several C bit operators */

#include <stdio.h>

void setOneBit(int* ptr, int bit);
void setBit(int* ptr, int bit);
void clearBit(int* ptr, int bit);

int main( )
{
  int x;

  setOneBit(&x, 3);
  printf("x = %8.8X\n", x);

  clearBit(&x, 3);
  printf("x = %8.8X\n", x);

  x = 3;
  printf("\nx = %8.8X\n", x);
  setBit(&x, 3);
  printf("x = %8.8X\n", x);

  clearBit(&x, 3);
  printf("x = %8.8X\n", x);

  return 0;
}

void setOneBit(int* ptr, int bit)  /* sets the specified bit on,  */
{                                /* ... all others will be off. */
    *ptr = 1 << bit;
}

void setBit(int* ptr, int bit) /* sets specified bit on and    */
{                                /* ... leaves all others as-is. */
    *ptr = (*ptr)| (1 << bit);
}

void clearBit(int* ptr, int bit) /* turns specified bit off. */
{
    *ptr = (*ptr)&(~(1 << bit));
}


/*    OUTPUT: bitop.c

	x = 00000008
	x = 00000000
	
	x = 00000003
	x = 0000000B
	x = 00000003

*/
