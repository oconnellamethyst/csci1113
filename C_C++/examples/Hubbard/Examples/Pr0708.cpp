//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 7.8 on page 175
//  The length of a C-string

#include <iostream>
using namespace std;
unsigned len(const char*);

int main()
{ const char* s = "ABCDEFG";
  cout << " s = [" << s << "], len(s)=" << len(s) << endl;
}

unsigned len(const char* s)
{ const char* s1=s;
  while (*s1) ++s1;
  return s1 - s;
}
