#include <stdio.h>

int main()
{
  int i, arr[3] = { 10, 20, 30 } ;

  i = 0 ;						/* Initializer. */
  while( i < 3 )					/* Test-expression. */
  {
    printf( "While: arr[%d] = %d\n" , i, arr[i] ) ;
    i++ ;						/* Incrementer. */
  }



  i = 0 ;						/* Initializer. */
  do
  {
    printf( "\nDo while: arr[%d] = %d" , i, arr[i] ) ;
    i++ ;						/* Incrementer. */
  }
  while( i < 3 );					/* Test-expression.. */



  /* Equivalent for loop using identical initializer. test-expression, and incrementer:

  for( i = 0; i < 3; i++ )
  {
    printf( "For: arr[%d] = %d\n" , i, arr[i] ) ;
  }
 
  */


  return 0;
}
