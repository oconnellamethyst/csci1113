//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example D.9 on page 365
//  Using set functions

#include <iostream>
#include <set>
#include <string>
using namespace std;

typedef set<string> Set;
typedef set<string>::iterator It;
void print(Set);
Set operator+(Set&,Set&);  // union
Set operator*(Set&,Set&);  // intersection
Set operator-(Set&,Set&);  // relative complement

int main()
{ string str1[] = { "A", "B", "C", "D", "E", "F", "G" };
  string str2[] = { "A", "E", "I", "O", "U" };
  Set s1(str1,str1+7);
  Set s2(str2,str2+5);
  print(s1);
  print(s2);
  print(s1+s2);
  print(s1*s2);
  print(s1-s2);
}

Set operator+(Set& s1, Set& s2)
{ Set s(s1);
  s.insert(s2.begin(),s2.end());
  return s;
}

Set operator*(Set& s1, Set& s2)
{ Set s(s1);
  It it = set_intersection(s1.begin(),s1.end(),
                           s2.begin(),s2.end(),s.begin());
  s.erase(it,s.end());
  return s;
}

Set operator-(Set& s1, Set& s2)
{ Set s(s1);
  It it = set_difference(s1.begin(),s1.end(),
                         s2.begin(),s2.end(),s.begin());
  s.erase(it,s.end());
  return s;
}

void print(Set s)
{ cout << "size=" << s.size() << ": {";
  for (It it=s.begin(); it != s.end(); it++)
    if (it == s.begin()) cout << *it;
    else cout << "," << *it;
  cout << "}\n";
}
