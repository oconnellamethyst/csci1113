//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 5.25 on page 114
//  A Function that Computes Formulas for Spheres

#include <iostream>  // defines the cin and cout objects
using namespace std;
void computeSphere(double& a, double& v, double r);

int main()
{ double a, v, r;
  cout << "Enter the radius: ";
  cin >> r;
  computeSphere(a,v,r);
  cout << "The area of a sphere of radius " << r << " is " << a
       << "\nand its volume is " << v << endl;
}

void computeSphere(double& a, double& v, double r)
{ const double PI=3.141592653589793;
  a = 4.0*PI*r*r;
  v = a*r/3.0;
}
