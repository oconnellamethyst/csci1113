//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 11.5 on page 259
//  Testing the Ratio class assignment and multiplication operators

#include <iostream>
using namespace std;
#include "Ratio.h"

int main()
{ Ratio x(22,7), y(-3,8), z;
  z = x;                      // assignment operator is called
  z.print();  cout << endl;
  x = y*z;                    // multiplication operator is called
  x.print();  cout << endl;
}
