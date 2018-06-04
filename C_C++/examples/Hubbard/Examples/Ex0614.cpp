//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 6.14 on page 135
//  Implementing the Binary Search algorithm

#include <iostream>
using namespace std;

int index(int x, int a[], int n);
// if a[i] == x for some i in the range 0 <= i < n,
// then the smallest such i is returned;
// otherwise n is returned;

int main()
{ // tests the index() function:
  int a[] = { 22, 33, 44, 55, 66, 77, 88 };
  cout << "index(44,a,7) = " << index(44,a,7) << endl;
  cout << "index(60,a,7) = " << index(60,a,7) << endl;
}

int index(int x, int a[], int n)
{ // PRECONDITION: a[0] <= a[1] <= ... <= a[n-1];
  // binary search:
  int lo=0, hi=n-1, i;
  while (lo <= hi)
  { i = (lo + hi)/2;
    if (a[i] == x) return i;
    if (a[i] < x) lo = i+1;  // continue search in a[i+1..hi]
    else hi = i-1;           // continue search in a[lo..i-1]
  }
  return n;  // x was not found in a[0..n-1]
}
