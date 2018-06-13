/*     FILE: MultiArray3.c     */

/* Program with multiple strings containing the 
   names of the months.                         
   
   Since a multi-dimensional array is an "array
   of arrays", we can use here for our sets of 
   sets of characters.                         */

#include <stdlib.h>
#include <string.h>

int main( )
{
  char months[12][10];
  int i;
  
  strcpy(months[0], "January");
  strcpy(months[1], "February");
  strcpy(months[2], "March");
  strcpy(months[3], "April");
  strcpy(months[4], "May");
  strcpy(months[5], "June");
  strcpy(months[6], "July");
  strcpy(months[7], "August");
  strcpy(months[8], "September");
  strcpy(months[9], "October");
  strcpy(months[10], "November");
  strcpy(months[11], "December");
  
  
  printf("The months of the year: \n");
  
  for (i=0; i<12; i++)
    printf("%s \n", months[i]);

  return 0;
}


/*    OUTPUT: MultiArray3.c

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
