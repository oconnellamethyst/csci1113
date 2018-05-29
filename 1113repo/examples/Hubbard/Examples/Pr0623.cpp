//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.23 on page 145
//  Reversing part of an array

#include <iostream>  // defines the cout object
using namespace std;

void reverse(int a[], int n);
void print(int a[], int n);

int main()
{ // tests the reverse() function:
  int a[] = { 22, 33, 44, 55, 66, 77, 88, 99 };
  print(a,8);
  cout << "reverse(a,5):" << endl;
  reverse(a,5);
  print(a,8);
  cout << "reverse(a,8):" << endl;
  reverse(a,8);
  print(a,8);
}

void print(int a[], int n)
{ for (int i=0; i<n-1; i++)
    cout << a[i] << ", ";
  cout << a[n-1] << endl;
}

void reverse(int a[], int n)
{ for (int i=0; i<n/2; i++)
    swap(a[i],a[n-1-i]);
}
