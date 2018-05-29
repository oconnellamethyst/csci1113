#include <stdio.h>
#include <time.h>
     
int main()
{
  char buffer[100] ;
  time_t elapsed ;
  struct tm *now ;
     
  /* Get the current time. */
  elapsed = time(NULL) ;
     
  /* Convert it to local time representation. */
  now = localtime( &elapsed ) ;
     
  /* Print out the date and time in the standard format. */
  printf( "%s\n" , asctime( now ) ) ;
     
  /* Print it out in a nice format. */
  strftime (buffer , 100 , "Today is %A, %B %d.\n" , now ) ;
  printf( "%s", buffer ) ;
       
  strftime ( buffer , 100 , "The time is %I:%M %p.\n" , now ) ;
  printf( "%s" , buffer ) ;
     
  return 0 ;
}


