//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 5.5 on page 112
//  Testing an Algebraic Identity

#include <iostream>  // defines the cin and cout objects
using namespace std;

int main()
{ double b=2;
  double lg2=log(2);
  for (double x=0; x < 2; x += 0.2)
    cout << pow(b,x) << "\t" << exp(x*lg2) << endl;
}
