//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.36 on page 382
//  Testing the partial_sum() algorithm

#include <iostream>
#include <numeric>
using namespace std;
void print(int*,int);

int main()
{ int a[] = {0,1,1,2,3,5,8,13,21,34};
  int b[10];
  partial_sum(a,a+10,b);
  print(a,10);
  print(b,10);
}

void print(int* a, int n)
{ cout << "n=" << n << ": {" << a[0];
  for (int i=1; i<n; i++)
    cout << "," << a[i];
  cout << "}\n";
}
