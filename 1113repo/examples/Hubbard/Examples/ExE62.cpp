//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.62 on page 394
//  Testing the swap() algorithm

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{ char* p="ABCDEFGHIJ";
  cout << p << '\n';
  swap(p[2],p[8]);
  cout << p << '\n';
}
