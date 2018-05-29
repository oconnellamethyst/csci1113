//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 6.9 on page 131
//  Passing an array to a function

#include <iostream>
using namespace std;

int sum(int a[], int n);
// returns the sum of the first n elements of a

int main()
{ // tests using array parameters:
  int a[] = { 11, 33, 55, 77 };
  int size = sizeof(a)/sizeof(int);
  cout << "sum(a,size) = " << sum(a,size) << endl;
}

int sum(int a[], int n)
{ // returns the sum of the first n elements of a:
  int sum=0;
  for (int i=0; i<n; i++)
    sum += a[i];
  return sum;
}
