//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 8.6 on page 188
//  The cin.get() function

#include <iostream>
using namespace std;

int main()
{ char ch;
  int count = 0;
  while (cin.get(ch))
    if (ch == 'e') ++count;
  cout << count << " e's were counted.\n";
}
