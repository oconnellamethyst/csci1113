//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 6.18 on page 139
//  The Bubble Sort

#include <iostream>  // defines the cin and cout objects
using namespace std;

typedef float Sequence[];
void sort(Sequence,int);
void print(Sequence,int);

int main()
{ 	Sequence a = {55.5, 22.5, 99.9, 66.6, 44.4, 88.8, 33.3, 77.7};
  print(a,8);
  sort(a,8);
  print(a,8);
}
void sort(Sequence a, int n)
{ for (int i=n-1; i>0; i--)
    for (int j=0; j<i; j++)
      if (a[j] > a[j+1]) swap(a[j],a[j+1]);
}

void print(Sequence a, int n)
{ for (int i=0; i<n-1; i++)
    cout << a[i] << ", ";
  cout << a[n-1] << endl;
}
