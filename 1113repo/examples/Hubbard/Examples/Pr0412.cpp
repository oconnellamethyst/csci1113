//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 4.12 on page 81

#include <iostream>
using namespace std;

int main()
{ 	const double TOLERANCE = 5e-8;
  double x = 2.0;
  while (fabs(x*x - 2.0) > TOLERANCE)
  { cout << x << endl;
    x = (x + 2.0/x)/2.0;  // average of x and 2/x
  }
  cout << "x = " << x << ", x*x = " << x*x << endl;
}
