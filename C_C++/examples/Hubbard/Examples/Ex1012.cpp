//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 10.12 on page 244
//  Pointers to objects

#include <iostream>
using namespace std;

class X
{ public:
    int data;
};

int main()
{ X* p = new X;
  (*p).data = 22;          // equivalent to: p->data = 22;
  cout << "(*p).data = " << (*p).data << " = " << p->data << endl;
  p->data = 44;
  cout << "  p->data = " << (*p).data << " = " << p->data << endl;
}
