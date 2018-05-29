//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 7.6 on page 160
//  Using pointers to pointers

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
  int** ppn=&pn;  // ppn holds the address of pn
  cout << "  ppn = " << ppn << endl;
  cout << " &ppn = " << &ppn << endl;
  cout << " *ppn = " << *ppn << endl;
  cout << "**ppn = " << **ppn << endl;
}
