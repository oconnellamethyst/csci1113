//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.18 on page 105
//  Returning More than One Value

#include <iostream>  // defines the cout object
using namespace std;

void computeCircle(double&, double&, double);
// returns the area and circumference of a circle with radius r;

int main()
{ // tests the computeCircle() function:
  double r, a, c;
  cout << "Enter radius: ";
  cin >> r;
  computeCircle(a, c, r);
  cout << "area = " << a << ", circumference = " << c << endl;
}

void computeCircle(double& area, double& circumference, double r)
{ // returns the area and circumference of a circle with radius r:
  const double PI = 3.141592653589793;
  area = PI*r*r;
  circumference = 2*PI*r;
}
