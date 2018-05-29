//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 7.13 on page 176
//  Summing an indirect array

#include <iostream>
using namespace std;

float sum(float*[],int);
void print(float* [], int);

int main()
{ float a[8] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8};
  float* p[8];
  for (int i = 0; i < 8; i++)
    p[i] = &a[i];  // p[i] points to a[i]
  print(p, 8);
  for (int n=0; n<8; n++)
    cout << "sum(p," << n << ") = " << sum(p,n) << endl;
}

void print(float* a[], int n)
{ for (int i = 0; i < n; i++)
    cout << *a[i] << " ";
  cout << endl;
}

float sum(float* p[], int n)
{ float sum=0.0;
  for (int i=0; i<n; i++)
    sum += *p[i];
  return sum;
}
