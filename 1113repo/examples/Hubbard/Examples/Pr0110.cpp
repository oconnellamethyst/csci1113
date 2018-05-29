//  Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 1.10 on page 10
//  Printing Values of Arithmetic Expressions

#include <iostream>
using namespace std;

int main()
{ // prints the results of arithmetic operators
  int m = 60, n = 7;
  cout << "The integers are " << m << " and " << n << endl;
  cout << "Their sum is        " << (m + n) << endl;
  cout << "Their difference is " << (m - n) << endl;
  cout << "Their product is    " << (m * n) << endl;
  cout << "Their quotient is   " << (m / n) << endl;
  cout << "Their remainder is  " << (m % n) << endl;
}
