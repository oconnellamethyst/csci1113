//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.4 on page 371
//  Testing the binary_search() algorithm

#include <algorithm>
#include <iostream>
using namespace std;
void print(int*,int);

int main()
{ int a[] = {0,1,1,2,3,5,8,13,21,34};
  print(a,10);
  bool found = binary_search(a,a+10,21);
  cout << "found=" << found << '\n';
  found = binary_search(a+2,a+7,21);
  cout << "found=" << found << '\n';
}

void print(int* a, int n)
{ cout << "n=" << n << ": {" << a[0];
  for (int i=1; i<n; i++)
    cout << "," << a[i];
  cout << "}\n";
}
