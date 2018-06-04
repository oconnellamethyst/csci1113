//  Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  test_Ratio.cpp
//  Test driver for the Ratio class

#include "Ratio.h"

int main()
{ Ratio x(22,7), y(-3,8), z;
  z = x;                          // assignment operator is called
  z.print();  cout << endl;
  x = y*z;                    // multiplication operator is called
  x.print();  cout << endl;
}
