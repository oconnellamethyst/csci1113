//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.54 on page 390
//  Testing the search() algorithm

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{ char* p="ABCDEFGHIJKLABCDEFGHIJKL";
  char* pp="HIJK";
  char* r = search(p,p+24,pp,pp+4);
  int n = r-p;  // number of characters before pp in p
  cout << "n=r-p=" << n << '\n';
  cout << "*r=" << *r << '\n';
  cout << p << '\n';
  cout << string(n,'-') << pp << string(20-n,'-') << '\n';
  pp = "LMNOp";
  r = search(p,p+24,pp,pp+5);
  n = r-p;
  cout << "n=r-p=" << n << '\n';
  cout << p << '\n';
  cout << string(n,'-') << '\n';
}
