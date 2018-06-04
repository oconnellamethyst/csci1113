//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 8.5 on page 187
//  The cin.getline() function

#include <iostream>
using namespace std;

int main()
{ char clause[80];
  do
  { cin.getline(clause,80,',');
    if (*clause) cout << "\t[" << clause << "]\n";
  } while (*clause);
}
