#include <stdio.h>

int main()
{
  /* Set flag #4 to On using Binary 1000 (1x8 0x4 0x2 0x1) =8.  */
 char flags = 8;

  /* Also set flag #2 to On with OR | using Binary 0010 (0x8 0x4 1x2 0x0) =2. */
  flags = flags | 2; 	
			
  /* So now flags value is	1000
				0010
				____
				1010 (1x8 0x4 1x2 0x1) =10. 
  */
  
  /* Check flags settings with AND & */
  printf( "Flag 1: %s\n" , ((flags & 1) > 0) ? "ON" : "OFF") ;
  printf( "Flag 2: %s\n" , ((flags & 2) > 0) ? "ON" : "OFF") ;
  printf( "Flag 3: %s\n" , ((flags & 4) > 0) ? "ON" : "OFF") ;
  printf( "Flag 4: %s\n\n" , ((flags & 8) > 0) ? "ON" : "OFF") ;

  /* Flip bits with NOT ~ 
     Masked for last nibble (4-bits) using 1111 ( 1x8 1x4 1x2 1x1 ) =15. 
  */

  char mask = 15;		/* Mask is 00001111 =15. */
  flags = ~flags & mask ;	/* So now flags value is 0101 (0x8 1x4 0x2 1x1) =5. */

  /* Check flags settings with AND & */
  printf( "Flag 1: %s\n" , ((flags & 1) > 0) ? "ON" : "OFF") ;
  printf( "Flag 2: %s\n" , ((flags & 2) > 0) ? "ON" : "OFF") ;
  printf( "Flag 3: %s\n" , ((flags & 4) > 0) ? "ON" : "OFF") ;
  printf( "Flag 4: %s\n\n" , ((flags & 8) > 0) ? "ON" : "OFF") ;
  printf( "Flags decimal value is %d\n" , flags) ;

  flags = flags << 1; 	/* So now flags value is 1010 again (1x8 0x4 1x2 0x1) =10. */
  printf( "Flags decimal value is now %d\n" , flags ) ;

  return 0;
}

