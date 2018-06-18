/*     FILE: functmp3.cpp     */

/* Swap function template, several types. */

#include <iostream>
#include "inline5.h"
using namespace std;

template <class t>
void swapfunc(t &, t &);

int main( )
{
  int x,y;
  double fx,fy;
  COMPLEX c1,c2;

  x = 5;
  y = 7;
  fx = 5.5;
  fy = 7.7;
  init(&c1,1,2);
  init(&c2,3,4);

  cout << "Before:" << endl;
  cout << "x = " << x << ", fx = " << fx << ", c1 = ";
  print(c1);
  cout << endl;
  cout << "y = " << y << ", fy = " << fy << ", c2 = ";
  print(c2);
  cout << endl;
   
  swapfunc(x,y);
  swapfunc(fx,fy);
  swapfunc(c1,c2);

  cout << "After:" << endl;
  cout << "x = " << x << ", fx = " << fx << ", c1 = ";
  print(c1);
  cout << endl;
  cout << "y = " << y << ", fy = " << fy << ", c2 = ";
  print(c2);
  cout << endl;

  return 0;
}

template <class t>
void swapfunc(t &i1, t &i2)
{
  t tmp;

  tmp = i1;
  i1 = i2;
  i2 = tmp;
}




/*    OUTPUT: functmp3.cpp

	Before:
	x = 5, fx = 5.5, c1 = (1 + 2i)
	y = 7, fy = 7.7, c2 = (3 + 4i)
	After:
	x = 7, fx = 7.7, c1 = (3 + 4i)
	y = 5, fy = 5.5, c2 = (1 + 2i)

*/
