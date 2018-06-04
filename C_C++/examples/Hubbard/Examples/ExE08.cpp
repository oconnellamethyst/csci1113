//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.8 on page 372
//  Testing the count_if() algorithm

#include <algorithm>
#include <iostream>
using namespace std;
void print(int*,int);

class Odd
{ public:
    bool operator()(int n) { return n%2 ? true : false; }
};

int main()
{ int a[] = {0,1,0,1,1,1,0,1,1,0};
  print(a,10);
  int n = count_if(a,a+10,Odd());
  cout << "n=" << n << '\n';
}

void print(int* a, int n)
{ cout << "n=" << n << ": {" << a[0];
  for (int i=1; i<n; i++)
    cout << "," << a[i];
  cout << "}\n";
}
