#include <stdio.h>

int main()
{
  /* Swap variable values without a 3rd variable using XOR ^ */
  int x = 10, y = 5;
  printf( "\nx=%d y=%d\n" , x, y ) ;

  x = x ^ y;	/*	1010
			0101
			____
			1111 =15.	*/

  y = x ^ y;	/*	1111
			0101
			____
			1010 =10.	*/
			

  x = x ^ y;
		/*	1111
			1010
			____
			0101 =5.	*/
  printf( "\nx=%d y=%d\n" , x, y ) ;

  return 0;
}
