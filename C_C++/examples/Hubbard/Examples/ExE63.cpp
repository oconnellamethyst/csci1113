//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.63 on page 394
//  Testing the transform() algorithm

#include <algorithm>
#include <iostream>
using namespace std;

char capital(char);

int main()
{ char* s="All is flux, nothing is stationary.";  // Heraclitus
  int len = strlen(s);
  char buffer[80];
  char* ss = transform(s,s+len,buffer,capital);
  *ss = 0;  // truncate buffer
  cout << s << '\n';
  cout << buffer << '\n';
}

char capital(char c)
{ return (isalpha(c) ? toupper(c) : c);
}
