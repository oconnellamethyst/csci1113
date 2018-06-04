//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 8.9 on page 203
//  A numchr() function

#include <iostream>
using namespace std;

int numchr(const char* s, int c);
// returns the number of occurrences of c in s;

void test(char* s, char c);
// tests the Strchr() function;

int main()
{ test("ABCAB",'B');
  test("ABCAB",'C');
  test("ABCABC",'D');
}

int numchr(const char* s, int c)
{ int n=0;
  for (const char* p=s; p && *p; p++)
    if (*p==c) ++n;
  return n;
}

void test(char* s, char c)
{ int n = numchr(s,c);
  cout << "numchr(\"" << s << "\",\'" << c << "\') = " << n << endl;
}
