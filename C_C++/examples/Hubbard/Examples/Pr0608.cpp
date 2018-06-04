//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.8 on page 143
//  Finding the minimum value in an array

#include <cassert>   // defines the assert() function
#include <iostream>  // defines the cout object
using namespace std;

float min(float a[], int n);
// returns the minimum value among a[0..n-1];

int main()
{ // tests the min() function:
  float a[] = { 6.6, 9.9, 3.3, 7.7, 5.5, 2.2, 8.8, 4.4 };
  cout << "min(a,2) = " << min(a,2) << endl;
  cout << "min(a,4) = " << min(a,4) << endl;
  cout << "min(a,6) = " << min(a,6) << endl;
  cout << "min(a,8) = " << min(a,8) << endl;
}

float min(float a[], int n)
{ // returns the minimum value among a[0..n-1]:
  assert(n >= 0);
  float min=a[0];
  for (int i=1; i<n; i++)
    if (a[i] < min) min = a[i];
  return min;
}
