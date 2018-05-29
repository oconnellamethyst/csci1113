//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.19 on page 376
//  Testing the includes() algorithm

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{ int a[] = {0,1,1,2,3,5,8,13,21,34};
  int b[] = {0,1,2,3,4};
  bool found = includes(a,a+10,b,b+5);
  cout << "found=" << found << '\n';
  found = includes(a,a+10,b,b+4);
  cout << "found=" << found << '\n';
}
