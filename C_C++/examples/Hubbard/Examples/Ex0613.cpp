//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 6.13 on page 134
//  Implementing the Bubble Sort algorithm

#include <iostream>  // defines the cout object
using namespace std;

void print(float[],int);
void sort(float[],int);

int main()
{ // tests the sort() function:
  float a[] = {55.5, 22.5, 99.9, 66.6, 44.4, 88.8, 33.3, 77.7};
  print(a,8);
  sort(a,8);
  print(a,8);
}

void print(float a[], int n)
{ for (int i=0; i<n-1; i++)
    cout << a[i] << ", ";
  cout << a[n-1] << endl;
}

void sort(float a[], int n)
{ // bubble sort:
  for (int i=1; i<n; i++)
    // bubble up max{a[0..n-i]}:
    for (int j=0; j<n-i; j++)
      if (a[j] > a[j+1]) swap(a[j],a[j+1]);
    // INVARIANT: a[n-1-i..n-1] is sorted
}
