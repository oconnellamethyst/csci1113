//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.19 on page 106
//  Returning More than One Value

#include <iostream>  // defines the cout object
using namespace std;

void f(int, int&, const int&);

int main()
{ // tests the f() function:
  int a = 22, b = 33, c = 44;
  cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
  f(a,b,c);
  cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
  f(2*a-3,b,c);
  cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
}

void f(int x, int& y, const int& z)
{ 	x += z;
  y += z;
  cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
}
