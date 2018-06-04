//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 8.7 on page 188
//  The cout.put() function

#include <iostream>
using namespace std;

int main()
{ char ch, pre = '\0';
  while (cin.get(ch))
  { if (pre == ' ' || pre == '\n') cout.put(char(toupper(ch)));
    else cout.put(ch);
    pre = ch;
  }
}
