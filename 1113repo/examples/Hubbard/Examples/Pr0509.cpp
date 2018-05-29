//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 5.9 on page 112
//  The Average of Four Function

#include <iostream>  // defines the cin and cout objects
using namespace std;
double ave(double,double,double,double);

double main()
{ cout << "Enter four numbers: ";
  double w, x, y, z;
  cin >> w >> x >> y >> z;
  cout << "Their average is " << ave(w,x,y,z) << endl;
}

double ave(double x1, double x2, double x3, double x4)
{ return (x1 + x2 + x3 + x4)/4.0;
}
