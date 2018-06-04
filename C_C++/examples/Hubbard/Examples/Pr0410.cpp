//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 4.10 on page 81

#include <iostream>
using namespace std;

int main()
{ int n, d, q, r;
  cout << "Enter numerator: ";
  cin >> n;
  cout << "Enter denominator: ";
  cin >> d;
  for (q = 0, r = n; r >= d; q++)
    r -= d;
  cout << n << " / " << d << " = " << q << endl;
  cout << n << " % " << d << " = " << r << endl;
  cout << "(" << q << ")(" << d << ") + (" << r << ") = "
       << n << endl;
 }
