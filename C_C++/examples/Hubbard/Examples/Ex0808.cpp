//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 8.8 on page 189
//  The cin.putback() and cin.ignore() functions

#include <iostream>
using namespace std;

int nextInt();

int main()
{ int m = nextInt(), n = nextInt();
  cin.ignore(80,'\n');               //  ignore rest of input line
  cout << m << " + " << n << " = " << m+n << endl;
}

int nextInt()
{ char ch;
  int n;
  while (cin.get(ch))
    if (ch >= '0' && ch <= '9')  //  next character is a digit
    { cin.putback(ch);           //  put it back so it can be
      cin >> n;                  //  read as a complete int
      break;
    }
  return n;
}
