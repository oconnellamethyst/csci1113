//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 5.22 on page 114
//  A Function that Tests for Squares

#include <iostream>  // defines the cin and cout objects
using namespace std;
int isSquare(int);

int main()
{ const int MAX=20;
  for (int i=0; i<MAX; i++)
    if (isSquare(i)) cout << i << " is square.\n";
    else cout << i << " is not square.\n";
}

int isSquare(int n)
{ int i=0;
  while (i*i<n)
    ++i;
  if (i*i == n) return true;
  else return false;
}
