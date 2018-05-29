//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Example 12.7, page 279
//  Parent Constructors and Destructors

#include <iostream>
using namespace std;

class X
{
public:
  X() { cout << "X::X() constructor executing\n"; }
  ~X() { cout << "X::X() destructor executing\n"; }
};

class Y : public X
{
public:
  Y() { cout << "Y::Y() constructor executing\n"; }
  ~Y() { cout << "Y::Y() destructor executing\n"; }
};

class Z : public Y
{
public:
  Z(int n) { cout << "Z::Z() constructor executing\n"; }
  ~Z() { cout << "Z::Z() destructor executing\n"; }
};

int main()
{
  Z z(44);
}
