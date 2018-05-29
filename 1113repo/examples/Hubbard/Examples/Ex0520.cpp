//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.20 on page 107
//  Inlining the Cube Function

#include <iostream>  // defines the cout object
using namespace std;

inline int cube(int);
// returns cube of x;

 int main()
{ // tests the cube() function:
  cout << cube(4) << endl;
  int x, y;
  cin >> x;
  y = cube(2*x-3);
}

inline int cube(int x)
{ // returns cube of x:
  return x*x*x;
}
