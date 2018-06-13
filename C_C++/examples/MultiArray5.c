/*     FILE: MultiArray5.c     */

/* Program with multiple strings containing the 
   names of the months.                         
   
   Since month lengths vary, each array of chars can
   be of a different length. However, each array of
   characters can be tracked by the address of the first 
   character in the array. An array of pointers can be
   used to track each of those addresses.                        */

#include <stdlib.h>

int main( )
{
  char* months[12] = {"January",  /* Using an initilaization list.   */
                      "February", /* Compiler is doing a lot here.   */
                      "March",    /* Each "string" is a char address */
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


/*    OUTPUT: MultiArray5.c

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
