//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.50 on page 389
//  Testing the reverse() algorithm

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{ char* s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << s << '\n';
  reverse(s,s+26);
  cout << s << '\n';
}
