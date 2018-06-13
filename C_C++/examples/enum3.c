/*     FILE: enum3.c     */

/* Enumerated types give symbolic constants with type
	 checking.                                          */

#include <stdio.h>
	
enum Direction{North=1, South, East, West};
	
int main( )
{
	enum Direction dir;
	  
	dir = North;
	printf("Direction 'North': %d\n", dir);
	
	dir = South;
	printf("Direction 'South': %d\n", dir);
	
	dir = East;
	printf("Direction  'East': %d\n", dir);
	
	dir = West;
	printf("Direction  'West': %d\n", dir);
	
	return 0;
}
	


/*    OUTPUT: enum3.c

	Direction 'North': 1
	Direction 'South': 2
	Direction  'East': 3
	Direction  'West': 4

*/
