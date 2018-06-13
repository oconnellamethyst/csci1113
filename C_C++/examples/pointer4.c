/*     FILE: pointer4.c     */

/* 3-D array name, what does it represent?
                                             */
/* Arrays are sets of storage locations.

   Multidimensional arrays are sets of sets 
   of storage locations.
   
   An array name is the address of the first
   thing (or set) in the array.              */
   
#include <stdio.h>

int main( )
{
  int depth, row, col;
  int x[2][3][4];

  for(depth = 0; depth < 2; depth++)  /* Load array with        */
    for(row = 0; row < 3; row++)      /* ...recognizable values */
      for(col = 0; col < 4; col++)
        x[depth][row][col] = depth*100 + row*10 + col;

/*  Display "sets" within the 3-D array with their addresses. */
  printf("\n\n                      Array is:  int x[2][3][4]\n");
  printf("                      -------------------------\n");
  for(depth = 0; depth < 2; depth++){
    printf("\n x + %d = %p\n",             /* Layer address */
                          depth, x + depth);  
    printf(" ================", depth, x + depth);
    for(row = 0; row < 3; row++)
    {                                            
      printf("\n x[%d] + %d = %p\n",        /* Row address */
                           depth, row, x[depth] + row);
      printf(" -------------------\n", depth, row, x[depth] + row);
      for(col = 0; col < 4; col++)                  
        printf(" x[%d][%d]+%d=%p",          /* Integer address */
                         depth, row, col, x[depth][row] + col);
      printf("\n");
      for(col = 0; col < 4; col++)
        printf(" x[%d][%d][%d] = %3.3d  ",     /* Value */
                       depth, row, col, x[depth][row][col]);
      
      printf("\n");
    }
    printf("\n\n");
  }

  return 0;
}



/*    OUTPUT: pointer4.c

	
	
	                      Array is:  int x[2][3][4]
	                      -------------------------
	
	 x + 0 = 0022FED0
	 ================
	 x[0] + 0 = 0022FED0
	 -------------------
	 x[0][0]+0=0022FED0 x[0][0]+1=0022FED4 x[0][0]+2=0022FED8 x[0][0]+3=0022FEDC
	 x[0][0][0] = 000   x[0][0][1] = 001   x[0][0][2] = 002   x[0][0][3] = 003  
	
	 x[0] + 1 = 0022FEE0
	 -------------------
	 x[0][1]+0=0022FEE0 x[0][1]+1=0022FEE4 x[0][1]+2=0022FEE8 x[0][1]+3=0022FEEC
	 x[0][1][0] = 010   x[0][1][1] = 011   x[0][1][2] = 012   x[0][1][3] = 013  
	
	 x[0] + 2 = 0022FEF0
	 -------------------
	 x[0][2]+0=0022FEF0 x[0][2]+1=0022FEF4 x[0][2]+2=0022FEF8 x[0][2]+3=0022FEFC
	 x[0][2][0] = 020   x[0][2][1] = 021   x[0][2][2] = 022   x[0][2][3] = 023  
	
	
	
	 x + 1 = 0022FF00
	 ================
	 x[1] + 0 = 0022FF00
	 -------------------
	 x[1][0]+0=0022FF00 x[1][0]+1=0022FF04 x[1][0]+2=0022FF08 x[1][0]+3=0022FF0C
	 x[1][0][0] = 100   x[1][0][1] = 101   x[1][0][2] = 102   x[1][0][3] = 103  
	
	 x[1] + 1 = 0022FF10
	 -------------------
	 x[1][1]+0=0022FF10 x[1][1]+1=0022FF14 x[1][1]+2=0022FF18 x[1][1]+3=0022FF1C
	 x[1][1][0] = 110   x[1][1][1] = 111   x[1][1][2] = 112   x[1][1][3] = 113  
	
	 x[1] + 2 = 0022FF20
	 -------------------
	 x[1][2]+0=0022FF20 x[1][2]+1=0022FF24 x[1][2]+2=0022FF28 x[1][2]+3=0022FF2C
	 x[1][2][0] = 120   x[1][2][1] = 121   x[1][2][2] = 122   x[1][2][3] = 123  
	
	

*/
