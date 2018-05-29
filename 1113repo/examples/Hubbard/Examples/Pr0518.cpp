//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 5.18 on page 113
//  The Greatest Common Divisor Function

#include <cassert>   // defines the assert() function
#include <iostream>  // defines the cin and cout objects
using namespace std;
long gcd(long,long);

int main()
{ int m, n;
  cout << "Enter two positive integers: ";
  cin >> m >> n;
  cout << "gcd(" << m << "," << n << ") = " << gcd(m,n) << endl;
}

long gcd(long m, long n)
{ // returns the greatest common divisor of m and n:
  if (m<n) swap(m,n);
  assert(n >= 0);
  while (n>0)
  { long r=m%n;
    m = n;
    n = r;
  }
  return m;
}
