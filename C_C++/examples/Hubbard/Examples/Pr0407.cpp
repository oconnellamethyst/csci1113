//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 4.7 on page 81

#include <iostream>
using namespace std;

int main()
{ int n;
  cout << "Enter a positive integer: ";
  cin >> n;
  int sum=0, i=0;
  while (i++ < n)
    sum += i*i;
  cout << "The sum of the first " << n << " squares is "
       << sum << endl;
 }
