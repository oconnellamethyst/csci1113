//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 9.12 on page 222
//  Converting decimal to hexadecimal numerals

#include <cassert>
#include <iostream>
using namespace std;
string hexadecimal(int n);

int main()
{ for (int i=1; i<33; i++)
    cout << i << " = " << hexadecimal(i) << endl;
}

char c(int);

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
