/*     FILE: enum2.c     */

/* Enumerated types give symbolic constants with type
	 checking.                                          */

#include <stdio.h>
	
enum GPA{F,D,C,B,A};
	
int main( )
{
	enum GPA grade;
	  
	grade = A;
	printf("Score for an 'A': %d\n", grade);
	
	grade = Q;
	printf("Score for an 'Q': %d\n", grade);
	
	return 0;
}
	


/*    OUTPUT: enum2.c

	enum2.c: In function `main':
	enum2.c:15: `Q' undeclared (first use in this function)
	enum2.c:15: (Each undeclared identifier is reported only once
	enum2.c:15: for each function it appears in.)

*/
