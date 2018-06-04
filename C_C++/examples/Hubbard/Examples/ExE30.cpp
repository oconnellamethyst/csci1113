//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.30 on page 380
//  Testing the min_element() algorithm

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{ int a[] = {77,22,99,55,11,88,44,33,66};
  const int* p = min_element(a,a+9);
  cout << "*p=" << *p << '\n';
  cout << "p-a=" << p-a << '\n';
}
