//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 3.3 on page 51
//  Using the else if construct

#include <iostream>
using namespace std;

int main()
{ // finds the median of three input numbers:
  int n1, n2, n3;
  cout << "Enter three integers: ";
  cin >> n1 >> n2 >> n3;
  cout << "Their median is ";
  if (n1 < n2)
    if (n2 < n3) cout << n2;       // n1 <  n2 <  n3
    else if (n1 < n3) cout << n3;  // n1 <  n3 <= n2
    else cout << n1;               // n3 <= n1 <  n2
  else if (n1 < n3) cout << n1;    // n2 <= n1 <  n3
  else if (n2 < n3) cout << n2;    // n2 <  n3 <= n1
  else cout << n3;                 // n3 <= n2 <= n1
}
