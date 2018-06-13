/*     FILE: MultiArray4.c     */

/* Program with multiple strings containing the 
   names of the months.                         
   
   Since a multi-dimensional array is an "array
   of arrays", we can use here for our sets of 
   sets of characters.                         */

#include <stdlib.h>

int main( )
{
  char months[12][10] = {"January",  /* Using an initilaization list. */
                         "February",
                         "March", 
                         "April", 
                         "May",
                         "June",
                         "July",
                         "August",
                         "September",
                         "October",
                         "November",
                         "December"};
  int i;
  
  printf("The months of the year: \n");
  
  for (i=0; i<12; i++)
    printf("%s \n", months[i]);

  return 0;
}


/*    OUTPUT: MultiArray4.c

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
