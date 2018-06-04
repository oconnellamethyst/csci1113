//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 8.13 on page 203
//  A strcat() function

#include <iostream>
using namespace std;

char* Strcat(char* s1, const char* s2);
// appends s2 to s1;

int main()
{ char* s=strcat("ABCDEFG","XYZ");
  if (s) cout << "s = " << s << endl;
  else cout << "NULL" << endl;
}

char* Strcat(char* s1, const char* s2)
{ char* p=s1;
  for ( ; *p; p++)
    ;
  for ( ; *s2; p++, s2++)
    *p = *s2;
  *p = 0;
  return s1;
}

