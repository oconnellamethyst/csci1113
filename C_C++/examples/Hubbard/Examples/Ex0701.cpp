//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 7.1 on page 157
//  Printing an address

#include <iostream>
using namespace std;

int main()
{ // prints a variable's value and its address:
  int n=44;
  cout << "n = " << n << endl;    // prints the value of n
  cout << "&n = " << &n << endl;  // prints the address of n
}
