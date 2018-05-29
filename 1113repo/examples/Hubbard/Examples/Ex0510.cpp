//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.10 on page 96
//  The Permutation Function

#include <iostream>  // defines the cout object
using namespace std;

long perm(int,int);
// returns P(n,k), the number of permutations of k from n;

int main()
{ // tests the perm() function:
  for (int i = -1; i < 8; i++)
  { for (int j=-1; j <= i+1; j++)
      cout << " " << perm(i,j);
    cout << endl;
  }
}

long fact(int);

long perm(int n, int k)
{ // returns P(n,k), the number of permutations of k from n:
  if (n < 0 || k < 0 || k > n) return 0;
  return fact(n)/fact(n-k);
}

long fact(int n)
{ // returns n!
  if (n < 0) return 0;
  int f = 1;
  while (n > 1)
    f *= n--;
  return f;
}
