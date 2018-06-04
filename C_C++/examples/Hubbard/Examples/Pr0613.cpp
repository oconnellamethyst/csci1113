//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.13 on page 143
//  Removing an element from an array

#include <iostream>  // defines the cout object
using namespace std;

bool removeFirst(float a[], int& n, float x);
void print(float a[], int n);

int main()
{ // tests the removeFirst() function:
  float a[] = { 6.6, 9.9, 3.3, 7.7, 5.5, 2.2, 8.8, 4.4 };
  int size=8;
  print(a,size);
  cout << "removeFirst(a,size,5.5) = " << removeFirst(a,size,5.5) << endl;
  print(a,size);
  cout << "removeFirst(a,size,6.0) = " << removeFirst(a,size,6.0) << endl;
  print(a,size);
}

void print(float a[], int n)
{ for (int i=0; i<n-1; i++)
    cout << a[i] << ", ";
  cout << a[n-1] << endl;
}

bool removeFirst(float a[], int& n, float x)
{ for (int i=0; i<n; i++)
    if (a[i] == x)
    { for (int j=i+1; j<n; j++)
        a[j-1] = a[j];
      --n;
      return true; 
    }
  return false;
}
