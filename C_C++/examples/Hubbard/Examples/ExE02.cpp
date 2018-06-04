//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.2 on page 370
//  Testing the adjacent_difference() algorithm

#include <iostream>
#include <numeric>
using namespace std;
void print(int*,int);

int main()
{ int a[] = {0,1,1,2,3,5,8,13,21,34};
  print(a,10);
  int b[10];
  adjacent_difference(a,a+10,b);
  print(b,10);
}

void print(int* a, int n)
{ cout << "n=" << n << ": {" << a[0];
  for (int i=1; i<n; i++)
    cout << "," << a[i];
  cout << "}\n";
}
