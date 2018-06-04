//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.47 on page 387
//  Testing the replace_copy() algorithm

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{ char* s="All is flux, nothing is stationary.";  // Heraclitus
  cout << s << '\n';
  int l = strlen(s);
  char buffer[80];
  char* ss = replace_copy(s,s+l,buffer,'n','N');
  *ss = 0;  // truncate buffer for printing
  cout << s << '\n';
  cout << buffer << '\n';
}
