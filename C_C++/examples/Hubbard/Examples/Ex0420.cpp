//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.20 on page 71
//  Testing a loop invariant

#include <cmath>     // defines pow() and log()
#include <iostream>  // defines cin and cout
#include <iomanip>   // defines setw()
using namespace std;

int main()
{ int n, i=1;
  cout << "Enter a positive integer: ";
  cin >> n;
  long sum=0;
  while (true)
  { if (i > n) break;
    sum += i++;
  }
  cout << "The sum of the first " << n << " integers is " << sum;
}
