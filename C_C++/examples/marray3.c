/*     FILE: marray3.c     */

/* 
    Multidimensional arrays:

    A 2-D array representing a table of
    exam scores
    
*/

#include <stdio.h>

#define ROWS 10       /* Preprocessor directives to */
#define COLS 3        /* ...allow easy adjustment   */
                      /* ...table dimensions.       */
int main( )
{
  int row, col;       /* Variables for visiting/processing   */
                      /* ...every row & column in the table. */
  int j, sum;         /* Additional integer variables. */
  float avg;
  
  int scores[ROWS][COLS];
  
  for(row=0; row < ROWS; row++)  /* Zero out the table. */
    for(col=0; col < COLS; col++)
      scores[row][col] = 0;
      
  scores[0][0] = 90;  /* Place some sample values in the */
  scores[0][1] = 92;  /* ...for testing.                 */
  scores[0][2] = 93;
  
  scores[1][0] = 70;
  scores[1][1] = 89;
  scores[1][2] = 100;
  
  scores[2][0] = 85;
  scores[2][1] = 90;
  scores[2][2] = 95;
  
  for(row=0; row < ROWS; row++)    /* Nested loops to display */
  {                                /* ... the table.          */
    for(col=0; col < COLS; col++)
    {
      printf(" %5d", scores[row][col]);
    }
    
    for(sum=0, j=0; j<COLS; j++)    /* Compute and print average */
    {                               /* ...for each row.          */
      sum += scores[row][j]; 
    }
    avg = (float)sum/COLS;
    printf(" %.2f", avg);
    
    printf("\n");                  /* Add a newline after each */
  }                                /* ... row in the table.    */

  return 0;
}


/*    OUTPUT: marray3.c

	    90    92    93 91.67
	    70    89   100 86.33
	    85    90    95 90.00
	     0     0     0 0.00
	     0     0     0 0.00
	     0     0     0 0.00
	     0     0     0 0.00
	     0     0     0 0.00
	     0     0     0 0.00
	     0     0     0 0.00

*/
