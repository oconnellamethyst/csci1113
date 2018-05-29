//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.35 on page 382
//  Testing the partial_sort_copy() algorithm

#include <algorithm>
#include <iostream>
using namespace std;
void print(int*,int);

int main()
{ int a[] = {77,22,99,55,44,88,11,33,66};
  print(a,9);
  int b[3];
  partial_sort_copy(a,a+9,b,b+3);
  print(a,9);
  print(b,3);
}

void print(int* a, int n)
{ cout << "n=" << n << ": {" << a[0];
  for (int i=1; i<n; i++)
    cout << "," << a[i];
  cout << "}\n";
}
