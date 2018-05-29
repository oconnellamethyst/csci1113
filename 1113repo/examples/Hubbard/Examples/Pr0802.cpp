//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 8.2 on page 202
//  The strcpy() function

#include <iostream>
using namespace std;

char* Strcpy(char*, const char*);

int main()
{ const char* s = "ABCDEFG";
  char* ss = "ZZZZZZZZZZ";
  cout << " s = [" << s << "], ss = [" << ss << "]\n";
  Strcpy(ss,s);
  cout << " s = [" << s << "], ss = [" << ss << "]\n";
}

char* Strcpy(char* s1, const char* s2)
{ char* p;
  for (p=s1; *s2; )
    *p++ = *s2++;	
  *p = '\0';
  return s1;
}
