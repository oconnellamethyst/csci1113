//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 9.14 on page 222
//  Reversing a string

#include <iostream>
using namespace std;
void reverse(string&);

int main()
{ string s="ABCDEFG";
  cout << s << endl;
  reverse(s);
  cout << s << endl;
  s = "";
  cout << s << endl;
  reverse(s);
  cout << s << endl;  
  s = "WXYZ";
  cout << s << endl;
  reverse(s);
  cout << s << endl;
}

void reverse(string& s)
{ string temp = s;
  int len = s.length();
  for (int i=0; i<len; i++)
    s[i] = temp[len-i-1];
}
