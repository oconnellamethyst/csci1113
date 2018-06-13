/*     FILE: dynamic6.c     */

/*
   Dynamically allocating a 2-D array.
   
   Notice the pointer definitions and the
   cast from malloc.
   
                                         */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define COLUMNS 4

void printArray(int ar[ ][COLUMNS], int s);

int main(int argc, char *argv[ ])
{
  int (*ar)[COLUMNS];
  int rows, r, c;
  
  /* Get number of rows for the n x COLUMNS 2-D array */
  printf("Please enter number of rows: ");
  scanf("%d", &rows);

  /* Validate number entered by user. */
  if (rows<=INT_MAX && rows>0){
    /* Allocate the appropriate number of bytes */
    ar = (int (*)[COLUMNS])malloc(sizeof(int)*rows * COLUMNS);
    
    if (ar != NULL){
      for(r=0; r<rows; r++)
        for(c=0; c<COLUMNS; c++)
          ar[r][c] = (COLUMNS*r) + c;    /* Use the 2-D array */
          
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

void printArray(int ar[ ][COLUMNS], int rows)
{
  int r, c;
  
  printf("           ");
  for(c=0; c<COLUMNS; c++)
    printf(" [ ][%d]", c);
  printf("\n");

  for(r=0; r<rows; r++)
  {
    printf("ar[%d][ ] =", r);
    for(c=0; c<COLUMNS; c++)
    {
      printf("   %3d ", ar[r][c]);
    }
    printf("\n");
  }
  
  return;
}



/*    OUTPUT: dynamic6.c

	Please enter number of rows: 3
	            [ ][0] [ ][1] [ ][2] [ ][3]
	ar[0][ ] =     0      1      2      3 
	ar[1][ ] =     4      5      6      7 
	ar[2][ ] =     8      9     10     11 

	Please enter number of rows: 7
	            [ ][0] [ ][1] [ ][2] [ ][3]
	ar[0][ ] =     0      1      2      3 
	ar[1][ ] =     4      5      6      7 
	ar[2][ ] =     8      9     10     11 
	ar[3][ ] =    12     13     14     15 
	ar[4][ ] =    16     17     18     19 
	ar[5][ ] =    20     21     22     23 
	ar[6][ ] =    24     25     26     27 

*/
