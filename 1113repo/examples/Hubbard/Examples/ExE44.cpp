//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.44 on page 386
//  Testing the remove_copy_if() algorithm

#include <algorithm>
#include <iostream>
using namespace std;

class Blank
{ public:
    bool operator()(char c) { return c == ' '; }
};

int main()
{ char* s="All is flux, nothing is stationary.";  // Heraclitus
  char buffer[80];
  int l = strlen(s);
  int n = count(s,s+l,' ');
  cout << "l=" << l << '\n';
  cout << "n=" << n << '\n';
  char* ss = remove_copy_if(s,s+l,buffer,Blank());
  *ss = 0;  // truncate buffer
  cout << s << '\n';
  cout << buffer << '\n';
  cout << ss-buffer << '\n';
}
