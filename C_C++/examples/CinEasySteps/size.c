#include <stdio.h>

int main()
{
  int num = 1234567890 ;

  printf( "Size of int data type is %d bytes\n" , sizeof (int) ) ; /* Parentheses are required. */
  printf( "Size of int variable is %d bytes\n" , sizeof (num) ) ; /* Parentheses can be omitted. */

  printf( "Size of an int array is %d bytes\n" , sizeof (int[3]) ) ; /* Parentheses can be omitted. */

  struct { int score; char grade ; } result ;
  printf("Size of a structure is %d bytes\n" , sizeof (result) ) ; /* Parentheses can be omitted. */
  
  /*  Uncomment this block to see size of each variable separately.
   *  printf( "Size of structure char is %d bytes\n" , sizeof (result.grade) ) ;
   *  printf( "Size of structure int is %d bytes\n" , sizeof (result.score) ) ;
   */

  return 0;
}
