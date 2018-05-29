//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.46 on page 387
//  Testing the replace() algorithm

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{ char* s="All is flux, nothing is stationary.";  // Heraclitus
  int l = strlen(s);
  cout << s << '\n';
  replace(s,s+l,' ','!');
  cout << s << '\n';
}
