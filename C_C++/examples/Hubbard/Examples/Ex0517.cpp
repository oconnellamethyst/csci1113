//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.17 on page 104
//  Passing By Value and Passing By Reference

#include <iostream>  // defines the cout object
using namespace std;

void f(int,int&);
// changes reference argument to 99:;

int main()
{ // tests the f() function:
  int a = 22, b = 44;
  cout << "a = " << a << ", b = " << b << endl;
  f(a,b);
  cout << "a = " << a << ", b = " << b << endl;
  f(2*a-3,b);
  cout << "a = " << a << ", b = " << b << endl;
}

void f(int x, int& y)
{ // changes reference argument to 99:
  x = 88;
  y = 99;
}
