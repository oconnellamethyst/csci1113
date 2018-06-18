/*     FILE: functmp2.cpp     */

/* Swap function template, several types. */

#include <iostream>
using namespace std;

template <class t>
void swap(t &, t &);

int main( )
{
  int x,y;
  double fx,fy;

  x = 5;
  y = 7;
  fx = 5.5;
  fy = 7.7;

  cout << "Before:" << endl;
  cout << "x = " << x << ", fx = " << fx << endl;
  cout << "y = " << y << ", fy = " << fy << endl;

  swap(x,y);
  swap(fx,fy);

  cout << "After:" << endl;
  cout << "x = " << x << ", fx = " << fx << endl;
  cout << "y = " << y << ", fy = " << fy << endl;

  return 0;
}

template <class t>
void swap(t &i1, t &i2)
{
  t tmp;

  tmp = i1;
  i1 = i2;
  i2 = tmp;
}




/*    OUTPUT: functmp2.cpp

	Before:
	x = 5, fx = 5.5
	y = 7, fy = 7.7
	After:
	x = 7, fx = 7.7
	y = 5, fy = 5.5

*/
