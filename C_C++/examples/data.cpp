/*     FILE: data.cpp     */

/* Placing non-decimal integers in your code. */
#include <iostream>
#include <cstdio>
using namespace std;

int main( )
{
  int x = 175;
  
  printf("%d = %X = %o\n", x, x, x);
  
  x = 0xAF;
  cout << "x =  " << x << endl;
  x = 0257;
  cout << "x =  " << x << endl;
  x = 175;
  cout << "x =  " << x << endl;
  
  return 0;
}


/*    OUTPUT: data.cpp

	175 = AF = 257
	x =  175
	x =  175
	x =  175

*/
