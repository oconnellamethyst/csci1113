//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 5.21 on page 114
//  A Function that Tests for Triangularity

#include <iostream>  // defines the cin and cout objects
using namespace std;
int isTriangular(int);

int main()
{ const int MAX=25;
  for (int i=0; i<MAX; i++)
    if (isTriangular(i)) cout << i << " is triangular.\n";
    else cout << i << " is not triangular.\n";
}

int isTriangular(int n)
{ int x=0, y=0, dy=1;
  while (y < n)
    y += dy++;
  if (y == n) return true;
  else return false;
}
