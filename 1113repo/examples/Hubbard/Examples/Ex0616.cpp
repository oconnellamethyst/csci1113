//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 6.16 on page 137
//  Using the assert() function to enforce a precondition

#include <cassert>   // defines the assert() function
#include <iostream>  // defines the cout object
using namespace std;

int index(int x, int a[], int n);
// if a[i] == x for some i in the range 0 <= i < n,
// then the smallest such i is returned;
// otherwise n is returned;

int main()
{ // tests the index() function:
  int a[] = { 22, 33, 44, 55, 66, 77, 88, 60 };
  cout << "index(44,a,7) = " << index(44,a,7) << endl;
  cout << "index(44,a,7) = " << index(44,a,8) << endl;
  cout << "index(60,a,7) = " << index(60,a,8) << endl;
}

bool isNondecreasing(int a[], int n);
// returns true iff a[0] <= a[1] <= ... <= a[n-1];

int index(int x, int a[], int n)
{ // PRECONDITION: a[0] <= a[1] <= ... <= a[n-1];
  // binary search:
  assert(isNondecreasing(a,n));
  int lo=0, hi=n-1, i;
  while (lo <= hi)
  { i = (lo + hi)/2;
    if (a[i] == x) return i;
    if (a[i] < x) lo = i+1;  // continue search in a[i+1..hi]
    else hi = i-1;           // continue search in a[lo..i-1]
  }
  return n;  // x was not found in a[0..n-1]
}

bool isNondecreasing(int a[], int n)
{ // returns true iff a[0] <= a[1] <= ... <= a[n-1]:
  for (int i=1; i<n; i++)
    if (a[i]<a[i-1]) return false;
  return true;
}
