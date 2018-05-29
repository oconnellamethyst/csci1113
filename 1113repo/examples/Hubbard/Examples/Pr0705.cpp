//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 7.5 on page 175
//  Differentiating a function

#include <cmath>     // defines the sqrt() function
#include <iostream>  // defines the cout object
using namespace std;

double derivative(double (*)(double), double, double);
double cube(double);

int main()
{ cout << derivative(cube, 1, 0.1) << endl;
  cout << derivative(cube, 1, 0.01) << endl;
  cout << derivative(cube, 1, 0.001) << endl;
  cout << derivative(sqrt, 1, 0.1) << endl;
  cout << derivative(sqrt, 1, 0.01) << endl;
  cout << derivative(sqrt, 1, 0.001) << endl;
}

double derivative(double (*pf)(double t), double x, double h)
{ //  returns an approximation to the derivative f'(x)
  //  where f() = *pf():
  return ((*pf)(x+h) - (*pf)(x-h))/(2*h);
}

double cube(double t)
{ return t*t*t;
}
