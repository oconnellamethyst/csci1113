//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 5.14 on page 113
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

long perm(int,int);
long fact(int);

long comb(int n, int k)
{ if (n < 0 || k < 0 || k > n) return 0;
  return perm(n,k)/fact(k);
}

long perm(int n, int k)
{ // returns the number of permutations of k from n:
  if (n < 0 || k < 0 || k > n) return 0;
  int p = 1;
  for (int i = 1; i <= k; i++, n--)
    p *= n;
  return p;
}

long fact(int n)
{ // returns n factorial: n! = 1*2*3*...*n:
  if (n < 2) return 1;
  long f=1;
  for (int i=2; i <= n; i++)
    f *= i;
  return f;
}
