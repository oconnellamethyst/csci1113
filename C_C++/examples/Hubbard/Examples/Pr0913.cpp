//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 9.13 on page 222
//  Converting hexadecimal to decimal numerals

#include <cassert>
#include <iostream>
using namespace std;
string hexadecimal(int n);
int decimal(string);

int main()
{ for (int i=1; i<9999; i++)
  { string s = hexadecimal(i);
    int j = decimal(s);
    if (j == i) cout << (i%100==0?"*":".");
    else cout << i << " = " << s << " = " << j << endl;
  }
}

char c(int);
int v(string,int);

int decimal(string s)
{ int len = s.length();
  assert(len > 0);
  int n=0;
  for (int i=0; i<len; i++)
    n = 16*n + v(s,i);
  return n;
}

string hexadecimal(int n)
{ if (n == 0) return string(1, '0');
  string s;
  while (n > 0)
  { s = string(1, c(n%16)) + s;
    n /= 16;
  }
  return s;
}

char c(int k)
{ assert(k >= 0 && k <= 15);
  if (k < 10) return char(k + '0');
  return char(k - 10 + 'a');
}

int v(string s, int i)
{ char c = s[i];
  assert(c >= '0' && c <= '9' || c >= 'a' && c <= 'f');
  if (c >= '0' && c <= '9') return int(c - '0');
  else return int(c - 'a' + 10);
}
