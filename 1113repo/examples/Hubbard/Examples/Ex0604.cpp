//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 6.4 on page 128
//  Using an initializer list

#include <iostream>
using namespace std;

int main()
{ // tests simple array processing:
  float a[7] = { 22.2, 44.4, 66.6 };
  int size = sizeof(a)/sizeof(float);
  for (int i=0; i<size; i++)
    cout << "\ta[" << i << "] = " << a[i] << endl;
}
