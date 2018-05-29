#include <stdio.h>


static int sum = 100 ;		/* Global variable accessible from THIS file. */


int main()
{
  extern int sum ;		/* Allow access to a global variable. */
  printf( "Sum is %d \n" , sum ) ;

  extern int num ;		/* Allow access to a global variable. */
  printf( "Num is %d \n" , num  ) ;

  return 0 ;
}



