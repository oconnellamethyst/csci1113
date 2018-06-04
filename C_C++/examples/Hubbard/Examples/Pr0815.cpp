//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 8.15 on page 203
//  A strncmp() function

#include <iostream>
using namespace std;

int Strncmp(char* s1, const char* s2, size_t n);
// compares lexicographically s1[0,n[ with s2[0,n[ and returns n,
// where n<0 if s1 < s2, n==0 if s1==s2, and n>0 if s1>s2;

void test(char* s1, char* s2, int n);

int main()
{ test("ABC","ABCD",3);
  test("ABC","ABCD",4);
  test("ABCD","ABCD",4);
  test("ABCC","ABCD",4);
  test("ABD","ABCD",2);
  test("ABD","ABCD",3);
  
}

int Strncmp(char* s1, const char* s2, size_t n)
{ for ( ; n>0; s1++, s2++, n--)
    if (*s1!=*s2) return (int)(*s1-*s2);
    else if (*s1==0) return 0;
  return 0;
}

void test(char* s1, char* s2, int n)
{ cout << "Strncmp(\"" << s1 << "\",\"" << s2 << "\"," << n << ") = "
       << Strncmp(s1,s2,n) << endl;
}
