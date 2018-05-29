//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.5 on page 371
//  Testing the copy() algorithm

#include <algorithm>
#include <iostream>
using namespace std;
void print(int*,int);

int main()
{ int a[] = {100,111,122,133,144,155,166,177,188,199};
  print(a,10);
  copy(a+7,a+10,a+2);
  print(a,10);
  int b[3];
  copy(a+7,a+10,b);
  print(b,3);
}

void print(int* a, int n)
{ cout << "n=" << n << ": {" << a[0];
  for (int i=1; i<n; i++)
    cout << "," << a[i];
  cout << "}\n";
}
