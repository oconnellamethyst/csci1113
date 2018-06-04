//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 11.10 on page 263
//  Adding a conversion operator

#include <iostream>
using namespace std;

#include "Ratio.h"

int main()
{ Ratio x(-5,8);
  cout << "x = " << x << ", double(x) = " << double(x) << endl;
  const Ratio P(22,7);
  const double PI = double(P);
  cout << "P = " << P << ", PI = " << PI << endl;
}
