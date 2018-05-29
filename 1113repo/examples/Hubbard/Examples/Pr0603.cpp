//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.3 on page 143
//  Passing an array to a function

#include <iostream>
using namespace std;

float ave(int a[], int n);
// returns the average of the first n elements of a[]

int main()
{ // tests using array parameters:
  int a[] = { 11, 33, 55, 77 };
  int size = sizeof(a)/sizeof(int);
  cout << "ave(a,size) = " << ave(a,size) << endl;
}

float ave(int a[], int n)
{ // returns the average of the first n elements of a[]:
  float sum=0.0;
  for (int i=0; i<n; i++)
    sum += a[i];
  return sum/n;
}
