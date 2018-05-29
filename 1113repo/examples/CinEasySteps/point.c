#include <stdio.h>

int main()
{
  int num ;		/* Declare a regular variable. */
  int *ptr ;		/* Declare a pointer variable. */

  num = 8 ;		/* Assign integer to the regular variable. */
  ptr = &num ;		/* Assign address of regular variable to the pointer variable. */

  printf( "Regular variable contains: %d\n" , num ) ;  		/* Output contents. */
  printf( "Pointer variable contains: 0x%p\n" , ptr  ) ;	/* Output contents. */
  printf( "Pointer points to value: %d\n\n" , *ptr ) ; 		/* Output value pointed to. */

  *ptr = 12 ;							/* Assign a new value via pointer. */ 

  printf( "Regular variable contains: %d\n" , num ) ;		/* Output contents. */
  printf( "Pointer variable contains: 0x%p\n" , ptr  ) ;	/* Output contents. */
  printf( "Pointer points to value: %d\n\n" , *ptr ) ; 		/* Output value pointed to. */

  return 0;
}



