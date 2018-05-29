//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 5.15 on page 113
//  The Combination Function

#include <iostream>  // defines the cin and cout objects
using namespace std;
long comb(int n, int k);

int main()
{ for (int i = -1; i < 9; i++)
  { for (int j = -1; j <= i+1; j++)
      cout << " " << comb(i,j);
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
