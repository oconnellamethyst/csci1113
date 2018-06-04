//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 3.1 on page 51
//  Testing for divisibility

#include <iostream>
using namespace std;

int main()
{ // reports if one input number is divisible by another:
  int n, d;
  cout << "Enter two positive integers: ";
  cin >> n >> d;
  if (n%d == 0) cout << n << " is divisible by " << d << endl;
}
