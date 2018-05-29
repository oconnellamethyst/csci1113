//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 7.14 on page 176
//  Changing signs in an indirect array

#include <iostream>
using namespace std;

void abs(float*[],int);
void print(float* [], int);

int main()
{ float a[8] = {1.1, -2.2, 3.3, -4.4, 5.5, -6.6, 7.7, -8.8};
  float* p[8];
  for (int i = 0; i < 8; i++)
    p[i] = &a[i];  // p[i] points to a[i]
  print(p,8);
  abs(p,8);
  print(p,8);
}

void print(float* a[], int n)
{ for (int i = 0; i < n; i++)
    cout << *a[i] << " ";
  cout << endl;
}

void abs(float* p[], int n)
{ for (int i=0; i<n; i++)
    if (*p[i] < 0) *p[i] = -*p[i];
}
