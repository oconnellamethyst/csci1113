//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 8.11 on page 203
//  A strstr() function

#include <iostream>
using namespace std;

char* Strstr(const char* s1, const char* s2);
// returns a pointer to the first occurrence of s2 in s1;

void test(char* s1, char* s2);
// tests the Strstr() function;

int main()
{ test("ABCABC","BC");
  test("ABCABC","CD");
}

char* Strstr(const char* s1, const char* s2)
{ if (*s2==0) return (char*)s1;  // s2 is the empty string
  for ( ; *s1; s1++)
    if (*s1==*s2)
      for (const char* p1=s1, * p2=s2; *p1==*p2; p1++, p2++)
        if (*(p2+1)==0) return (char*)s1;
  return 0;
}

void test(char* s1, char* s2)
{ char* p=Strstr(s1,s2);
  cout << "Strstr(\"" << s1 << "\",\"" << s2 << "\") = ";
  if (p) cout << "s[" << p - s1 << "] = " << *p << endl;
  else cout << "NULL" << endl;
}
