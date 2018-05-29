#include <stdio.h>

int main()
{
  int i;
  int nums[10] = { 1,2,3,4,5,6,7,8,9,10 } ;

  int *ptr = nums ; 	/* Assign address of first array element. */
  printf( "\nAt Address: %p is Value: %d\n", ptr , *ptr ) ;

  ptr++ ;		/* Jump along to next element. */
  printf( "At Address: %p is Value: %d\n", ptr , *ptr ) ;
  ptr++ ;		/* Jump along to next element. */
  printf( "At Address: %p is Value: %d\n", ptr , *ptr ) ;

  ptr -= 2 ;		/* Jump back to the first element. */
  printf( "At Address: %p is Value: %d\n\n", ptr , *ptr ) ;

  /* Loop through all elements. */
  for( i = 0 ; i < 10 ; i++ )
  {
    printf( "Element %d Contains Value: %d\n" , i , *ptr ) ;
    ptr++ ;
  }

  return 0 ;
}


