//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 6.1 on page 126
//  Direct access with arrays

#include <iostream>
using namespace std;

int main()
{ // assigns and prints array elements:
  double a[3];
  a[2] = 55.55;
  a[0] = 11.11;
  a[1] = 33.33;
  cout << "a[0] = " << a[0] << endl;
  cout << "a[1] = " << a[1] << endl;
  cout << "a[2] = " << a[2] << endl;
}
