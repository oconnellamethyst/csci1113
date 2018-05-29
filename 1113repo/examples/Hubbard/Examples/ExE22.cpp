//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.22 on page 377
//  Testing the iter_swap() algorithm

#include <algorithm>
#include <iostream>
using namespace std;
void print(int*,int);

int main()
{ int a[] = {11,22,33,44,55,66,77,88,99};
  int b[] = {10,20,30,40,50,60,70,80,90};
  print(a,9);
  print(b,9);
  iter_swap(a+4,b+7);
  print(a,9);
  print(b,9);
}

void print(int* a, int n)
{ cout << "n=" << n << ": {" << a[0];
  for (int i=1; i<n; i++)
    cout << "," << a[i];
  cout << "}\n";
}
