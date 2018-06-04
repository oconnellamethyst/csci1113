//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.12 on page 143
//  Removinf an element from an array

#include <iostream>  // defines the cout object
using namespace std;

void remove(float a[], int& n, int i);
void print(float a[], int n);

int main()
{ // tests the remove() function:
  float a[] = { 6.6, 9.9, 3.3, 7.7, 5.5, 2.2, 8.8, 4.4 };
  int size=8;
  print(a,size);
  cout << "remove(a,size,5):" << endl;
  remove(a,size,5);
  print(a,size);
  cout << "remove(a,size,2):" << endl;
  remove(a,size,2);
  print(a,size);
}

void print(float a[], int n)
{ for (int i=0; i<n-1; i++)
    cout << a[i] << ", ";
  cout << a[n-1] << endl;
}

void remove(float a[], int& n, int i)
{ for (int j=i+1; j<n; j++)
    a[j-1] = a[j];
  --n;
}
