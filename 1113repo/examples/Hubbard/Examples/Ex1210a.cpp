//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Example 12.10(a), page 283
//  Using virtual Functions

#include <iostream>
using namespace std;

class X
{
public:
  void f() { cout << "X::f() executing\n"; }
};

class Y : public X
{
public:
  void f() { cout << "Y::f() executing\n"; }
};

int main()
{
  X x;
  Y y;
  X* p = &x;
  p->f();      // invokes X::f() because p has type X*
  p = &y;
  p->f();      // invokes X::f() because p has type X* 
}
