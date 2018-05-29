//  Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 1.14 on page 11
//  Testing Roundoff Error

#include <iostream>
using namespace std;

int main()
{ float a = 666666;             // = a = 666666
  float b = 1 - 1/a;            // = (a-1)/a = 666665/666666
  float c = 1/b - 1;            // = 1/(a-1) = 1/666665
  float d = 1/c + 1;            // = a = 666666 != 671089
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;
  cout << "d = " << d << endl;
}
