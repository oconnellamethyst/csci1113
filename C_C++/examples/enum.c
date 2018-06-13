/*     FILE: enum.c     */

/* Enumerated types give symbolic constants with type
	 checking.                                          */

#include <stdio.h>
	
enum GPA{F,D,C,B,A};
	
int main( )
{
	enum GPA grade;
	  
	grade = A;
	printf("Score for an 'A': %d\n", grade);
	
	grade = B;
	printf("Score for an 'B': %d\n", grade);
	
	grade = C;
	printf("Score for an 'C': %d\n", grade);
	
	grade = D;
	printf("Score for an 'D': %d\n", grade);
	
	grade = F;
	printf("Score for an 'F': %d\n", grade);
	
	return 0;
}
	


/*    OUTPUT: enum.c

	Score for an 'A': 4
	Score for an 'B': 3
	Score for an 'C': 2
	Score for an 'D': 1
	Score for an 'F': 0

*/
