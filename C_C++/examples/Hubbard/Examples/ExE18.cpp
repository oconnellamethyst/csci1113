//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.18 on page 376
//  Testing the generate_n() algorithm

#include <algorithm>
#include <iostream>
using namespace std;
long fibonacci();
void print(int*,int);

int main()
{ int a[10]={0};
  generate_n(a,10,fibonacci);
  print(a,10);
}

long fibonacci()
{ static int f1=0, f2=1;
  int f0=f1;
  f1 = f2;
  f2 += f0;
  return f0;
}

void print(int* a, int n)
{ cout << "n=" << n << ": {" << a[0];
  for (int i=1; i<n; i++)
    cout << "," << a[i];
  cout << "}\n";
}
