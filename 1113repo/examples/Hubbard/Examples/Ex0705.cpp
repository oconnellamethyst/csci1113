//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 7.5 on page 159
//  Dereferencing a pointer

#include <iostream>
using namespace std;

int main()
{ int n=44;
  cout << "n = " << n << ", &n = " << &n << endl;
  int* pn=&n;  // pn holds the address of n
  cout << "        pn = " << pn << endl;
  cout << "&pn = " << &pn << endl;
  cout << "*pn = " << *pn << endl;
}
