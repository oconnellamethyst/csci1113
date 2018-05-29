//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 2.3 on page 33
//  Changing values of variables from: inf, -inf, nan

#include <iostream>
using namespace std;

int main()
{ // changes the value of x after it becomes inf:
  float x=1e30;
  cout << "x= " << x << endl;
  x *= x;
  cout << "x= " << x << endl;
  x *= -1.0;
  cout << "x= " << x << endl;
  x *= -1.0;
  cout << "x= " << x << endl;
}
