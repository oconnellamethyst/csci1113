//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 5.12 on page 112
//  The Permutation Function

#include <iostream>  // defines the cin and cout objects
using namespace std;
long perm(int n, int k);

int main()
{ for (int i = -1; i < 8; i++)
  { for (int j = -1; j <= i+1; j++)
      cout << " " << perm(i,j);
    cout << endl;
  }
}

long perm(int n, int k)
{ if (n < 0 || k < 0 || k > n) return 0;
  int p = 1;
  for (int i = 1; i <= k; i++, n--)
    p *= n;
  return p;
}
