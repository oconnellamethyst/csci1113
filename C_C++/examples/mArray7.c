/*     FILE: mArray7.c     */

/* 
   3-D array: A 3-D "set" of storage locations.
   
   int [2][3][4] - is two sets, of three sets, 
   of four integers.
                                                */
   
#include <stdio.h>

int main( )
{
  int depth, row, col;
  int x[2][3][4];

  for(depth = 0; depth < 2; depth++)
    for(row = 0; row < 3; row++)
      for(col = 0; col < 4; col++)
        x[depth][row][col] = depth*100 + row*10 + col;

  printf("\n\n                      Array is:  int x[2][3][4]\n");
  printf("                      -------------------------\n");
  
  for(depth = 0; depth < 2; depth++){
    printf("\n Layer %d:\n", depth);
    printf(" ========\n");
    
    for(row = 0; row < 3; row++)
    {
      for(col = 0; col < 4; col++)
        printf(" x[%d][%d][%d] = %3.3d  ", 
                       depth, row, col, x[depth][row][col]);
      
      printf("\n");
    }
  }

  return 0;
}



/*    OUTPUT: mArray7.c

	
	
	                      Array is:  int x[2][3][4]
	                      -------------------------
	
	 Layer 0:
	 ========
	 x[0][0][0] = 000   x[0][0][1] = 001   x[0][0][2] = 002   x[0][0][3] = 003  
	 x[0][1][0] = 010   x[0][1][1] = 011   x[0][1][2] = 012   x[0][1][3] = 013  
	 x[0][2][0] = 020   x[0][2][1] = 021   x[0][2][2] = 022   x[0][2][3] = 023  
	
	 Layer 1:
	 ========
	 x[1][0][0] = 100   x[1][0][1] = 101   x[1][0][2] = 102   x[1][0][3] = 103  
	 x[1][1][0] = 110   x[1][1][1] = 111   x[1][1][2] = 112   x[1][1][3] = 113  
	 x[1][2][0] = 120   x[1][2][1] = 121   x[1][2][2] = 122   x[1][2][3] = 123  

*/
