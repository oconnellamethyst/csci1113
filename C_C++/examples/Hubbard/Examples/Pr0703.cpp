//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 7.3 on page 175
//  Converting an array of pointers

#include <iostream>
using namespace std;

float* duplicate(float*[],int);
void print(float [], int);
void print(float* [], int);

int main()
{ float a[8] = {44.4, 77.7, 22.2, 88.8, 66.6, 33.3, 99.9, 55.5};
  print(a, 8);
  float* p[8];
  for (int i = 0; i < 8; i++)
    p[i] = &a[i];  // p[i] points to a[i]
  print(p, 8);
  float* const b = duplicate(p, 8);
  print(b, 8);
}

void print(float a[], int n)
{ for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;
}

void print(float* a[], int n)
{ for (int i = 0; i < n; i++)
    cout << *a[i] << " ";
  cout << endl;
}

float* duplicate(float* p[], int n)
{ float* const b = new float[n];
  for (int i = 0; i < n; i++)
    b[i] = *p[i];
  return b;
}
