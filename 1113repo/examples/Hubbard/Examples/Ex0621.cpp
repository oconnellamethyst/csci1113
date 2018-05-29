//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 6.21 on page 141
//  Processing a three-dimensional array

#include <iostream>  // defines the cin and cout objects
using namespace std;

int numZeros(int a[][4][3], int n1, int n2, int n3);
int main()
{ int a[2][4][3] = { { {5,0,2}, {0,0,9}, {4,1,0}, {7,7,7} },
                     { {3,0,0}, {8,5,0}, {0,0,0}, {2,0,9} }
                   };
  cout << "This array has " << numZeros(a,2,4,3) << " zeros:\n";
}
int numZeros(int a[][4][3], int n1, int n2, int n3)
{ int count = 0;
  for (int i = 0; i < n1; i++)
    for (int j = 0; j < n2; j++)
      for (int k = 0; k < n3; k++)
        if (a[i][j][k] == 0) ++count;
  return count;
}
