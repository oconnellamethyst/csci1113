//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 11.12 on page 265
//  Adding a post-increment operator

#include <iostream>
using namespace std;

#include "Ratio.h"

int main()
{ Ratio x(22,7), y = x++;
  cout << "y = " << y << ", x = " << x << endl;
}
