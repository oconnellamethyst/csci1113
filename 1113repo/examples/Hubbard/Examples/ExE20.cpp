//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.20 on page 377
//  Testing the inner_product() algorithm

#include <iostream>
#include <numeric>
using namespace std;

int main()
{ int a[] = {1,3,5,7,9};
  int b[] = {4,3,2,1,0};
  int dot = inner_product(a,a+4,b,1000);
  cout << "dot=" << dot << '\n';
}
