//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 8.6 on page 202
//  Reverse a string

#include <iostream>
using namespace std;

void reverse(char*);

int main()
{ char string[80];
  cin.getline(string, 80);
  cout << "The string is [" << string << "].\n";
  reverse(string);
  cout << "The string is [" << string << "].\n";
}

void reverse(char* s)
{ char* end, temp;
  for (end = s; *end; end++)
    ;    // find end of s
  while (s < end - 1)
  { temp = *--end;
    *end = *s;
    *s++ = temp;
  }	
}    
