//  Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 1.13 on page 11
//  Testing Negative Overflow

#include <iostream>
using namespace std;

int main()
{ // prints the values an overflowing negative short int
  short m=0;
  cout << "m = " << m << endl;
  m -= 10000;  // m should be -10,000
  cout << "m = " << m << endl;
  m -= 10000;  // m should be -20,000
  cout << "m = " << m << endl;
  m -= 10000;  // m should be -30,000
  cout << "m = " << m << endl;
  m -= 10000;  // m should be -40,000
  cout << "m = " << m << endl;
}
