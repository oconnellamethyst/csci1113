//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.14 on page 374
//  Testing the find_first_of() algorithm

#include <algorithm>
#include <iostream>
using namespace std;
void print(int*,int);

int main()
{ int a[] = {0,1,1,2,3,5,8,13,21,34};
  int b[] = {6,7,8,9,10,11,12,13,14,15};
  int* r = find_first_of(a,a+10,b,b+10);
  cout << "*r=" << *r << '\n';    // this is the element a[i]
  cout << "r-a=" << r-a << '\n';  // this is the index i
}

void print(int* a, int n)
{ cout << "n=" << n << ": {" << a[0];
  for (int i=1; i<n; i++)
    cout << "," << a[i];
  cout << "}\n";
}
