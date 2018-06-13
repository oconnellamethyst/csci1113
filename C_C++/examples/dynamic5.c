/*     FILE: dynamic5.c     */

/*
   Dynamically allocating a 2-D array.
   
   Notice the pointer definitions and the
   cast from malloc.
   
                                         */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void printArray(int ar[ ][2], int s);

int main(int argc, char *argv[ ])
{
  int (*ar)[2];
  int rows, r, c;
  
  /* Get number of rows for the n x 2 2-D array */
  printf("Please enter number of rows: ");
  scanf("%d", &rows);

  /* Validate number entered by user. */
  if (rows<=INT_MAX && rows>0){
    /* Allocate the appropriate number of bytes */
    ar = (int (*)[2])malloc(sizeof(int)*rows * 2);
    
    if (ar != NULL){
      for(r=0; r<rows; r++)
        for(c=0; c<2; c++)
          ar[r][c] = (2*r) + c;    /* Use the 2-D array */
          
      printArray(ar, rows);
      
      free(ar);
    }
    else
      printf("Malloc( ) request failed!\n");
  }
  else
    printf("Invalid allocation request: %d\n", rows);
 
  return 0;
}

void printArray(int ar[ ][2], int rows)
{
  int r, c;
  
  printf("           ");
  for(c=0; c<2; c++)
    printf(" [ ][%d]", c);
  printf("\n");

  for(r=0; r<rows; r++)
  {
    printf("ar[%d][ ] =", r);
    for(c=0; c<2; c++)
    {
      printf("   %3d ", ar[r][c]);
    }
    printf("\n");
  }
  
  return;
}



/*    OUTPUT: dynamic5.c

	Please enter number of rows: 3
	            [ ][0] [ ][1]
	ar[0][ ] =     0      1 
	ar[1][ ] =     2      3 
	ar[2][ ] =     4      5 

	Please enter number of rows: 7
	            [ ][0] [ ][1]
	ar[0][ ] =     0      1 
	ar[1][ ] =     2      3 
	ar[2][ ] =     4      5 
	ar[3][ ] =     6      7 
	ar[4][ ] =     8      9 
	ar[5][ ] =    10     11 
	ar[6][ ] =    12     13 

*/
