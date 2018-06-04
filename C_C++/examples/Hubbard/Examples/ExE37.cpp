//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.37 on page 383
//  Testing the partition() algorithm

#include <algorithm>
#include <iostream>
using namespace std;
void print(int*,int);

class Odd
{ public:
    bool operator()(int n) { return n%2 ? true : false; }
};

int main()
{ int a[] = {0,1,1,2,3,5,8,13,21,34};
  print(a,10);
  partition(a,a+10,Odd());
  print(a,10);
}

void print(int* a, int n)
{ cout << "n=" << n << ": {" << a[0];
  for (int i=1; i<n; i++)
    cout << "," << a[i];
  cout << "}\n";
}
