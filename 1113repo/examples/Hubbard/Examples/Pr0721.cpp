//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 7.21 on page 176
//  Differentiating a function

#include <cmath>     // defines the sqrt() function
#include <iomanip>   // defines the setprecision() function
#include <iostream>  // defines the cout object
using namespace std;

double derivative(double (*)(double), double, double);
const double P=3.141592653589793;
const double P6=P/6;

int main()
{ cout << setprecision(12);  // print 12 significant digits:
  cout << "derivative(sqrt,4,.01)   = " << derivative(sqrt,4,.01) << endl;
  cout << "derivative(sqrt,4,.001)  = " << derivative(sqrt,4,.01) << endl;
  cout << "derivative(sqrt,4,.0001) = " << derivative(sqrt,4,.0001) << endl;
  cout << "The exact derivative     = " << 1.0/4 << endl;
  cout << "derivative(cos,P6,.01)   = " << derivative(cos,P6,.01) << endl;
  cout << "derivative(cos,P6,.001)  = " << derivative(cos,P6,.001) << endl;
  cout << "derivative(cos,P6,.0001) = " << derivative(cos,P6,.0001) << endl;
  cout << "The exact derivative     = " << -1.0/2 << endl;
  cout << "derivative(exp,0,.01)    = " << derivative(exp,0,.01) << endl;
  cout << "derivative(exp,0,.001)   = " << derivative(exp,0,.001) << endl;
  cout << "derivative(exp,0,.0001)  = " << derivative(exp,0,.0001) << endl;
  cout << "The exact derivative     = " << 1 << endl;
  cout << "derivative(log,1,.01)    = " << derivative(log,1,.01) << endl;
  cout << "derivative(log,1,.001)   = " << derivative(log,1,.001) << endl;
  cout << "derivative(log,1,.0001)  = " << derivative(log,1,.0001) << endl;
  cout << "The exact derivative     = " << 1 << endl;
}

double derivative(double (*pf)(double t), double x, double h)
{ //  returns an approximation to the derivative f'(x)
  //  where f() = *pf():
  return ((*pf)(x+h) - (*pf)(x-h))/(2*h);
}
