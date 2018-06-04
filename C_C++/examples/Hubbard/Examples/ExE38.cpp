//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.38 on page 383
//  Testing the pop_heap() algorithm

#include <algorithm>
#include <iostream>
using namespace std;
void print(int*,int);

int main()
{ int a[] = {44,88,33,77,11,99,66,22,55};
  print(a,9);
  make_heap(a,a+9);
  print(a,9);
  pop_heap(a,a+9);
  print(a,9);
  print(a,8);
}

void print(int* a, int n)
{ cout << "n=" << n << ": {" << a[0];
  for (int i=1; i<n; i++)
    cout << "," << a[i];
  cout << "}\n";
}
