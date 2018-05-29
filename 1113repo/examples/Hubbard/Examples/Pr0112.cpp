//  Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 1.12 on page 11
//  Testing Uninitialized Variables

#include <iostream>
using namespace std;

int main()
{ // prints the values of uninitialized variables
  bool b;  // not initialized
  cout << "b = " << b << endl;
  char c;  // not initialized
  cout << "c = [" << c << "]" << endl;
  int m;  // not initialized
  cout << "m = " << m << endl;
  int n;  // not initialized
  cout << "n = " << n << endl;
  long nn;  // not initialized
  cout << "nn = " << nn << endl;
  float x;  // not initialized
  cout << "x = " << x << endl;
  double y;  // not initialized
  cout << "y = " << y << endl;
}
