//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 8.13 on page 193
//  The strlen() function

#include <cstring>
#include <iostream>
using namespace std;

int main()
{ char s[] = "ABCDEFG";
  cout << "strlen(" << s << ") = " << strlen(s) << endl;
  cout << "strlen(\"\") = " << strlen("") << endl;
  char buffer[80];
  cout << "Enter string: ";  cin >> buffer;
  cout << "strlen(" << buffer << ") = " << strlen(buffer) << endl;
}
