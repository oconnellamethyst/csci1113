//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.2 on page 88
//  Testing a Trigonometry Identity

#include <cmath>     // defines the sqrt() function
#include <iostream>  // defines the cout object
using namespace std;

int main()
{ // tests the identity sin 2x = 2 sin x cos x:
  for (float x=0; x < 2; x += 0.2)
    cout << x << "\t\t" << sin(2*x) << "\t"
         << 2*sin(x)*cos(x) << endl;
 }
