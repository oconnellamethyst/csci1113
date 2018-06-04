//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 7.20 on page 176
//  Integrating a function

#include <cmath>     // defines the sqrt() function
#include <iostream>  // defines the cout object
using namespace std;
const double E=2.718281828459045;
const double P=3.141592653589793;
const double P2=P/2;

double riemann(double(*)(double),double,double,int);

int main()
{ cout << "riemann(sqrt,1,4,100)   = " << riemann(sqrt,1,4,100) << endl;
  cout << "riemann(sqrt,1,4,1000)  = " << riemann(sqrt,1,4,1000) << endl;
  cout << "riemann(sqrt,1,4,10000) = " << riemann(sqrt,1,4,10000) << endl;
  cout << "The exact integral      = " << 14.0/3 << endl;
  cout << "riemann(cos,0,P2,100)   = " << riemann(cos,0,P2,100) << endl;
  cout << "riemann(cos,0,P2,1000)  = " << riemann(cos,0,P2,1000) << endl;
  cout << "riemann(cos,0,P2,10000) = " << riemann(cos,0,P2,10000) << endl;
  cout << "The exact integral      = " << 1 << endl;
  cout << "riemann(exp,0,1,100)    = " << riemann(exp,0,1,100) << endl;
  cout << "riemann(exp,0,1,1000)   = " << riemann(exp,0,1,1000) << endl;
  cout << "riemann(exp,0,1,10000)  = " << riemann(exp,0,1,10000) << endl;
  cout << "The exact integral      = " << E - 1 << endl;
  cout << "riemann(log,1,E,100)    = " << riemann(log,1,E,100) << endl;
  cout << "riemann(log,1,E,1000)   = " << riemann(log,1,E,1000) << endl;
  cout << "riemann(log,1,E,10000)  = " << riemann(log,1,E,10000) << endl;
  cout << "The exact integral      = " << 1 << endl;
}

double riemann(double (*pf)(double t), double a, double b, int n)
{ //  returns the left Riemann sum [f(a)*h + f(a+h)*h + . . . + f(b-h)*h],
  //  for the integral of f over [a,b], where f() = *pf() and h = (b-a)/n:
  double s = 0, h = (b-a)/n, x;
  int i;
  for (x = a, i = 0; i < n; x += h, i++)
    s += (*pf)(x);
  return s*h;
}
