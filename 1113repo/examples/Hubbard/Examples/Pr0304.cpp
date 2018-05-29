//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 3.4 on page 51
//  Sorting two integers

#include <iostream>
using namespace std;

int main()
{ int x, y;
  cout << "Enter two integers: ";
  cin >> x >> y;
  if (x > y) cout << y << " <= " << x << endl;
  else cout << x << " <= " << y << endl;
}
