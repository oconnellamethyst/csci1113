//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 5.4 on page 112
//  Testing a Trigonometric Identity

#include <iostream>  // defines the cin and cout objects
using namespace std;

int main()
{ for (double x=0; x < 2; x += 0.2)
  { double s=sin(x);
    double c=cos(x);
    cout << s*s << "\t" << c*c << "\t" << s*s+c*c << endl;
  }
}
