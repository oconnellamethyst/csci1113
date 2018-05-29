//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.16 on page 144
//  Appending part of one array onto another

#include <cassert>   // defines the assert() function
#include <iostream>  // defines the cout object
using namespace std;

void append(int a[], int m, int b[], int n);
void print(int a[], int n);

int main()
{ // tests the append() function:
  int a[] = { 22, 33, 44, 55, 66, 77, 88, 99 };
  int b[] = { 20, 30, 40, 50, 60, 70, 80, 90 };
  print(a,8);
  cout << "append(a,5,b,3):" << endl;
  append(a,5,b,3);
  print(a,8);
}

void print(int a[], int n)
{ for (int i=0; i<n-1; i++)
    cout << a[i] << ", ";
  cout << a[n-1] << endl;
}

void append(int a[], int m, int b[], int n)
{ for (int j=0; j<n; j++)  // copy n elements into a[]
    a[m+j] = b[j];
}
