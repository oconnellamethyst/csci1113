//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.19 on page 70
//  Testing a loop invariant

#include <cmath>     // defines pow() and log()
#include <iostream>  // defines cin and cout
#include <iomanip>   // defines setw()
using namespace std;

int main()
{ // computes the discrete binary logarithm of an input number:
  long n;
  cout << "Enter a positive integer: ";
  cin >> n;
  int d=0;  // the discrete binary logarithm of n
  double p2d=1;  // = 2^d
  for (int i=n; i > 1; i /= 2, d++)
  { // INVARIANT: 2^d <= n/i < 2*2^d
    p2d=pow(2,d);  // = 2^d
    cout << setw(2) << p2d << " <= " << setw(2) << n/i
         << " < " << setw(2) << 2*p2d << endl;
  }
  p2d=pow(2,d);  // = 2^d
  cout << setw(2) << p2d << " <= " << setw(2) << n
       << " < " << setw(2) << 2*p2d << endl;
  cout << "  The discrete binary logarithm of " << n
       << " is " << d << endl;
  double lgn = log(n)/log(2);  // base 2 logarithm of n
  cout << "The continuous binary logarithm of " << n
       << " is " << lgn << endl;
}
