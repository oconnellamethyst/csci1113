//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
// Example 14.10, page 331
// Using the standard vector<> Class Template

#include <algorithm>
#include <cassert>
#include <iostream>
#include <string>
#include <vector>     // defines the Standard vector<T> class template
using namespace std;
typedef vector<double> Vec;
typedef vector<bool> Bits;
template <class T> void copy(vector<T>&,T*,int);
Vec projection(Vec&,Bits&);
void print(Vec&);

int main()
{ double x[8] = { 22.2, 33.3, 44.4, 55.5, 66.6, 77.7, 88.8, 99.9 };
  Vec v;
  copy(v,x,8);
  bool y[8] = { false, true, false, true, true, true, false, true };
  Bits b;
  copy(b,y,8);
  Vec w = projection(v, b);
  print(v);
  print(w);
}

template <class T>
void copy(vector<T>& v, T* x, int n)
{ vector<T> w;
  for (int i=0; i<n; i++)
    w.push_back(x[i]);
  v = w;
}

Vec projection(Vec& v, Bits& b)
{ int v_size = v.size();
  assert(b.size() >= v_size);
  Vec w;
  for (int i=0; i<v_size; i++)
    if (b[i]) w.push_back(v[i]);
  return w;
}

void print(Vec& v)
{ int v_size = v.size();
  for (int i=0; i<v_size; i++)
    cout << v[i] << "  ";
  cout << endl;
}
