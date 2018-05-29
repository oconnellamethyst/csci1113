//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Problem 13.1, page 319
//  A min() function template

#include<iostream>
using namespace std;

template<class T>
T min(T x, T y)
{
  return ( x < y ? x : y);
}

#include "Ratio.h"
int main()
{
  cout << "min(22,44) = " << min(22,44) << endl;
  cout << "min(66.66,33.33) = " << min(66.66,33.33) << endl;
  Ratio x(22, 7), y(314,100);
  cout << "min(x,y) = " << min(x,y) << endl;
}
