//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.23 on page 110
//  Using the return statement to terminate a program

#include <iostream>  // defines the cin and cout objects
using namespace std;

int main()
{ // prints the quotient of two input integers:
  int n, d;
  cout << "Enter two integer: ";
  cin >> n >> d;
  if (d == 0) return 0;
  cout << n << "/" << d << " = " << n/d << endl;
}
