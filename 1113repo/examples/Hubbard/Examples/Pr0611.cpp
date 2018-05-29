//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.11 on page 143
//  Finding the two largest values in an array

#include <cassert>   // defines the assert() function
#include <iostream>  // defines the cout object
using namespace std;

void largest(float& max1, float& max2, float a[], int n);

int main()
{ // tests the largest() function:
  float a[] = { 6.6, 9.9, 3.3, 7.7, 5.5, 2.2, 8.8, 4.4 };
  float max1, max2;
  largest(max1,max2,a,4);
  cout << "max1 = " << max1 << ", max2 = " << max2 << endl;
  largest(max1,max2,a,8);
  cout << "max1 = " << max1 << ", max2 = " << max2 << endl;
}

void largest(float& max1, float& max2, float a[], int n)
{ assert(n >= 1);
  int i1=0, i2;
  for (int i=1; i<n; i++)
    if (a[i] > a[i1]) i1 = i;
  max1 = a[i1];
  i2 = ( i1 == 0 ? 1 : 0 );
  for (int i=i2+1; i<n; i++)
    if (i != i1 && a[i] > a[i2]) i2 = i;
  max2 = a[i2];
}
