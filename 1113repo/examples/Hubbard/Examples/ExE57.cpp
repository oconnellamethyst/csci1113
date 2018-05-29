//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.57 on page 392
//  Testing the set_intersection() algorithm

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{ char* p="ABCDEFGHIJ";
  char* pp="AEIOUXYZ";
  char ppp[16];
  char* r = set_intersection(p,p+10,pp,pp+8,ppp);
  cout << p << '\n';
  cout << pp << '\n';
  *r = 0;  // terminates the ppp string
  cout << ppp << '\n';
}
