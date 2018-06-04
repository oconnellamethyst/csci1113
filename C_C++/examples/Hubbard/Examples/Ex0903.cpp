//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 9.3 on page 215
//  Using the cin.get() function

#include <iostream>
using namespace std;

int main()
{ char c;
  while (cin.get(c))
  { if (c >= 'a' && c <= 'z') c += 'A' - 'a';  // capitalize c
    cout.put(c);
    if (c == '\n') break;
  }
}
