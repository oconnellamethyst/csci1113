//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.4 on page 91
//  A Test Driver for the cube() Function

#include <iostream>  // defines the cout object
using namespace std;

int cube(int x);

int main()
{ // tests the cube() function:
  int n=1;
  while (n != 0)
  { cin >> n;
    cout << "\tcube(" << n << ") = " << cube(n) << endl;
  }
}

int cube(int x)
{ // returns cube of x:
  return x*x*x;
}
