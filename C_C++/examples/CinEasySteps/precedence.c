#include <stdio.h>

int main()
{
  /* Row level precedence. */
  printf( "\nDefault precedence  ((2*3) +4) -5 : %d\n" , 2*3+4-5 ) ;
  printf( "Explicit precedence 2* ((3+4) -5 ): %d\n" , 2*((3+4)-5) ) ;

  /* Left to right associativity. */
  printf( "\nDefault precedence (7*3) %% 2: %d\n" , 7*3%2 ) ;
  printf( "Explicit precedence 7* (3%%2) : %d\n" , 7*(3%2) ) ;

  /* Right to left associativity. */
  int num = 9;
  printf( "\nDefault precedence (8/2)*4:%d\n" , --num/2*sizeof(int) ) ; 
  num = 9;
  printf( "Explicit precedence 8/(2*4):%d\n" , --num/(2*sizeof(int) ) ) ; 

  return 0;
}
