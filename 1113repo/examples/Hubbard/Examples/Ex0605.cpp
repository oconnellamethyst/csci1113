//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 6.5 on page 129
//  Using an uninitialized array

#include <iostream>
using namespace std;

int main()
{ // tests simple array processing:
  const int SIZE=4;  // defines the size N for 4 elements
  float a[SIZE];     // declares the array's elements as type float
  for (int i=0; i<SIZE; i++)
    cout << "\ta[" << i << "] = " << a[i] << endl;
}
