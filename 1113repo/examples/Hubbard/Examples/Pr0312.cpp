//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 3.12 on page 51
//  Solving quadratic equations

#include <cmath>  // defines the sqrt() function
#include <iostream>
using namespace std;

int main()
{ // solves the equation a*x*x + b*x + c == 0:
  float a, b, c;
  cout << "Enter coefficients of quadratic equation: ";
  cin >> a >> b >> c;
  if (a == 0)
	  { cout << "This is not a quadratic equation: a == 0\n";
    return 0;
  }
  cout << "The equation is: " << a << "x^2 + " << b
	       << "x + " << c << " = 0\n";
  double d, x1, x2;
  d = b*b - 4*a*c;  // the discriminant
  if (d < 0)
  { cout << "This equation has no real solutions: d < 0\n";
    return 0;
  }
  x1 = (-b + sqrt(d))/(2*a);
  x2 = (-b - sqrt(d))/(2*a);
  cout << "The solutions are: " << x1 << ", " << x2 << endl;
}
