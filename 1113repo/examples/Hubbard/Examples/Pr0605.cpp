//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.5 on page 143
//  Printing the memory address of an array

#include <iostream>
using namespace std;

int main()
{ // prints the address stored in an array variable:
  unsigned int a[] = { 22, 44, 66, 88 };
  cout << "a   = " << a   << ", *a     = " << *a     << endl;
  cout << "a+1 = " << a+1 << ", *(a+1) = " << *(a+1) << endl;
  cout << "a+2 = " << a+2 << ", *(a+2) = " << *(a+2) << endl;
  cout << "a+3 = " << a+3 << ", *(a+3) = " << *(a+3) << endl;
}
