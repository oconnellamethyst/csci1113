//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 7.8 on page 162
//  Returning a reference

#include <iostream>
using namespace std;

int& max(int&,int&);

int main()
{ int m = 44, n = 22;
  cout << m << ", " << n << ", " << max(m,n) << endl;
  max(m,n) = 55;          // changes the value of m from 44 to 55
  cout << m << ", " << n << ", " << max(m,n) << endl;
}

int& max(int& m, int& n)   // return type is reference to int
{ return (m > n ? m : n);  // m and n are non-local references
}
