//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.55 on page 391
//  Testing the search_n() algorithm

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{ char* p="0010111001111110";
  char* r = search_n(p,p+16,3,'1');
  int m = r-p;  // number of characters before the substring in p
  cout << "m=r-p=" << m << '\n';
  cout << p << '\n';
  cout << string(m,'-') << string(3,'1') << string(13-m,'-') << '\n';
  r = search_n(p,p+16,4,'1');
  m = r-p;  // number of characters before substring in p
  cout << "m=r-p=" << m << '\n';
  cout << p << '\n';
  cout << string(m,'-') << string(4,'1') << string(12-m,'-') << '\n';
}
