//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 5.16 on page 113
//  Pascal's Triangle

#include <iomanip>   // defines the setw() function
#include <iostream>  // defines the cin and cout objects
using namespace std;
long comb(int n, int k);

int main()
{ const m = 13;
  for (int i = 0; i < m; i++)
  { for (int j = 1; j < m-i; j++)
      cout << setw(2) << "";  // print whitespace
    for (int j = 0; j <= i; j++)
      cout << setw(4) << comb(i,j);
    cout << endl;
  }
}

long comb(int n, int k)
{ if (n < 0 || k < 0 || k > n) return 0;
  long c = 1;
  for (int i=1; i<=k; i++, n--)
    c = c*n/i;
  return c;
}
