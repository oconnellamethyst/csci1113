//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 7.2 on page 157
//  Using a reference as a synonym

#include <iostream>
using namespace std;

int main()
{ int n=44;
  int& rn=n;  // r is a synonym for n
  cout << "n = " << n << ", rn = " << rn << endl;
  --n;
  cout << "n = " << n << ", rn = " << rn << endl;
  rn *= 2;
  cout << "n = " << n << ", rn = " << rn << endl;
}
