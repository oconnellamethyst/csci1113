//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.24 on page 145
//  Determining whether part of an array is symmetric

#include <iostream>  // defines the cout object
using namespace std;

bool isSymmetric(int a[], int n);
void print(int a[], int n);

int main()
{ // tests the isSymmetric() function:
  int a[] = { 22, 33, 44, 55, 44, 33, 22 };
  print(a,7);
  cout << "isSymmetric(a,7) = " << isSymmetric(a,7) << endl;
  cout << "isSymmetric(a,4) = " << isSymmetric(a,4) << endl;
}

void print(int a[], int n)
{ for (int i=0; i<n-1; i++)
    cout << a[i] << ", ";
  cout << a[n-1] << endl;
}

bool isSymmetric(int a[], int n)
{ for (int i=0; i<n/2; i++)
    if (a[i] != a[n-1-i]) return false;
  return true;
}
