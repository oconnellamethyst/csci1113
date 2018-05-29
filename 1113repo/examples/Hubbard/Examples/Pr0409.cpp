//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 4.9 on page 81

#include <iostream>
using namespace std;

int main()
{ int n;
  cout << "Enter a positive integer: ";
  cin >> n;
  int sum=0, i=1;
  do
  { sum += i*i;
  }
  while (i++ < n);
  cout << "The sum of the first " << n << " squares is "
       << sum << endl;
 }
