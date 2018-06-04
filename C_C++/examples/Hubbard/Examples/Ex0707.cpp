//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 7.7 on page 160
//  Dereferencing pointers

#include <iostream>
using namespace std;

int main()
{ int n=44;
  cout << "    n = " << n << endl;
  cout << "   &n = " << &n << endl;
  int* pn=&n;  // pn holds the address of n
  cout << "   pn = " << pn << endl;
  cout << "  &pn = " << &pn << endl;
  cout << "  *pn = " << *pn << endl;
  int nn=*pn;  // nnn is a duplicate of n
  cout << "   nn = " << nn << endl;
  cout << "  &nn = " << &nn << endl;
  int& rpn=*pn;  // rpn is a reference for n
  cout << "  rpn = " << rpn << endl;
  cout << " &rpn = " << &rpn << endl;
}
