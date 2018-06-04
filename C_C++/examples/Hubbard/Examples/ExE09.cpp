//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.9 on page 372
//  Testing the equal() algorithm

#include <algorithm>
#include <iostream>
using namespace std;
void print(int*,int);

int main()
{ int a[] = {0,1,0,1,1,1,0,1,1,0};
  int b[] = {0,1,0,0,1,1,0,1,0,0};
  print(a,10);
  print(b,10);
  cout << "equal(a,a+10,b)=" << equal(a,a+10,b) << '\n';
  cout << "equal(a+1,a+4,a+5)=" << equal(a+1,a+4,a+5) << '\n';
}

void print(int* a, int n)
{ cout << "n=" << n << ": {" << a[0];
  for (int i=1; i<n; i++)
    cout << "," << a[i];
  cout << "}\n";
}
