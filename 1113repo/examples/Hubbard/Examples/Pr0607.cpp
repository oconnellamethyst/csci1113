//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.7 on page 143
//  Testing an array for monotonicity

#include <iostream>
using namespace std;

bool isNonincreasing(int a[], int n);
// returns true iff a[0] >= a[1] >= ... >= a[n-1];

int main()
{ // tests the isNonincreasing() function:
  int a[] = { 88, 66, 44, 22, 33, 55, 77 };
  cout << "isNonincreasing(a,4) = " << isNonincreasing(a,4) << endl;
  cout << "isNonincreasing(a,7) = " << isNonincreasing(a,7) << endl;
}

bool isNonincreasing(int a[], int n)
{ // returns true iff a[0] >= a[1] >= ... >= a[n-1]:
  for (int i=1; i<n; i++)
    if (a[i]>a[i-1]) return false;
  return true;
}
