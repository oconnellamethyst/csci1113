#include <stdio.h>

#define LINE  "______________________________" 
#define TITLE "C Programming in easy steps"
#define AUTHOR "Mike McGrath"

#ifdef _WIN32
 #define SYSTEM "Windows"
#endif

#ifdef linux
 #define SYSTEM "Linux"
#endif


int main()
{
  printf( "\n \t %s \n \t %s \n" , LINE , TITLE ) ;
  printf( "\t by %s \n \t %s \n" , AUTHOR , LINE ) ;

  printf( "\n Operating System: %s \n" , SYSTEM ) ;

  return 0 ;
}
