//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 6.20 on page 144
//  Implementing the Indirect Bubble Sort algorithm

#include <iostream>  // defines the cout object
using namespace std;

void print(float[],int);
void sort(float[],int[],int);
void print(float[],int[],int);

int main()
{ // tests the sort() function:
  float a[] = {55.5, 22.5, 99.9, 66.6, 44.4, 88.8, 33.3, 77.7};
  int indx[8] = {0, 1, 2, 3, 4, 5, 6, 7};
  print(a,8);
  sort(a,indx,8);
  print(a,indx,8);
  print(a,8);
}

void print(float a[], int n)
{ for (int i=0; i<n-1; i++)
    cout << a[i] << ", ";
  cout << a[n-1] << endl;
}

void sort(float a[], int indx[], int n)
{ // indirect bubble sort:
  for (int i=1; i<n; i++)
    // bubble up max{a[0..n-i]}:
    for (int j=0; j<n-i; j++)
      if (a[indx[j]] > a[indx[j+1]]) swap(indx[j],indx[j+1]);
    // INVARIANT: a[indx[n-1-i..n-1]] is sorted
}

void print(float a[], int indx[], int n)
{ for (int i=0; i<n-1; i++)
    cout << a[indx[i]] << ", ";
  cout << a[indx[n-1]] << endl;
}
