//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 8.3 on page 186
//  Ordinary input and output of C-Strings

#include <iostream>
using namespace std;

int main()
{ char word[80];
  do
  { cin >> word;
    if (*word) cout << "\t\"" << word << "\"\n";
  } while (*word);
}
