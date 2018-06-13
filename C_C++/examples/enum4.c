/*     FILE: enum4.c     */

/* Enumerated types give symbolic constants with type
	 checking.                                          */

#include <stdio.h>
	
enum Direction{North=1, South, East, West};

int main( )
{
	enum Direction dir;
	  
	dir = South;
	
	switch(dir)
	{
	  case North:
  	  printf("Direction %d is %s\n", dir, "North");
  	  break;
  	  
	  case South:
  	  printf("Direction %d is %s\n", dir, "South");
  	  break;
  	  
	  case East:
  	  printf("Direction %d is %s\n", dir, "East");
  	  break;
  	  
	  case West:
  	  printf("Direction %d is %s\n", dir, "West");
  	  break; 	  
  }
	
	return 0;
}


/*    OUTPUT: enum4.c

	Direction 2 is South

*/
