//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.64 on page 394
//  Testing the unique() algorithm

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{ char* s="All is flux, nothing is stationary.";  // Heraclitus
  int len = strlen(s);
  cout << s << '\n';
  sort(s,s+len);
  cout << s << '\n';
  char* ss = unique(s,s+len);
  cout << s << '\n';
  *ss = 0;  // truncate buffer
  cout << s << '\n';
}
