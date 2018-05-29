//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.27 on page 379
//  Testing the max_element() algorithm

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{ int a[] = {77,22,99,55,11,88,44,33,66};
  const int* p = max_element(a,a+9);
  cout << "*p=" << *p << '\n';
  cout << "p-a=" << p-a << '\n';
}
