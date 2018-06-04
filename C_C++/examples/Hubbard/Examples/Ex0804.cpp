//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 8.4 on page 187
//  The cin.getline() function

#include <iostream>
using namespace std;

int main()
{ char line[80];
  do
  { cin.getline(line, 80);
    if (*line) cout << "\t[" << line << "]\n";
  } while (*line);
}
