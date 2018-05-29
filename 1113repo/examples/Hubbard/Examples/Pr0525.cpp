//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 5.25 on page 114
//  A Function that Computes Formulas for Triangles

#include <iostream>  // defines the cin and cout objects
using namespace std;
void computeTriangle(float& a, float& p, float x, float y, float z);

int main()
{ float a, p, x, y, z;
  cout << "Enter the sides: ";
  cin >> x >> y >> z;
  computeTriangle(a,p,x,y,z);
  cout << "The area of the triangle is " << a
       << "\nand its perimeter is " << p << endl;
}

void computeTriangle(float& a, float& p, float x, float y, float z)
{ p = x + y + z;
  float s = p/2.0;  // the semiperimeter of the triangle
  a = sqrt(s*(s-x)*(s-y)*(s-z));  // Heron's formula
}
