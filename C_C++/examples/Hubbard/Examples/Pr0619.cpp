//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.19 on page 144
//  Implementing the Selection Sort algorithm

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
{ // selection sort:
  for (int i=1; i<n; i++)
  { // select a[k] = max{a[0..n-i]}:
    int k=0;
    for (int j=1; j<=n-i; j++)
      if (a[j]>a[k]) k = j;
    swap(a[k],a[n-i]);
    // INVARIANT: a[n-1-i..n-1] is sorted
  }
}
