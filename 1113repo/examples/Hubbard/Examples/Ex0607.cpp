//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 6.7 on page 130
//  Array access overwriting existing variables

#include <iostream>
using namespace std;

int main()
{ // tests an index out of bounds error:
  float a[] = { 22.2, 44.4, 66.6 };
  float x=11.1;
  cout << "x = " << x << endl;
  a[3] = 88.8;  // ERROR: index is out of bounds!
  cout << "x = " << x << endl;
}
