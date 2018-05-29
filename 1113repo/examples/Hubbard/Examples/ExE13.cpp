//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.13 on page 374
//  Testing the find_end() algorithm

#include <algorithm>
#include <iostream>
using namespace std;
void print(int*,int);

int main()
{ int a[] = {0,1,0,1,1,1,0,1,1,0};
  int b[] = {1,0,1,1,1};
  int* r = find_end(a,a+10,b,b+5);  // search for 10111 in a
  cout << "*r=" << *r << '\n';      // this is the element a[i]
  cout << "r-a=" << r-a << '\n';    // this is the index i
  r = find_end(a,a+10,b,b+4);       // search for 1011 in a
  cout << "*r=" << *r << '\n';
  cout << "r-a=" << r-a << '\n';
}

void print(int* a, int n)
{ cout << "n=" << n << ": {" << a[0];
  for (int i=1; i<n; i++)
    cout << "," << a[i];
  cout << "}\n";
}
