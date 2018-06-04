//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.15 on page 375
//  Testing the find_if() algorithm

#include <algorithm>
#include <iostream>
using namespace std;
void print(int*,int);

class Odd
{ public:
    bool operator()(int n) { return n%2 ? true : false; }
};

int main()
{ int a[] = {2,4,8,16,32,64,128,256,333,512};
  int* r = find_if(a,a+10,Odd());
  cout << "*r=" << *r << '\n';    // this is the element a[i]
  cout << "r-a=" << r-a << '\n';  // this is the index i
  r = find_if(a,a+5,Odd());
  cout << "*r=" << *r << '\n';    // this is the element a[i]
  cout << "r-a=" << r-a << '\n';  // this is the index i
}

void print(int* a, int n)
{ cout << "n=" << n << ": {" << a[0];
  for (int i=1; i<n; i++)
    cout << "," << a[i];
  cout << "}\n";
}
