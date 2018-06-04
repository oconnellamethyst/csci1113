//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.35 on page 146
//  Storing Pascal's Triangle

#include <cassert>   // defines the assert() function
#include <iostream>  // defines the cout object
using namespace std;

void build_pascal(int[][SIZE],int);
void print_pascal(int[][SIZE],int);

int main()
{ int n;
  int p[SIZE][SIZE];
  cout << "n: ";
  cin >> n;
  build_pascal(p,n);
  print_pascal(p,n);
}

void build_pascal(int p[][SIZE], int n)
{ assert(n > 0 && n < SIZE);
  for (int i=0; i<SIZE; i++)
    for (int j=0; j<SIZE; j++)
      if (i>n || j>i) p[i][j] = 0;
      else if (j==0 || j==i) p[i][j] = 1;
      else p[i][j] = p[i-1][j-1] + p[i-1][j];
}

void print_pascal(int p[][SIZE], int n)
{ assert(n > 0 && n < SIZE);
  for (int i=0; i<=n; i++)
  { for (int j=0; j<=n; j++)
      cout << p[i][j] << " ";
    cout << endl;
  }
}
