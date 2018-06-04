//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.10 on page 143
//  Finding the minimum and maximum values in an array

#include <cassert>   // defines the assert() function
#include <iostream>  // defines the cout object
using namespace std;

void getExtremes(float& min, float& max, float a[], int n);

int main()
{ // tests the getExtremes() function:
  float a[] = { 6.6, 9.9, 3.3, 7.7, 5.5, 2.2, 8.8, 4.4 };
  float min, max;
  getExtremes(min,max,a,8);
  cout << "min = " << min << ", max = " << max << endl;
}

void getExtremes(float& min, float& max, float a[], int n)
{ assert(n >= 0);
  min = max = a[0];
  for (int i=1; i<n; i++)
    if (a[i] < min) min = a[i];
    else if (a[i] > max) max = a[i];
}
