//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.49 on page 388
//  Testing the replace_if() algorithm

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
  cout << s << '\n';
  replace_if(s,s+l,Blank(),'!');
  cout << s << '\n';
}
