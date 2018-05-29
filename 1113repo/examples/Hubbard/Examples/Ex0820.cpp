//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 8.20 on page 199
//  The strpbrk() function

#include <cstring>
#include <iostream>
using namespace std;

int main()
{ char s[] = "The Mississippi is a long river.";
  cout << "s = \"" << s << "\"\n";
  char* p = strpbrk(s, "nopqr");
  cout << "strpbrk(s, \"nopqr\") points to s[" << p - s << "].\n";
  p = strpbrk(s, "NOPQR");
  if (p == NULL) cout << "strpbrk(s, \"NOPQR\") returns NULL.\n";
}
