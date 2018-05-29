//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 11.8 on page 260
//  Overloading the << operator

#include <iostream>
using namespace std;
#include "Ratio.h"

int main()
{ Ratio x(22,7), y(-3,8);
	  cout << "x = " << x << ", y = " << y << endl;
}
