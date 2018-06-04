//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example D.1 on page 355
//  Using an iterator on a vector object

#include <iostream>
#include <vector>
using namespace std;
typedef vector<int>::iterator It;

int main()
{ vector<int> v(4);
  for (int i=0; i<4; i++)
    v[i] = 222*i + 333;
  cout << "Using the iterator it in a for loop:\n";
  for (It it=v.begin(); it!=v.end(); it++)
    cout << "\t*it=" << *it << "\n";
  cout << "Using the iterator p in a while loop:\n";
  It p=v.begin();
  while(p!=v.end())
    cout << "\t*p++=" << *p++ << "\n";
}
