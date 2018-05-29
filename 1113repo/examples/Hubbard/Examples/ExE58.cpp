//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.58 on page 392
//  Testing the set_symmetric_difference() algorithm

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{ char* p="ABCDEFGHIJ";
  char* pp="AEIOUXYZ";
  char ppp[16];
  char* qqq = set_symmetric_difference(p,p+10,pp,pp+8,ppp);
  cout << p << '\n';
  cout << pp << '\n';
  *qqq = 0;  // terminates the ppp string
  cout << ppp << '\n';
}
