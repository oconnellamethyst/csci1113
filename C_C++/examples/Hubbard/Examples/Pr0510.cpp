//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 5.10 on page 112
//  The Average of at Most Four Function

#include <iostream>  // defines the cin and cout objects
using namespace std;
double ave(double,double=0,double=0,double=0);

double main()
{ cout << "Enter four non-zero numbers: ";
  double w, x, y, z;
  cin >> w >> x >> y >> z;
  cout << "The average of the first one is " << ave(w) << endl;
  cout << "The average of the first two is " << ave(w,x) << endl;
  cout << "The average of the first three is " << ave(w,x,y)<<endl;
  cout << "The average of all four is " << ave(w,x,y,z) << endl;
}

double ave(double x1, double x2, double x3, double x4)
{ double sum = x1 + x2 + x3 + x4;
  if (x2 == 0) return sum;
  if (x3 == 0) return sum/2.0;
  if (x4 == 0) return sum/3.0;
  return sum/4.0;
}
