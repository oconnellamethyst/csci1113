//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 3.13 on page 51
//  Summing the digits of an integer

#include <iostream>
using namespace std;

int main()
{ int n, sum;
  cout << "Enter a six-digit integer: ";
  cin >> n;
  sum = n%10 + n/10%10 + n/100%10 + n/1000%10 + n/10000%10
             + n/100000;
  cout << "The sum of the digits of " << n << " is " << sum <<endl;
}
