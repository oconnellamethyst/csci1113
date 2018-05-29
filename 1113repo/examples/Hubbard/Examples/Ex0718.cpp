//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 7.18 on page 171
//  The sum of a function

#include <iostream>  // defines the cout object
using namespace std;

int sum(int (*)(int), int);
int square(int);
int cube(int);

int main()
{ cout << sum(square,4) << endl;    // 1 + 4 + 9 + 16
  cout << sum(cube,4) << endl;      // 1 + 8 + 27 + 64
}

int sum(int (*pf)(int k), int n)
{ // returns the sum f(0) + f(1) + f(2) + . . . + f(n-1):
  int s = 0;
  for (int i = 1; i <= n; i++)
    s += (*pf)(i);
  return s;
}

int square(int k)
{ return k*k;
}

int cube(int k)
{ return k*k*k;
}
