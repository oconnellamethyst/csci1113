//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 9.11 on page 222
//  Converting Roman numerals to Hindu-Arabic numerals

#include <iostream>
using namespace std;
string Roman(int);
int HinduArabic(string);

int main()
{ for (int i=1; i<9999; i++)
  { string s = Roman(i);
    int j = HinduArabic(s);
    if (j == i) cout << (i%100==0?"*":".");
    else cout << i << " = " << s << " = " << HinduArabic(s) << endl;
  }
}

string Roman(int n)
{ int d3 = n/1000;  // the thousands digit
  string s(d3, 'M');
  n %= 1000;
  int d2 = n/100;  // the hundreds digit
  if (d2 == 9) s += "CM";
  else if (d2 >= 5)
  { s += "D";
    s += string(d2-5, 'C');
  }
  else if (d2 == 4) s += "CD";
  else s += string(d2, 'C');
  n %= 100;
  int d1 = n/10;  // the tens digit
  if (d1 == 9) s += "XC";
  else if (d1 >= 5)
  { s += "L";
    s += string(d1-5, 'X');
  }
  else if (d1 == 4) s += "XL";
  else s += string(d1, 'X');
  n %= 10;
  int d0 = n/1;  // the ones digit
  if (d0 == 9) s += "IX";
  else if (d0 >= 5)
  { s += "V";
    s += string(d0-5, 'I');
  }
  else if (d0 == 4) s += "IV";
  else s += string(d0, 'I');
  return s;
}

int v(string,int);

int HinduArabic(string s)
{ int n0=0, n1=0, n=0;
  for (int i=0; i<s.length(); i++)
  { n0 = n1;
    n += n1 = v(s,i);
    if (n1>n0) n -= 2*n0;
  }
  return n;
}

int v(string s, int i)
{ char c = s[i];
  if (c == 'M') return 1000;
  if (c == 'D') return 500;
  if (c == 'C') return 100;
  if (c == 'L') return 50;
  if (c == 'X') return 10;
  if (c == 'V') return 5;
  if (c == 'I') return 1;
  return 0;
}
