//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.42 on page 385
//  Testing the remove() algorithm

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{ char* s="All is flux, nothing is stationary.";  // Heraclitus
  int l = strlen(s);
  int n = count(s,s+l,' ');
  cout << "l=" << l << '\n';
  cout << "n=" << n << '\n';
  remove(s,s+l,' ');
  cout << s << '\n';
  s[l-n] = 0;  // truncate s
  cout << s << '\n';
}
