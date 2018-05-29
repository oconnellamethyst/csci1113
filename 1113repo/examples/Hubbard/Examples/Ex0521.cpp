//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.21 on page 108
//  Nested and parallel scopes

#include <iostream>  // defines the cin and cout objects
using namespace std;

void f();    // f() is global
void g();    // g() is global
int x = 11;  // this x is global

int main()
{ int x = 22;
  { int x = 33;
    cout << "In block inside main(): x = " << x << endl;
  }                                    // end scope of internal block
  cout << "In main(): x = " << x << endl;
  cout << "In main(): ::x = " << ::x << endl;    // accesses global x
  f();
  g();
}                                              // end scope of main()

void f()
{ int x = 44;
  cout << "In f(): x = " << x << endl;
}                                                 // end scope of f()

void g()
{ cout << "In g(): x = " << x << endl;
}
