//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.2 on page 143
//  Loading a sequence in reverse order

#include <iostream>
using namespace std;

int main()
{ // tests simple array processing:
  const int SIZE=5;  // defines the size N for 5 elements
  double a[SIZE];    // declares the array's elements as type double
  cout << "Enter " << SIZE << " numbers:\n";
  for (int i=SIZE-1; i>=0; i--)
  { cout << "\ta[" << i << "]: ";
    cin >> a[i];
  }
  cout << "In reverse order, they are:\n";
  for (int i=0; i<SIZE; i++)
    cout << "\ta[" << i << "] = " << a[i] << endl;
}
