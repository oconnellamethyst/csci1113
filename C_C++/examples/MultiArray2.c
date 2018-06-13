/*     FILE: MultiArray2.c     */

/* Program with multiple strings containing the 
   names of the months.                         
   
   Simplified initialization.                   */

#include <stdlib.h>

int main( )
{
  char jan[ ] = "January";   /* Compiler computes necessary */
  char feb[ ] = "February";  /* ... size from initializers. */
  char mar[ ] = "March";
  char apr[ ] = "April";
  char may[ ] = "May";
  char jun[ ] = "June";
  char jul[ ] = "July";
  char aug[ ] = "August";
  char sep[ ] = "September";
  char oct[ ] = "October";
  char nov[ ] = "November";
  char dec[ ] = "December";
  
  
  printf("The months of the year: \n");
  
  printf("%s \n", jan);
  printf("%s \n", feb);
  printf("%s \n", mar);
  printf("%s \n", apr);
  printf("%s \n", may);
  printf("%s \n", jun);
  printf("%s \n", jul);
  printf("%s \n", aug);
  printf("%s \n", sep);
  printf("%s \n", oct);
  printf("%s \n", nov);
  printf("%s \n", dec);

  return 0;
}


/*    OUTPUT: MultiArray2.c

	The months of the year: 
	January 
	February 
	March 
	April 
	May 
	June 
	July 
	August 
	September 
	October 
	November 
	December 

*/
