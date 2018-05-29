//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 8.14 on page 194
//  The strchr(), strrchr(), and strstr() functions

#include <cstring>
#include <iostream>
using namespace std;

int main()
{ char s[] = "The Mississippi is a long river.";
  cout << "s = \"" << s << "\"\n";
  char* p = strchr(s, ' ');
  cout << "strchr(s, ' ') points to s[" << p - s << "].\n";
  p = strchr(s, 's');
  cout << "strchr(s, 's') points to s[" << p - s << "].\n";
  p = strrchr(s, 's');
  cout << "strrchr(s, 's') points to s[" << p - s << "].\n";
  p = strstr(s, "is");
  cout << "strstr(s, \"is\") points to s[" << p - s << "].\n";
  p = strstr(s, "isi");
  if (p == NULL) cout << "strstr(s, \"isi\") returns NULL\n";
}
