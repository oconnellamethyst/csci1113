//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.1 on page 370
//  Testing the accumulate() algorithm

#include <iostream>
#include <numeric>
using namespace std;

int main()
{ int a[] = {0,1,1,2,3,5,8,13,21,34};
  int sum = accumulate(a,a+10,1000);
  cout << "sum=" << sum << '\n';
}
