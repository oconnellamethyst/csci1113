/*     FILE: dynamic8.c     */

/*
   Dynamically allocating a 3-D array.
   
   Notice the pointer definitions and the
   cast from malloc.
   
                                         */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define COLUMNS 4
#define ROWS 3


void printArray(int ar[ ][ROWS][COLUMNS], int layers);

int main(int argc, char *argv[ ])
{
  int (*ar)[ROWS][COLUMNS];
  int layers, r, c, l;
  
  /* Get number of rows for the n x ROWS x COLUMNS 3-D array */
  printf("Please enter number of %d x %d layers: ", ROWS, COLUMNS);
  scanf("%d", &layers);

  /* Validate number entered by user. */
  if (layers<=INT_MAX && layers>0){
    /* Allocate the appropriate number of bytes */
    ar = (int (*)[ROWS][COLUMNS])malloc(sizeof(int)*layers * ROWS * COLUMNS);
    
    if (ar != NULL){
      for(l=0; l<layers; l++)
        for(r=0; r<ROWS; r++)
          for(c=0; c<COLUMNS; c++)
            ar[l][r][c] = r + c + l*10;    /* Use the 3-D array */
          
      printArray(ar, layers);
      
      free(ar);
    }
    else
      printf("Malloc( ) request failed!\n");
  }
  else
    printf("Invalid allocation request: %d\n", layers);
 
  return 0;
}

void printArray(int ar[ ][ROWS][COLUMNS], int layers)
{
  int r, c, l;
  
  for(l=0; l<layers; l++)
  {
    printf("\n");
    printf("              ");
    for(c=0; c<COLUMNS; c++)
      printf(" [%d][ ][%d]", l, c);
    printf("\n");

    for(r=0; r<ROWS; r++)
    {
      printf("ar[%d][%d][ ] =", l, r);
      for(c=0; c<COLUMNS; c++)
      {
        printf("      %3.2d ", ar[l][r][c]);
      }
      printf("\n");
    }
  }
  
  return;
}



/*    OUTPUT: dynamic8.c

	Please enter number of 3 x 4 layers: 3
	
	               [0][ ][0] [0][ ][1] [0][ ][2] [0][ ][3]
	ar[0][0][ ] =       00        01        02        03 
	ar[0][1][ ] =       01        02        03        04 
	ar[0][2][ ] =       02        03        04        05 
	
	               [1][ ][0] [1][ ][1] [1][ ][2] [1][ ][3]
	ar[1][0][ ] =       10        11        12        13 
	ar[1][1][ ] =       11        12        13        14 
	ar[1][2][ ] =       12        13        14        15 
	
	               [2][ ][0] [2][ ][1] [2][ ][2] [2][ ][3]
	ar[2][0][ ] =       20        21        22        23 
	ar[2][1][ ] =       21        22        23        24 
	ar[2][2][ ] =       22        23        24        25 

	Please enter number of 3 x 4 layers: 7
	
	               [0][ ][0] [0][ ][1] [0][ ][2] [0][ ][3]
	ar[0][0][ ] =       00        01        02        03 
	ar[0][1][ ] =       01        02        03        04 
	ar[0][2][ ] =       02        03        04        05 
	
	               [1][ ][0] [1][ ][1] [1][ ][2] [1][ ][3]
	ar[1][0][ ] =       10        11        12        13 
	ar[1][1][ ] =       11        12        13        14 
	ar[1][2][ ] =       12        13        14        15 
	
	               [2][ ][0] [2][ ][1] [2][ ][2] [2][ ][3]
	ar[2][0][ ] =       20        21        22        23 
	ar[2][1][ ] =       21        22        23        24 
	ar[2][2][ ] =       22        23        24        25 
	
	               [3][ ][0] [3][ ][1] [3][ ][2] [3][ ][3]
	ar[3][0][ ] =       30        31        32        33 
	ar[3][1][ ] =       31        32        33        34 
	ar[3][2][ ] =       32        33        34        35 
	
	               [4][ ][0] [4][ ][1] [4][ ][2] [4][ ][3]
	ar[4][0][ ] =       40        41        42        43 
	ar[4][1][ ] =       41        42        43        44 
	ar[4][2][ ] =       42        43        44        45 
	
	               [5][ ][0] [5][ ][1] [5][ ][2] [5][ ][3]
	ar[5][0][ ] =       50        51        52        53 
	ar[5][1][ ] =       51        52        53        54 
	ar[5][2][ ] =       52        53        54        55 
	
	               [6][ ][0] [6][ ][1] [6][ ][2] [6][ ][3]
	ar[6][0][ ] =       60        61        62        63 
	ar[6][1][ ] =       61        62        63        64 
	ar[6][2][ ] =       62        63        64        65 

*/
