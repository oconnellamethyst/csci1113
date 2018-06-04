#include <stdio.h>

int bounce(int a);				/* Prototype of regular function. */

int caller( int (*function)(int), int b );	/* Prototype of function with function pointer argument. */

int main(void)
{

    int  num ;
    int (*fptr)(int) = bounce ;	/* Declare function pointer to regular function. */
    

    /* printf("Address of Function Pointer: 0x%p\n", fptr ); */

    num = (*fptr)(10);		/* Call regular function via function pointer and pass integer. */

    /* num = fptr(10); is also valid as fptr evaluates to that function regardless of whether it is a pointer. */

    printf( "Returned Value: %d\n" , num ) ;

    num = caller( fptr, 5 ) ;	/* Pass function pointer and integer. */
    printf( "Returned Value: %d\n", num ) ;

    return 0 ;
}


int bounce( int a )
{
    printf( "\nReceived Value: %d\n", a ) ;
    return ( ( 3 * a ) + 3 ) ;
}

int caller( int (*function)(int), int b )
{
    (*function)(b);	/* Call regular function via function pointer and pass integer. */
}


