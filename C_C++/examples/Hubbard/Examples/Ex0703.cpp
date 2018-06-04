//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 7.3 on page 158
//  The address of a reference

#include <iostream>
using namespace std;

int main()
{ int n=44;
  int& rn=n;  // r is a synonym for n
  cout << "  &n = " << &n << ",  &rn = " << &rn << endl;
  int& rn2=n;   // r is another synonym for n
  int& rn3=rn;  // r is another synonym for n
  cout << "&rn2 = " << &rn2 << ", &rn3 = " << &rn3 << endl;
}
