//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 6.6 on page 129
//  Testing an index out of bounds

#include <iostream>
using namespace std;

int main()
{ // tests simple array processing:
  const int SIZE=4;
  float a[SIZE] = { 33.3, 44.4, 55.5, 66.6 };
  for (int i=0; i<7; i++)  // ERROR: index is out of bounds!
    cout << "\ta[" << i << "] = " << a[i] << endl;
}
