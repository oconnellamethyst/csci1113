//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 3.8 on page 51
//  Simulating a simple calculator

#include <iostream>
using namespace std;

int main()
{ int x, y;
  char op;
  cout << "Enter two integers: ";
  cin >> x >> y;
  cout << "Enter an operator: ";
  cin >> op;
  switch (op)
  { case '+': cout << x + y << endl;  break;
    case '-': cout << x - y << endl;  break;
    case '*': cout << x * y << endl;  break;
    case '/': cout << x / y << endl;  break;
    case '%': cout << x % y << endl;  break;
  }
}
