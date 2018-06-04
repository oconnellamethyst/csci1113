//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 11.2 on page 268
//  Testing a Vector class

#include <iostream>
using namespace std;

#include "Vector.h"

int main()
{ Vector v, w(3), x(4,2.0);
  cout << "v = " << v << ", w = " << w << ", x = " << x << endl;
  cin >> w;
  cout << "w = " << w << endl;
}
