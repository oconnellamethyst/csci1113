//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.16 on page 102
//  The swap() Function

#include <iostream>  // defines the cout object
using namespace std;

void swap(float&, float&);
// exchanges the values of x and y;

int main()
{ // tests the swap() function:
  float a = 22.2, b = 44.4;
  cout << "a = " << a << ", b = " << b << endl;
  swap(a,b);
  cout << "a = " << a << ", b = " << b << endl;
}

void swap(float& x, float& y)
{ // exchanges the values of x and y:
  float temp = x;
  x = y;
  y = temp;
}
