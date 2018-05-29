//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 6.2 on page 127
//  Printing a sequence in reverse order

#include <iostream>
using namespace std;

int main()
{ // tests simple array processing:
  const int SIZE=5;  // defines the size N for 5 elements
  double a[SIZE];    // declares the array's elements as type double
  cout << "Enter " << SIZE << " numbers:\t";
  for (int i=0; i<SIZE; i++)
    cin >> a[i];
  cout << "In reverse order: ";
  for (int i=SIZE-1; i>=0; i--)
    cout << "\t" << a[i];
}
