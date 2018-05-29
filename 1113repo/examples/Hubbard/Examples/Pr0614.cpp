//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.14 on page 144
//  Removing elements from an array

#include <iostream>  // defines the cout object
using namespace std;

void removeAll(float a[], int& n, float x);
void print(float a[], int n);

int main()
{ // tests the removeFirst() function:
  float a[] = { 6.6, 5.5, 3.3, 7.7, 5.5, 2.2, 5.5, 4.4 };
  int size=8;
  print(a,size);
  cout << "removeAll(a,size,5.5):" << endl;
  removeAll(a,size,5.5);
  print(a,size);
  cout << "removeAll(a,size,2.2):" << endl;
  removeAll(a,size,2.2);
  print(a,size);
  cout << "removeAll(a,size,5.5):" << endl;
  removeAll(a,size,5.5);
  print(a,size);
}

void print(float a[], int n)
{ for (int i=0; i<n-1; i++)
    cout << a[i] << ", ";
  cout << a[n-1] << endl;
}

void removeAll(float a[], int& n, float x)
{ for (int i=0; i<n; i++)
    if (a[i] == x)
    { for (int j=i+1; j<n; j++)
        a[j-1] = a[j];
      --n;
    }
}
