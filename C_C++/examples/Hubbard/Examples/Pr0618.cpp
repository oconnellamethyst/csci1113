//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.18 on page 144
//  Implementing the Insertion Sort algorithm

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
{ // insertion sort:
  for (int i=1; i<n; i++)
  { // insert a[i] among a[0..i-1]:
    float x=a[i];
    int j=i;
    while (j>0 && a[j-1]>x)
      a[j--] = a[j-1];
    a[j] = x;
    // INVARIANT: a[0..i] is sorted
  }
}
