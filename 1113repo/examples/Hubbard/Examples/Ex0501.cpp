//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.1 on page 87
//  The Square Root Function

#include <cmath>     // defines the sqrt() function
#include <iostream>  // defines the cout object
using namespace std;

int main()
{ // tests the sqrt() function:
  for (int x=0; x < 6; x++)
    cout << "\t" << x << "\t" << sqrt(x) << endl;
}
