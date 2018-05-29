//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 8.2 on page 185
//  C-Strings are terminated with the NUL character

#include <iostream>
using namespace std;

int main()
{ char s[] = "ABCD";
  for (int i = 0; i < 5; i++)
    cout << "s[" << i << "] = '" << s[i] << "'\n";
}
