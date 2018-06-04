//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 7.10 on page 175
//  Copying a C-string

#include <iostream>
using namespace std;
void cat(char*, const char*);

int main()
{ const char* s = "ABCDEFG";
  char* ss = "ZZZZZZZZZZ";
  cout << " s = [" << s << "], ss = [" << ss << "]\n";
  cat(ss,s);
  cout << " s = [" << s << "], ss = [" << ss << "]\n";
}

void cat(char* s1, const char* s2)
{ while (*s1) ++s1;
  do *s1++ = *s2++;
  while (*s2);
}
