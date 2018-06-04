//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.65 on page 395
//  Testing the unique_copy() algorithm

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{ char* s="All is flux, nothing is stationary.";  // Heraclitus
  int len = strlen(s);
  cout << s << '\n';
  sort(s,s+len);
  cout << s << '\n';
  char buffer[80];
  char* ss = unique_copy(s,s+len,buffer);
  *ss = 0;  // truncate buffer for printing
  cout << s << '\n';
  cout << buffer << '\n';
}
