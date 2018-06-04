//  Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Example 14.1 on page 

#include <iostream>
#include <typeinfo>
using namespace std;
int frequency(vector<int> v, int x);

int main()
{ int a[]={4,7,3,4,8,5,0,9,6,7,4,2,3,1,2,5,6,3,4,2,2,6,0,9,1,5,4,1,4,6,7,4};
  vector<int> v(a,a+32);
  for (int i=0; i<10; i++)
    cout << "frequency(v," << i << ")=" << frequency(v,i) << endl;
}

int frequency(vector<int> v, int x)
{ int n=0;
  for (vector<int>::iterator it=v.begin(); ; it++)
  { it = find(it,v.end(),x);
    if (it==v.end()) return n;
    ++n;
  }
  return n;
}
