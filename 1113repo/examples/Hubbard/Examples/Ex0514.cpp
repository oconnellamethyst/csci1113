//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.14 on page 100
//  A boolean leap year function

#include <iostream>
using namespace std;

bool isLeapYear(int);

int main()
{ // tests the isLeapYear() function:
  int n;
  do
  { cin >> n;
    if (isLeapYear(n)) cout << n << " is a leap year.\n";
    else cout << n << " is not a leap year.\n";
  }
  while (n > 1);
}

bool isLeapYear(int y)
{ // returns true ify y is a leap year:
  return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
}
