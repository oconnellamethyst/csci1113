//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 6.12 on page 133
//  Implementing the Linear Search algorithm

#include <iostream>
using namespace std;

int index(int x, int a[], int n);
// if a[i] == x for some i in the range 0 <= i < n,
// then the smallest such i is returned;
// otherwise n is returned;

int main()
{ // tests the index() function:
  int a[] = { 22, 44, 66, 88, 44, 66, 55 };
  cout << "index(44,a,7) = " << index(44,a,7) << endl;
  cout << "index(50,a,7) = " << index(50,a,7) << endl;
}

int index(int x, int a[], int n)
{ // linear search:
  for (int i=0; i<n; i++)
    if (a[i] == x) return i;
  return n;
}
