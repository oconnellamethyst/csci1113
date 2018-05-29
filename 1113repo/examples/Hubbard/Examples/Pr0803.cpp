//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 8.3 on page 202
//  The strncat() function

#include <iostream>
using namespace std;
char* Strncat(char*, const char*, size_t);

int main()
{ const char* s = "ABCDEFG";
  char* ss = "ZZZZZZZZZZ";
  cout << " s = [" << s << "], ss = [" << ss << "]\n";
  Strncat(ss,s,2);
  cout << " s = [" << s << "], ss = [" << ss << "]\n";
}

char* Strncat(char* s1, const char* s2, size_t n)
{ char* end; for (end=s1; *end; end++)  // find end of s1
    ;
  char* p; for (p=s2; *p && p-s2<n; )
    *end++ = *p++;	
  *end = '\0';
  return s1;
}
