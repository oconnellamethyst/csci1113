//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.61 on page 393
//  Testing the sort_heap() algorithm

#include <algorithm>
#include <iostream>
using namespace std;
void print(int*,int);

int main()
{ int a[] = {66,88,44,77,33,55,11,99,22};
  print(a,9);
  make_heap(a,a+9);
  print(a,9);
  sort_heap(a,a+9);
  print(a,9);
}

void print(int* a, int n)
{ cout << "n=" << n << ": {" << a[0];
  for (int i=1; i<n; i++)
    cout << "," << a[i];
  cout << "}\n";
}
