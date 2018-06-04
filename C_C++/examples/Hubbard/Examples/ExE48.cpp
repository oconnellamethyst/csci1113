//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.48 on page 388
//  Testing the replace_copy_if() algorithm

#include <algorithm>
#include <iostream>
using namespace std;

class Blank
{ public:
    bool operator()(char c) { return c == ' '; }
};

int main()
{ char* s="All is flux, nothing is stationary.";  // Heraclitus
  int l = strlen(s);
  char buffer[80];
  cout << s << '\n';
  char* ss = replace_copy_if(s,s+l,buffer,Blank(),'!');
  *ss = 0;  // truncate buffer
  cout << s << '\n';
  cout << buffer << '\n';
}
