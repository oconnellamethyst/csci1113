#include <windows.h>	/* change 1 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow )		/* change 2 */
{
  int i , r , temp , nums[50] ;
  char buf[4] , str[100] = { "Your Six Lucky Numbers Are:  " } ;

  srand( time(NULL) ) ;

  for( i=0; i<50; i++ ) { nums[i] = i ; }

  for( i=1; i<50; i++ )
  {
    r= ( rand() % 49 ) + 1 ;
    temp = nums[i]; nums[i]=nums[r]; nums[r] = temp ;
  }

  for( i=1; i<7; i++ )
  {
    sprintf( buf, "%d ", nums[i]);
    strcat( buf , " " ) ;
    strcat( str , buf ) ;  
  }

  /* printf("\n%s\n\n" , str ) ;   change 3 */

  MessageBox( NULL , str , "Lotto Number Picker" , MB_OK | MB_ICONEXCLAMATION ) ;

  return 0 ;
}
