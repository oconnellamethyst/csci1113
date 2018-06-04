//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 7.19 on page 176
//  Summing a function with return type double

#include <cmath>     // defines the sqrt() function
#include <iostream>  // defines the cout object
using namespace std;

double sum(double (*)(double), int);

int main()
{ for (int x=0; x<5; x++)
    cout << "    sqrt(" << x << ") = " << sqrt(x)
         << "\nsum(sqrt," << x << ") = " << sum(sqrt,x) << endl;
}

double sum(double (*pf)(double x), int n)
{ // returns the sum f(0) + f(1) + f(2) + . . . + f(n-1)
  // where f() = *pf():
  double sum = 0;
  for (int i = 1; i <= n; i++)
    sum += (*pf)(i);
  return sum;
}
