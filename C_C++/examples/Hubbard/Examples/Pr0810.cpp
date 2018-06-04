//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 8.10 on page 203
//  A strchr() function

#include <iostream>
using namespace std;

char* Strrchr(const char* s, int c);
// returns a pointer to the last occurrence of c in s;

void test(char* s, char c);
// tests the Strrchr() function;

int main()
{ test("ABCABC",'C');
  test("ABCABC",'D');
}

char* Strrchr(const char* s, int c)
{ const char* pp=0;
  for (const char* p=s; p && *p; p++)
    if (*p==c) pp = p;
  return (char*)pp;
}

void test(char* s, char c)
{ char* p=Strrchr(s,c);
  cout << "Strchr(\"" << s << "\",\'" << c << "\') = ";
  if (p) cout << "s[" << p - s << "] = " << *p << endl;
  else cout << "NULL" << endl;
}
