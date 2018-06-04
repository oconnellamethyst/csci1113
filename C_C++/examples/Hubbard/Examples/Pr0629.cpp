//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 6.29 on page 145
//  Implementing the perfect shuffle of an array

#include <cassert>   // defines the assert() function
#include <iostream>  // defines the cout object
using namespace std;

const int SIZE=100;
void print(int[],int);
void shuffle(int[],int);

int main()
{ // tests the sort() function:
  int a[] = { 11, 22, 33, 44, 55, 66, 77, 88 };
  print(a,8);
  shuffle(a,8);
  print(a,8);
}

void print(int a[], int n)
{ for (int i=0; i<n-1; i++)
    cout << a[i] << ", ";
  cout << a[n-1] << endl;
}

void shuffle(int a[], int n)
{ //  The Perfect Shuffle for an even number of elements:
  assert(n <= SIZE);
  int temp[SIZE];
  for (int i=0; i<n/2; i++)
  { temp[2*i] = a[i];
    temp[2*i+1] = a[n/2+i];
  }
  for (int i=0; i<n; i++)
    a[i] = temp[i];
}
