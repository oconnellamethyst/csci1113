#include <stdio.h>


int main()
{
  int a , b ;

  printf( "Assigned: \n" ) ;
  printf( "\tVariable a = %d \n" , a = 8 ) ;
  printf( "\tVariable b = %d \n" , b = 4 ) ;

  printf( "Added & assigned: \n" ) ;
  printf( "\tVariable a+=b (8+=4) a= %d \n", a+=b ) ;  

  printf( "Subtracted & assigned: \n" ) ;
  printf( "\tVariable a-=b (12-=4) a= %d \n", a-=b ) ;

  printf( "Multiplied & assigned: \n" ) ;
  printf( "\tVariable a*=b (8*=4) a= %d \n", a*=b ) ;

  printf( "Divided & assigned: \n" ) ;
  printf( "\tVariable a/=b (32/=4) a= %d \n", a/=b ) ;

  printf( "Modulated & assigned: \n" ) ;
  printf( "\tVariable a%%=b (8%%=4) a= %d \n", a%=b ) ;

  return 0 ;
}
