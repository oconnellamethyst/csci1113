//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.25 on page 111
//  Default parameters

#include <cstdlib>   // defines the exit() function
#include <iostream>  // defines the cin and cout objects
using namespace std;
double p(double, double, double=0, double=0, double=0);

int main()
{ // tests the p() function:
  double x = 2.0003;
  cout << "p(x,7) = " << p(x,7) << endl;
  cout << "p(x,7,6) = " << p(x,7,6) << endl;
  cout << "p(x,7,6,5) = " << p(x,7,6,5) << endl;
  cout << "p(x,7,6,5,4) = " << p(x,7,6,5,4) << endl;
}
double p(double x, double a0, double a1, double a2, double a3)
{ // returns a0 + a1*x + a2*x^2 + a3*x^3:
  return a0 + (a1 + (a2 + a3*x)*x)*x;
}
