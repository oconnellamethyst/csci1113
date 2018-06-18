/*     FILE: cast.cpp     */

/* New style of casting. */
#include <iostream>
using namespace std;

int main( )
{
  int x,y;

  float fz;

  x = 1;
  y = 2;

  fz = x/y;

  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  cout << "fz = " << fz << endl;

  fz = float(x)/y;      // New cast style matches function call
  cout << "\nfz = " << fz << endl;
  
  return 0;
}




/*    OUTPUT: cast.cpp

	x = 1
	y = 2
	fz = 0
	
	fz = 0.5

*/
