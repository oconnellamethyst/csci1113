//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 8.12 on page 203
//  A strncpy() function

#include <iostream>
using namespace std;

char* Strncpy(char* s1, const char* s2, size_t n);
// copies s2[0..n[ into s1[0..n[;

void test(char* s1, char* s2, int n);
// tests the Strncpy() function;

int main()
{ test("ABCDEFG","XYZ",0);
  test("ABCDEFG","XYZ",2);
  test("ABCDEFG","XYZ",4);
  test("ABCDEFG","",2);
  test("AB","XYZ",4);
  test("","XYZ",2);
  test("","XYZ",4);
}

char* Strncpy(char* s1, const char* s2, size_t n)
{ char* p=s1;
  for ( ; n>0 && *s2; n--)
    *p++ = *s2++;
  for ( ; n>0; n--)
    *p++ = 0;
  return s1;
}

void test(char* s1, char* s2, int n)
{ string s=s1;
  char* p=Strncpy(s1,s2,n);
  cout << "Strncpy(\"" << s << "\",\"" << s2 << "\"," << n << "):\t";
  if (p) cout << "s = " << s1 << endl;
  else cout << "NULL" << endl;
}
