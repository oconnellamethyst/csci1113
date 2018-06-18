/*     FILE: ref2.cpp     */

/* Swap function using reference parameters */

#include <iostream>
using namespace std;

void swap(int &i1, int &i2);

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

void swap(int &i1, int &i2)
{
  int tmp;

  tmp = i1;
  i1 = i2;
  i2 = tmp;
}



/*    OUTPUT: ref2.cpp

	Before:
	x = 5
	y = 7
	After:
	x = 7
	y = 5

*/
