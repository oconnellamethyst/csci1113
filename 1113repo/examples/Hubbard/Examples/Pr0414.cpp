//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 4.14 on page 81

#include <iostream>
using namespace std;

int main()
{ 	int m, n, r;
  cout << "Enter two positive integers: ";
  cin >> m >> n;
  if (m < n) { int temp = m; m = n; n = temp; }    // make m >= n
  cout << "The g.c.d. of " << m << " and " << n << " is ";
  while (n > 0)
  { r = m % n;
    m = n;
    n = r;
  }
  cout << m << endl;
}
