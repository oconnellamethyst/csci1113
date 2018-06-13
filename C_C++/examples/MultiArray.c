/*     FILE: MultiArray.c     */

/* Program with multiple strings containing the 
   names of the months.                         */

#include <stdlib.h>

int main( )
{
  char jan[8] = "January";
  char feb[9] = "February";
  char mar[6] = "March";
  char apr[6] = "April";
  char may[4] = "May";
  char jun[5] = "June";
  char jul[5] = "July";
  char aug[7] = "August";
  char sep[10] = "September";
  char oct[8] = "October";
  char nov[9] = "November";
  char dec[9] = "December";
  
  
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


/*    OUTPUT: MultiArray.c

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
