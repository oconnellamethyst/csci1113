//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 8.19 on page 197
//  The strtok() function

#include <cstring>
#include <iostream>
using namespace std;

int main()
{ // test-driver for the strtok() function:
  char s[] = "Today's date is March 12, 2000.";
  char* p;
  cout << "The string is: [" << s << "]\nIts tokens are:\n";
  p = strtok(s, " ");
  while (p)
  { cout << "\t[" << p << "]\n";
    p = strtok(NULL, " ");
  }
  cout << "Now the string is: [" << s << "]\n";
}
