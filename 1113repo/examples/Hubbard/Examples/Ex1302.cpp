//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Example 13.2, page 301
//  The Bubble Sort Template

#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

template <class T>
void sort(T* v, int n)
{ for (int i=1; i<n; i++)
    for (int j=0; j<n-i; j++)
      if (v[j] > v[j+1]) swap(v[j], v[j+1]);
}

template <class T>
void print(T* v, int n)
{ for (int i=0; i<n; i++)
    cout << " " << v[i];
  cout <<  endl;
}

int main()
{ short a[9] = {55, 33, 88, 11, 44, 99, 77, 22, 66};
  print(a,9);
  sort(a,9);
  print(a,9);
  string s[7] = {"Tom", "Hal", "Dan", "Bob", "Sue", "Ann", "Gus"};
  print(s,7);
  sort(s,7);
  print(s,7);
}
