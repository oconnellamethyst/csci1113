//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.6 on page 371
//  Testing the copy_backward() algorithm

#include <algorithm>
#include <iostream>
using namespace std;
void print(int*,int);

int main()
{ int a[] = {100,111,122,133,144,155,166,177,188,199};
  print(a,10);
  copy_backward(a+7,a+10,a+5);
  print(a,10);
  int b[3];
  copy_backward(a+7,a+10,b+3);
  print(b,3);
}

void print(int* a, int n)
{ cout << "n=" << n << ": {" << a[0];
  for (int i=1; i<n; i++)
    cout << "," << a[i];
  cout << "}\n";
}
