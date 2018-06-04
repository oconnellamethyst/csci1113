//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.24 on page 378
//  Testing the lower_bound() algorithm

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{ int a[] = {11,22,22,33,44,44,44,55,66};
  int* p = lower_bound(a,a+9,44);
  cout << "*p=" << *p << '\n';
  cout << "p-a=" << p-a << '\n';
}
