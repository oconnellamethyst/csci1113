//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 6.10 on page 132
//  Passing an array to a function

#include <iostream>
using namespace std;

void read(int a[], int& n);
// reads n elements into a[]

void print(int a[], int n);
// prints the first n elements of a[]

int main()
{ // reads and prints an array:
  const int MAXSIZE=100;
  int a[MAXSIZE]={0}, size;
  read(a,size);
  cout << "The array has " << size << " elements: ";
  print(a,size);
}

void read(int a[], int& n)
{ // reads n elements into a[]:
  cout << "Enter integers.  Terminate with 0:\n";
  n = 0;
  do
  { cout << "a[" << n << "]: ";  
    cin >> a[n];
  } while (a[n++] != 0);
  --n;  // don't count the 0
}

void print(int a[], int n)
{ // prints the first n elements of a[]
  for (int i=0; i<n; i++)
    cout << a[i] << " ";
}
