/*     FILE: dynamic7.c     */

/*
   Dynamically allocating a 2-D array.
   
   Notice the pointer definitions and the
   cast from malloc.
   
                                         */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define COLUMNS 10

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



/*    OUTPUT: dynamic7.c

	Please enter number of rows: 3
	            [ ][0] [ ][1] [ ][2] [ ][3] [ ][4] [ ][5] [ ][6] [ ][7] [ ][8] [ ][9]
	ar[0][ ] =     0      1      2      3      4      5      6      7      8      9 
	ar[1][ ] =    10     11     12     13     14     15     16     17     18     19 
	ar[2][ ] =    20     21     22     23     24     25     26     27     28     29 

	Please enter number of rows: 7
	            [ ][0] [ ][1] [ ][2] [ ][3] [ ][4] [ ][5] [ ][6] [ ][7] [ ][8] [ ][9]
	ar[0][ ] =     0      1      2      3      4      5      6      7      8      9 
	ar[1][ ] =    10     11     12     13     14     15     16     17     18     19 
	ar[2][ ] =    20     21     22     23     24     25     26     27     28     29 
	ar[3][ ] =    30     31     32     33     34     35     36     37     38     39 
	ar[4][ ] =    40     41     42     43     44     45     46     47     48     49 
	ar[5][ ] =    50     51     52     53     54     55     56     57     58     59 
	ar[6][ ] =    60     61     62     63     64     65     66     67     68     69 

*/
