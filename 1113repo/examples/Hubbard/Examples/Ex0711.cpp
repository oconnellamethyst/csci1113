//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 7.11 on page 165
//  Examining the addresses of array elements

#include <iostream>
using namespace std;

int main()
{ short a[] = {22, 33, 44, 55, 66};
  cout << "a = " << a << ", *a = " << *a << endl;
  for (short* p = a; p < a + 5; p++)
    cout << "p = " << p << ", *p = " << *p << endl;
}
