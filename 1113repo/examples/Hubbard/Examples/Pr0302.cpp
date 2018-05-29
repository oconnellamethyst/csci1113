//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 3.2 on page 51
//  The minimum of four integers

#include <iostream>
using namespace std;

int main()
{ // finds the minimum of four input numbers:
  int n1, n2, n3, n4;
  cout << "Enter four integers: ";
  cin >> n1 >> n2 >> n3 >> n4;
  int min=n1;              // now min <= n1
  if (n2 < min) min = n2;  // now min <= n1, n2
  if (n3 < min) min = n3;  // now min <= n1, n2, n3
  if (n4 < min) min = n4;  // now min <= n1, n2, n3, n4
  cout << "Their minimum is " << min << endl;
}
