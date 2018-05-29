//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 7.17 on page 176
//  Sorting an indirect array

#include <iostream>
using namespace std;
void sort(float*[],int);
void print(float*[],int);

int main()
{ float a[8] = {6.6, 2.2, 7.7, 4.4, 5.5, 9.9, 3.3, 8.8};
  float* p[8];
  for (int i=0; i<8; i++)
    p[i] = &a[i];  // p[i] points to a[i]
  print(p,8);
  sort(p,8);
  print(p,8);
}

void print(float* p[], int n)
{ for (int i=0; i<n; i++)
    cout << *p[i] << " ";
  cout << endl;
}

void sort(float* p[], int n)
{ // insertion sort:
  for (int i=1; i<n; i++)
  { float x=*p[i];
    int j=i;
    while (j>0 && *p[j-1]>x)
      p[j--] = p[j-1];
    *p[j] = x;
  }
}
