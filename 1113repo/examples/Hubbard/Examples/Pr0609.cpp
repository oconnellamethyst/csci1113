//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.9 on page 143
//  Processing a three-dimensional array

#include <cassert>   // defines the assert() function
#include <iostream>  // defines the cin and cout objects
using namespace std;

int minIndex(float[],int);

int main()
{ // tests the minIndex() function:
  float a[] = { 6.6, 9.9, 3.3, 7.7, 3.3, 5.5, 8.8, 1.1, 3.3 };
  int k = minIndex(a,6);
  cout << "minIndex(a,6) = " << k << endl;
  cout << "a[" << k << "] = " << a[k] << endl;
}

int minIndex(float a[], int n)
{ assert(n >= 0);
  int j=0;
  for (int i=1; i<n; i++)
    if (a[i] < a[j]) j = i;
  return j;
}
