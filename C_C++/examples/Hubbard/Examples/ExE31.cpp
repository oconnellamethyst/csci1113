//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.31 on page 380
//  Testing the mismatch() algorithm

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{ char* s1="Aphrodite, Apollo, Ares, Artemis, Athena";
  char* s2="Aphrodite, Apallo, Ares, Artimis, Athens";
  int n=strlen(s1);
  cout << "n=" << n << '\n';
  pair<char*,char*> x = mismatch(s1,s1+n,s2);
  char* p1 = x.first;
  char* p2 = x.second;
  cout << "*p1=" << *p1 << ", *p2=" << *p2 << '\n';
  cout << "p1-s1=" << p1-s1 << '\n';
}
