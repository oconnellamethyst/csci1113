//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 7.24 on page 176
//  Integrating a function

#include <cmath>     // defines the sqrt() function
#include <iostream>  // defines the cout object
using namespace std;
const double E=2.718281828459045;
const double P=3.141592653589793;
const double P2=P/2;

double trap(double(*)(double),double,double,int);

int main()
{ cout << "trap(sqrt,1,4,100)   = " << trap(sqrt,1,4,100) << endl;
  cout << "trap(sqrt,1,4,1000)  = " << trap(sqrt,1,4,1000) << endl;
  cout << "trap(sqrt,1,4,10000) = " << trap(sqrt,1,4,10000) << endl;
  cout << "The exact integral   = " << 14.0/3 << endl;
  cout << "trap(cos,0,P2,100)   = " << trap(cos,0,P2,100) << endl;
  cout << "trap(cos,0,P2,1000)  = " << trap(cos,0,P2,1000) << endl;
  cout << "trap(cos,0,P2,10000) = " << trap(cos,0,P2,10000) << endl;
  cout << "The exact integral   = " << 1 << endl;
  cout << "trap(exp,0,1,100)    = " << trap(exp,0,1,100) << endl;
  cout << "trap(exp,0,1,1000)   = " << trap(exp,0,1,1000) << endl;
  cout << "trap(exp,0,1,10000)  = " << trap(exp,0,1,10000) << endl;
  cout << "The exact integral   = " << E - 1 << endl;
  cout << "trap(log,1,E,100)    = " << trap(log,1,E,100) << endl;
  cout << "trap(log,1,E,1000)   = " << trap(log,1,E,1000) << endl;
  cout << "trap(log,1,E,10000)  = " << trap(log,1,E,10000) << endl;
  cout << "The exact integral   = " << 1 << endl;
}

double trap(double (*pf)(double t), double a, double b, int n)
{ //  implements the Trapezoidal Rule for numerical integration;
  //  eturns [f(a) + 2*f(a+h) + 2*f(a+2h) + . . . + f(b-h)]*h/2,
  //  where f() = *pf() and h = (b-a)/n:
  double sum = (*pf)(a)+(*pf)(b), h=(b-a)/n, x;
  int i;
  for (x=a, i=1; i<n; x+=h, i++)
    sum += 2*(*pf)(x);
  return sum*h/2;
}
