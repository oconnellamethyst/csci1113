//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 5.3 on page 112
//  Testing a Trigonometric Identity

#include <iostream>  // defines the cin and cout objects
using namespace std;

int main()
{ for (float x=0; x < 1; x += 0.1)
    cout << cos(2*x) << '\t' << 2*cos(x)*cos(x) - 1 << endl;
}
