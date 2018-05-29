//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.25 on page 145
//  Adding part of one array to another

#include <iostream>  // defines the cout object
using namespace std;

void add(float a[], int n, float b[]);
void print(float a[], int n);

int main()
{ // tests the add() function:
  float a[] = { 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
  float b[] = { 6.0, 5.0, 4.0, 3.0, 2.0, 1.0 };
  print(a,8);
  print(b,6);
  cout << "add(a,5,b):" << endl;
  add(a,5,b);
  print(a,8);
}

void print(float a[], int n)
{ for (int i=0; i<n-1; i++)
    cout << a[i] << ", ";
  cout << a[n-1] << endl;
}

void add(float a[], int n, float b[])
{ for (int i=0; i<n; i++)
    a[i] += b[i];
}
