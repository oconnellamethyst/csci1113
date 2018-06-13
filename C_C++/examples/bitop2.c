/*     FILE: bitop2.c     */

/* Exercises several C bit operators 

   Don't waste the return value.      */

#include <stdio.h>

int setOneBit(int* ptr, int bit);
int setBit(int* ptr, int bit);
int clearBit(int* ptr, int bit);

int main( )
{
  int x;

  printf("x = %8.8X\n", setOneBit(&x, 3));

  printf("x = %8.8X\n", clearBit(&x, 3));

  printf("\nx = %8.8X\n", x = 3);
  
  printf("x = %8.8X\n", setBit(&x, 3));

  printf("x = %8.8X\n", clearBit(&x, 3));

  return 0;
}

int setOneBit(int* ptr, int bit)   /* sets the specified bit on,  */
{                                /* ... all others will be off. */
    *ptr = 1 << bit;
    
    return *ptr;
}

int setBit(int* ptr, int bit)  /* sets specified bit on and    */
{                                /* ... leaves all others as-is. */
    *ptr = (*ptr)| (1 << bit);
    
    return *ptr;
}

int clearBit(int* ptr, int bit) /* turns specified bit off. */
{
    *ptr = (*ptr)&(~(1 << bit));
    
    return *ptr;
}


/*    OUTPUT: bitop2.c

	x = 00000008
	x = 00000000
	
	x = 00000003
	x = 0000000B
	x = 00000003

*/
