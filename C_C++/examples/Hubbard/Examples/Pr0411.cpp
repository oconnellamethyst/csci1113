//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 4.11 on page 81

#include <iostream>
using namespace std;

int main()
{ long m, d, n = 0;
  cout << "Enter a positive integer: ";
  cin >> m;
  while (m > 0)
  { d = m % 10;    // d will be the right-most digit of m
    m /= 10;       // then remove that digit from m
    n = 10*n + d;  // and append that digit to n
  }
  cout << "The reverse is " << n << endl;
}
