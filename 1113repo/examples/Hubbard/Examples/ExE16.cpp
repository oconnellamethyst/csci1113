//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.16 on page 375
//  Testing the for_each() algorithm

#include <algorithm>
#include <iostream>
using namespace std;
void print(int);

int main()
{ int a[] = {0,1,1,2,3,5,8,13,21,34};
  for_each(a,a+10,print);
}

void print(int x)
{ cout << x << " ";
}
