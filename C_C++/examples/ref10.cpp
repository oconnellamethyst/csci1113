/*     FILE: ref10.cpp     */

/* A reference return value can be assigned into. */

// A fancier function.

#include <iostream>
using namespace std;

int & ref1(int & i1, int & i2);

int main( )
{
  int x,y;

  x = 5;
  y = 1;

  cout << "Before: x = " << x << " y = " << y << endl;

  ref1(x,y) = 7;

  cout << "After: x = " << x << " y = " << y << endl;

  return 0;
}

int & ref1(int & i1, int & i2)
{
  if(i1 <= i2)
    return i1;
  else
    return i2;
}


/*    OUTPUT: ref10.cpp

	Before: x = 5 y = 1
	After: x = 5 y = 7

*/
