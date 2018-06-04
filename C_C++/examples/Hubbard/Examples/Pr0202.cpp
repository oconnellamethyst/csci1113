//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 2.2 on page 33
//  Implementing the quadratic formula

#include <iostream>
using namespace std;

int main()
{ // implements the quadratic formula
  double a, b, c;
  cout << "Enter the coefficients:" << endl;
  cout << "\ta: ";
  cin >> a;
  cout << "\tb: ";
  cin >> b;
  cout << "\tc: ";
  cin >> c;
  cout << "The equation is: " << a << "*x*x + " << b
       << "*x + " << c << " = 0" << endl;
  double d = b*b - 4*a*c;
  double sqrtd = sqrt(d);
  double x1 = (-b + sqrtd)/(2*a);
  double x2 = (-b - sqrtd)/(2*a);
  cout << "The solutions are:" << endl;
  cout << "\tx1 = " << x1 << endl;
  cout << "\tx2 = " << x2 << endl;
  cout << "Check:" << endl;
  cout << "\ta*x1*x1 + b*x1 + c = " <<  a*x1*x1 + b*x1 + c << endl;
  cout << "\ta*x2*x2 + b*x2 + c = " <<  a*x2*x2 + b*x2 + c << endl;
}
