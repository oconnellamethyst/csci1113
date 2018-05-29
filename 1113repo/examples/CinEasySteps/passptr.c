#include <stdio.h>

void twice( int *ptr ) ;			/* Declare function prototypes. */
void thrice( int *ptr ) ;


int main()
{
  int num = 5 ;
  int *ptr = &num ;			/* Initialize pointer with the address of num. */

  printf( "ptr stores address: %p\n" , ptr ) ;		/* Output address stored by pointer. */
  printf( "*ptr dereferences value: %d\n\n" , *ptr ) ;	/* Output pointer's dereferenced value. */

  printf( "The num value is %d\n" , num ) ;

  twice( ptr ) ;				/* Pass address to function. */
  printf( "The num value is now %d\n", num ) ;

  thrice( ptr ) ;				/* Pass address to function. */
  printf( "And now the num value is %d\n", num ) ;

  return 0 ;
}


/* Function definitions. */
void twice( int *number )	/* Argument is an int pointer. */
{
  *number = (*number * 2) ;	/* Operate on dereferenced value at passed address. */
}

void thrice( int *number )	/* Argument is an int pointer. */
{
  *number = ( *number * 3 ) ;	/* Operate on dereferenced value at passed address. */
}
