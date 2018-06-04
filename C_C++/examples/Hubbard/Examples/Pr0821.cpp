//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 8.21 on page 203
//  Capitalizing a line of text

#include <iostream>
using namespace std;

void capitalize(char*);
// changes all lowercase letters in s to uppercase

int main()
{ char *line = new char[81];
  cout << "Enter line of text below:" << endl;
  cin.getline(line,80);
  cout << "Before capitalize(line), line:\n\"" << line << '\"' << endl;
  capitalize(line);
  cout << "After capitalize(line), line:\n\"" << line << '\"' << endl;
}

void capitalize(char* s)
{ if (s == NULL) return;
  for (char* p = s; *p; p++)
    if (*p>='a' && *p<='z') *p = (char)(*p-'a'+'A');
}
