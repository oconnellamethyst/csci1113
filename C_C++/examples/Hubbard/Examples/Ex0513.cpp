//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.13 on page 99
//  A Function that Tests Primality

#include <cmath>     // defines the sqrt() function
#include <iostream>  // defines the cout object
using namespace std;

bool isPrime(int);
// returns true if n is prime, false otherwise;

int main()
{ for (int n=0; n < 80; n++)
    	if (isPrime(n)) cout << n << " ";
	  cout << endl;
}

bool isPrime(int n)
{ // returns true if n is prime, false otherwise:
  float sqrtn = sqrt(n);
  if (n < 2) return false;           // 0 and 1 are not primes
  if (n < 4) return true;            // 2 and 3 are the first primes
  if (n%2 == 0) return false;        // 2 is the only even prime
  for (int d=3; d <= sqrtn; d += 2)
    if (n%d == 0) return false;      // n has a nontrivial divisor
  return true;                       // n has no nontrivial divisors
}
