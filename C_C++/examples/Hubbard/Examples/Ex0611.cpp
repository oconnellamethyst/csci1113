//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 6.11 on page 133
//  Printing the memory address of an array

#include <iostream>
using namespace std;

int main()
{ // prints the address stored in an array variable:
  int a[] = { 22, 44, 66, 88 };
  cout << "a = " << a;  // a contains the memory address of a[0]
}

