//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 8.9 on page 190
//  The cin.peek() function

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
  while (ch = cin.peek())
    if (ch >= '0' && ch <= '9')
    { cin >> n;
      break;
    }
    else cin.get(ch);
  return n;
}
