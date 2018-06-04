//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.60 on page 393
//  Testing the sort() algorithm

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{ char* p="GAJBHCHDIEFAGDHC";
  cout << p << '\n';
  sort(p,p+16);
  cout << p << '\n';
}
