//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 8.14 on page 203
//  A strcmp() function

#include <iostream>
using namespace std;

int Strcmp(char* s1, const char* s2);
// compares lexicographically s1 with s2 and returns n,
// where n<0 if s1 < s2, n==0 if s1==s2, and n>0 if s1>s2;

void test(char* s1, char* s2);

int main()
{ test("ABC","ABCD");
  test("ABCD","ABCD");
  test("ABCC","ABCD");
  test("ABD","ABCD");
  
}

int Strcmp(char* s1, const char* s2)
{ for ( ; *s1==*s2; s1++, s2++)
    if (*s1==0) return 0;
  return (int)(*s1-*s2);
}

void test(char* s1, char* s2)
{ cout << "Strcmp(\"" << s1 << "\",\"" << s2 << "\") = "
       << Strcmp(s1,s2) << endl;
}
