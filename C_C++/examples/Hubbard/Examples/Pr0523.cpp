//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 5.23 on page 114
//  A Function that Tests for Pentangularity

#include <iostream>  // defines the cin and cout objects
using namespace std;
int isPentagonal(int);

int main()
{ const int MAX=40;
  for (int i=0; i<MAX; i++)
    if (isPentagonal(i)) cout << i << " is pentagonal.\n";
    else cout << i << " is not pentagonal.\n";
}

int isPentagonal(int n)
{ int x=0, y=0, dy=1;
  while (y < n)
  { y += dy;
    dy += 3;
  }
  if (y == n) return true;
  else return false;
}
