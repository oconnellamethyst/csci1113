//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 11.1 on page 267
//  Adding operator< and both unary and binary operator-

#include <iostream>
using namespace std;

#include "Ratio.h"

int main()
{ Ratio x(22,7), y(10,3);
  cout << "x = " << x << ", y = " << y << endl;
  if (x < y) cout << "x < y" << endl;
  else cout << "x >= y" << endl;
  if (y < x) cout << "y < x" << endl;
  else cout << "y >= x" << endl;
  y = -x;
  cout << "x = " << x << ", y = " << y << endl;
  if (x < y) cout << "x < y" << endl;
  else cout << "x >= y" << endl;
  if (y < x) cout << "y < x" << endl;
  else cout << "y >= x" << endl;
}
