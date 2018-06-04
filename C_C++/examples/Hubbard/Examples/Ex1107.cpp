//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 11.7 on page 260
//  Overloading the == operator

#include <iostream>
using namespace std;
#include "Ratio.h"

int main()
{ Ratio x(22,7), y(-3,8), z;
  cout << "x = ";  x.print();  cout << endl;
  z = x;                          // assignment operator is called
  cout << "z = ";  z.print();  cout << endl;
  if (z == x) cout << "z == x" << endl;
  else cout << "z != x" << endl;  
  x = y*z;                     // multiplication operator is called
  cout << "x = ";  x.print();  cout << endl;
  if (z == x) cout << "z == x" << endl;
  else cout << "z != x" << endl;
  x *= y*z;
  cout << "x = ";  x.print();  cout << endl;
}
