/*     FILE: functemp.cpp     */

/* Swap function template. */

#include <iostream>
using namespace std;

template <class t>
void swap(t &i1, t &i2)
{
  t tmp;

  tmp = i1;
  i1 = i2;
  i2 = tmp;
}

int main( )
{
  int x,y;

  x = 5;
  y = 7;

  cout << "Before:" << endl;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;

  swap(x,y);

  cout << "After:" << endl;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;

  return 0;
}


/*    OUTPUT: functemp.cpp

	Before:
	x = 5
	y = 7
	After:
	x = 7
	y = 5

*/
