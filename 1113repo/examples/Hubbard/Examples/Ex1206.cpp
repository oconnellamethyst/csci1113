//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Example 12.6, page 279
//  Dominating a Data Member and Overriding a Member Function

#include <iostream>
using namespace std;

class X
{
public:
  void f() { cout << "X::f() executing\n"; }
  int a;
};

class Y : public X
{
public:
  void f() { cout << "Y::f() executing\n"; } // overrides X::f()
  int a;                                     // overrifes X::a
};

int main()
{
  X x;
  x.a = 22;
  x.f();
  cout << "x.a = " << x.a << endl;
  Y y;
  y.a = 44;                             // assigns 44 to the a defined in Y
  y.X::a = 66;                          // assigns 66 to the a defined in X
  y.f();                                // invokes the f() defined in Y
  y.X::f();                             // invokes the f() defined in X
  cout << "y.a = " << y.a << endl;
  cout << "y.X::a = " <<  y.X::a << endl;
  X z = y;
  cout << "z.a = " << z.a << endl;
}
