//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example D.7 on page 362
//  Sorting and reversing a list object

#include <iostream>
#include <list>
using namespace std;
typedef list<string> List;
typedef List::iterator It;
void print(List&);

int main()
{ List l;
  l.push_back("Kenya");
  l.push_back("Sudan");
  l.push_back("Egypt");
  l.push_back("Zaire");
  l.push_back("Libya");
  l.push_back("Congo");
  l.push_back("Ghana");
  print(l);
  l.sort();
  print(l);
  l.reverse();
  print(l);
}

void print(List& l)
{ cout << "\n";
  for (It it=l.begin(); it != l.end(); it++)
    cout << *it << "\n";
}
