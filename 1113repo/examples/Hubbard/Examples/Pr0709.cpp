//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 7.9 on page 175
//  Copying a C-string

#include <iostream>
using namespace std;
void cpy(char*, const char*);

int main()
{ const char* s = "ABCDEFG";
  char* ss = "ZZZZZZZZZZ";
  cout << " s = [" << s << "], ss = [" << ss << "]\n";
  cpy(ss,s);
  cout << " s = [" << s << "], ss = [" << ss << "]\n";
}

void cpy(char* s1, const char* s2)
{ do *s1++ = *s2++;
  while (*s2);
}
