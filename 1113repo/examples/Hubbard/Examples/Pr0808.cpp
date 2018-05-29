//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 8.8 on page 203
//  The strchr() function

#include <iostream>
using namespace std;

char* Strchr(const char* s, int c);
// returns a pointer to the first occurrence of c in s;

void test(char* s, char c);
// tests the Strchr() function;
int main()
{ test("ABCABC",'C');
  test("ABCABC",'D');
}

char* Strchr(const char* s, int c)
{ for (const char* p=s; p && *p; p++)
    if (*p==c) return (char*)p;
  return 0;
}

void test(char* s, char c)
{ char* p=Strchr(s,c);
  cout << "Strchr(\"" << s << "\",\'" << c << "\') = ";
  if (p) cout << "s[" << p - s << "] = " << *p << endl;
  else cout << "NULL" << endl;
}
