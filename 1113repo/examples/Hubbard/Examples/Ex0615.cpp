//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 6.15 on page 136
//  Testing an array for monotonicity

#include <iostream>
using namespace std;

bool isNondecreasing(int a[], int n);
// returns true iff a[0] <= a[1] <= ... <= a[n-1];

int main()
{ // tests the isNondecreasing() function:
  int a[] = { 22, 44, 66, 88, 44, 66, 55 };
  cout << "isNondecreasing(a,4) = " << isNondecreasing(a,4) << endl;
  cout << "isNondecreasing(a,7) = " << isNondecreasing(a,7) << endl;
}

bool isNondecreasing(int a[], int n)
{ // returns true iff a[0] <= a[1] <= ... <= a[n-1]:
  for (int i=1; i<n; i++)
    if (a[i]<a[i-1]) return false;
  return true;
}
