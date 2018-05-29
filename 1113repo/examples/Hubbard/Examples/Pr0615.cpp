//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.15 on page 144
//  Rotating elements within an array

#include <iostream>  // defines the cout object
using namespace std;

void rotate(int a[], int n, int k);
void print(int a[], int n);

int main()
{ // tests the rotate() function:
  int a[] = { 22, 33, 44, 55, 66, 77, 88, 99 };
  print(a,8);
  cout << "rotate(a,8,3):" << endl;
  rotate(a,8,3);
  print(a,8);
  cout << "rotate(a,8,-3):" << endl;
  rotate(a,8,-3);
  print(a,8);
  cout << "rotate(a,8,-5):" << endl;
  rotate(a,8,-5);
  print(a,8);
}

void print(int a[], int n)
{ for (int i=0; i<n-1; i++)
    cout << a[i] << ", ";
  cout << a[n-1] << endl;
}

void rotate(int a[], int n, int k)
{ const int MAXOFFSET=100;
  assert(k < MAXOFFSET);
  int temp[MAXOFFSET];
  if (k > 0)
  { for (int j=0; j<k; j++)  // copy k elements into temp[]
      temp[j] = a[n-k+j];
    for (int i=n-1; i>=k; i--)  // shift n-k elements
      a[i] = a[i-k];
    for (int i=0; i<k; i++)  // copy k elements back to a[]
      a[i] = temp[i];
  }
  if (k < 0)
  { for (int j=0; j<-k; j++)  // copy -k elements into temp[]
      temp[j] = a[j];
    for (int i=0; i<n+k; i++)  // shift n+k elements
      a[i] = a[i-k];
    for (int i=n+k; i<n; i++)  // copy -k elements back to a[]
      a[i] = temp[i-n-k];
  }
}
