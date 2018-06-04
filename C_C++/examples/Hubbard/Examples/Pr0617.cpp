//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.17 on page 144
//  Inserting an element into a sorted array

#include <iostream>  // defines the cout object
using namespace std;

void insert(float a[], int& n, float x);
void print(float a[], int n);

int main()
{ // tests the add() function:
  float a[9] = { 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
  int size=8;
  print(a,size);
  cout << "insert(a,size,6.1):" << endl;
  insert(a,size,6.1);
  print(a,size);
}

void print(float a[], int n)
{ for (int i=0; i<n-1; i++)
    cout << a[i] << ", ";
  cout << a[n-1] << endl;
}

void insert(float a[], int& n, float x)
{ int j=n;
  while (j>0 && a[j-1]>x)
    a[j--] = a[j-1];
  a[j] = x;
  ++n;
}
