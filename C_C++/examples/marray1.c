/*     FILE: marray1.c     */

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
      printf("  %d", scores[row][col]);
    }
    printf("\n");                  /* Add a newline after each */
  }                                /* ... row in the table.    */

  return 0;
}


/*    OUTPUT: marray1.c

	  90  92  93
	  70  89  100
	  85  90  95
	  0  0  0
	  0  0  0
	  0  0  0
	  0  0  0
	  0  0  0
	  0  0  0
	  0  0  0

*/
