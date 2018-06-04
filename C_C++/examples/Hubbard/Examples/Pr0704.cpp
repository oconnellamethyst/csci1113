//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 7.4 on page 175
//  Integrating a function

#include <iostream>
using namespace std;

double riemann(double (*)(double), double, double, int);
double cube(double);

int main()
{ cout << riemann(cube,0,2,10) << endl;
  cout << riemann(cube,0,2,100) << endl;
  cout << riemann(cube,0,2,1000) << endl;
  cout << riemann(cube,0,2,10000) << endl;
}

double riemann(double (*pf)(double t), double a, double b, int n)
{ //  Returns [f(a)*h + f(a+h)*h + f(a+2h)*h + . . . + f(b-h)*h],
  //  where h = (b-a)/n:
  double s = 0, h = (b-a)/n, x;
  int i;
  for (x = a, i = 0; i < n; x += h, i++)
    s += (*pf)(x);
  return s*h;
}

double cube(double t)
{ return t*t*t;
}
