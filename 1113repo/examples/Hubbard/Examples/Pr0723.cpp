//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 7.23 on page 176
//  The Bisection Method

#include <cmath>     // defines the sqrt() function
#include <iomanip>   // defines the setprecision() function
#include <iostream>  // defines the cout object
using namespace std;

double root(double(*)(double),double,double,int);
double f(double);

int main()
{ // solves the equation x*x - 2 = 0:
  cout << setprecision(16);  // print 16 significant digits:
  for (int n=10; n<60; n+=5)
    cout << "root(f,1,2," << n << ") = " << root(f,1,2,n) << endl;
  cout << "The exact root = " << sqrt(2) << endl;
}

double root(double (*pf)(double t), double a, double b, int n)
{ //  returns an approximation to an x in [a,b] where f(x) = 0,
  //  where f() = *pf():
  //  PRECONDITIONS: f is continuous on [a,b] and f(a)*f(b) < 0
  double x, fa, fx, fb;
  for (int i=0; i<n; i++)
  { x = (a+b)/2;    // the midpoint of the interval [a,b]
    fa = (*pf)(a);  // f(a)
    fx = (*pf)(x);  // f(x)
    fb = (*pf)(b);  // f(b)
    if (fa*fx<0) b = x;  // the root is in [a,x]
    else a = x;          // the root is in [x,b]
  }
  return x;
}

double f(double x)
{ return x*x - 2;
}
