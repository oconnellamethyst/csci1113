/*     FILE: enum5.c     */

/* Enumerated types give symbolic constants with type
	 checking.                                          */

#include <stdio.h>
	
enum Direction{North=1, South, East, West};
char * directionString(enum Direction);
	
int main( )
{
	enum Direction dir;
	  
	dir = East;
	printf("Direction %d is %s\n", 
	                dir, directionString(dir));
	
	return 0;
}

char * directionString(enum Direction d)
{
  static char * dirs[ ] = { "North",
                           "South",
                           "East",
                           "West" };
	return dirs[d-1];
}


/*    OUTPUT: enum5.c

	Direction 3 is East

*/
