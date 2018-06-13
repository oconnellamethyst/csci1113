/*     FILE: pointer3.c     */

/* Arrays are sets of storage locations.

   Multidimensional arrays are sets of sets 
   of storage locations.
   
   An array name is the address of the first
   thing (or set) in the array.               */
   
#include <stdio.h>
void displayArray(int ar[ ][3], int length);

int main( )
{
  int *ptr;          /* pointer to a integer  */
  int  (*ptr2)[3];   /* pointer to a set of 3
                        ... integers.         */
  int i, j;
  int x[5][3];       /* 5x3 array - or a set 
                        ... of 5, 3 integer   */
  ptr = x[0];        /* ... arrays.           */
  ptr2 = x;
  
  for (i=0; i<5; i++)   /* Load array with         */
    for (j=0; j<3; j++) /* ...recognizable values. */
      x[i][j] = i*10 + j;


  for (i=0; i<5; i++)   /* Display address of each row. */
      printf("x + %d is at address %p\n",
              i, x + i);
  for (i=0; i<5; i++)   /* Display address of 1st integer in */
      printf("x[%d] is  at address %p\n",  /* ... each row.  */
              i, x[i]);

  printf("\n");
  for (i=0; i<3; i++)   /* Compute address of next item in    */
      printf("x + %d is  at address %p\n",  /* ... the array. */
              i, x + i);

  for (i=0; i<3; i++)   /* Compute address of next item in the */
      printf("x[%d]+%d is at address %p\n", /* ... particular  */
              0, i, x[0] + i);              /* ... set.        */

  printf("\n");

  displayArray(x, 5);  /* Display array contents. */
  return 0;
}

void displayArray(int ar[ ][3], int length)
{
  int i,j;
  for (i=0; i<length; i++){
      
    for (j=0; j<3; j++)
      printf("ar[%d][%d] = %2.2d ", i, j, ar[i][j]);
      
    printf("\n");
  }
}


/*    OUTPUT: pointer3.c

	x + 0 is at address 0022FEF0
	x + 1 is at address 0022FEFC
	x + 2 is at address 0022FF08
	x + 3 is at address 0022FF14
	x + 4 is at address 0022FF20
	x[0] is  at address 0022FEF0
	x[1] is  at address 0022FEFC
	x[2] is  at address 0022FF08
	x[3] is  at address 0022FF14
	x[4] is  at address 0022FF20
	
	x + 0 is  at address 0022FEF0
	x + 1 is  at address 0022FEFC
	x + 2 is  at address 0022FF08
	x[0]+0 is at address 0022FEF0
	x[0]+1 is at address 0022FEF4
	x[0]+2 is at address 0022FEF8
	
	ar[0][0] = 00 ar[0][1] = 01 ar[0][2] = 02 
	ar[1][0] = 10 ar[1][1] = 11 ar[1][2] = 12 
	ar[2][0] = 20 ar[2][1] = 21 ar[2][2] = 22 
	ar[3][0] = 30 ar[3][1] = 31 ar[3][2] = 32 
	ar[4][0] = 40 ar[4][1] = 41 ar[4][2] = 42 

*/
