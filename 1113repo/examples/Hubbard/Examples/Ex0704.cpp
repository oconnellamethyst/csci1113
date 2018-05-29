//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 7.4 on page 159
//  Using pointer variables

#include <iostream>
using namespace std;

int main()
{ int n=44;
  cout << "n = " << n << ", &n = " << &n << endl;
  int* pn=&n;  // pn holds the address of n
  cout << "        pn = " << pn << endl;
  cout << "&pn = " << &pn << endl;
}
