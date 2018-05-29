//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.3 on page 370
//  Testing the adjacent_find() algorithm

#include <algorithm>
#include <iostream>
using namespace std;
void print(int*,int);

int main()
{ int a[] = {0,1,0,1,1,1,0,1,1,0};
  print(a,10);
  int* r = adjacent_find(a,a+10);
  cout << "*r=" << *r << '\n';    // this is the element a[i]
  cout << "r-a=" << r-a << '\n';  // this is the index i
}

void print(int* a, int n)
{ cout << "n=" << n << ": {" << a[0];
  for (int i=1; i<n; i++)
    cout << "," << a[i];
  cout << "}\n";
}
