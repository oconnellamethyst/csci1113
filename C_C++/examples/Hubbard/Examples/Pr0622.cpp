//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.22 on page 144
//  The Sieve of Eratosthenes

#include <iomanip>   // defines the setw() function
#include <iostream>  // defines the cout object
using namespace std;

const int SIZE = 400;
void sieve(bool[],int);
void print(bool[],int);

int main()
{ // prints all the prime numbers less than SIZE:
  bool isPrime[SIZE] = {0};
  sieve(isPrime,SIZE);
  print(isPrime,SIZE);
}

void sieve(bool isPrime[], int n)
{ // sets isPrime[i] = false iff i is not prime:
  for (int i=2; i<n; i++)
    isPrime[i] = true;      // assume all i > 1 are prime
  for (int p=2; p<=n/2; p++)
    for (int m=2*p; m<n; m += p)
      isPrime[m] = false;   // no multiple of p is prime
}

void print(bool a[], int n)
{ // prints each i for which isPrime[i] is true:
  for (int i=1; i<n; i++)
    if (a[i]) cout << setw(3) << i;
    else cout << setw(3) << (i%20==0?'\n':' ');
}
