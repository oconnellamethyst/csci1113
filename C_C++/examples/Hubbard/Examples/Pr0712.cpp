//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 7.12 on page 176
//  Searching for a character in a C-string

#include <iostream>
using namespace std;
char* chr(char*,char);
void test(char*,char);

int main()
{ char* s = "ABCDEFGABCDABC";
  test(s,'A');
  test(s,'D');
  test(s,'G');
  test(s,'J');
}

char* chr(char* s,char c)
{ for ( ; *s != c; ++s)
    if (*s=='\0') return 0;
  return s;
}

void test(char* s, char c)
{ char* p = chr(s,c);
  if (p) cout << "s = [" << s << "], c = " << c
              << ", p = [" << p << "], p-s = " << p-s << endl;
  else cout << "p = 0";
}
