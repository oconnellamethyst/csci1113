//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 7.11 on page 175
//  Comparing C-strings

#include <iostream>
using namespace std;
int cmp(char*,char*);

int main()
{ char* s="ABC";
  cout << "cmp(\"ABC\",\"ABCD\") = " << cmp("ABC","ABCD") << endl;
  cout << "cmp(\"ABC\",\"AB\") = " << cmp("ABC","AB") << endl;
  cout << "cmp(\"ABC\",\"ABC\") = " << cmp("ABC","ABC") << endl;
  cout << "cmp(\"ABC\",\"ABD\") = " << cmp("ABC","ABD") << endl;
  cout << "cmp(\"ADBC\",\"ABCD\") = " << cmp("ADBC","ABCD") << endl;
  cout << "cmp(\"\",\"ABCD\") = " << cmp("","ABCD") << endl;
  cout << "cmp(\"\",\"\") = " << cmp("","") << endl;
  cout << "cmp(\"ABC\",\"\") = " << cmp("ABC","") << endl;
}

int cmp(char* s1,char* s2)
{ for ( ; *s1 == *s2; s1++, s2++)
    if (*s1=='\0') return 0;
  return ( *s2 > *s1 ? 1 : -1 );
}
