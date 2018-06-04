//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 5.19 on page 113
//  Finding the least common multiple

#include <iostream>  // defines the cout object
using namespace std;

long lcm(long,long);
// returns the least common multiple of the two integers

int main()
{ // tests the lcm() function:
  int m, n;
  cout << "Enter two positive integers: ";
  cin >> m >> n;
  cout << "lcm(" << m << "," << n << ") = " << lcm(m,n) << endl;
}

long gcd(long,long);
// returns the greatest common divisor of the two integers

long lcm(long m,long n)
{ // returns the least common multiple of the two integers:
  return m*n/gcd(m,n);
}

long gcd(long m,long n)
{ // returns the greatest common divisor of the two integers:
  if (m < n) swap(m,n);
  while (n>0)
  { int r = m%n;
    m = n;
    n = r;
  }
  return m;
}
