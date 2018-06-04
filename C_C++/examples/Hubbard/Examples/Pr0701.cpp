//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 7.1 on page 175
//  A copy() function for arrays

#include <iostream>
using namespace std;
double* copy(double [], int);
void print(double [], int);

int main()
{ double a[8] = {22.2, 33.3, 44.4, 55.5, 66.6, 77.7, 88.8, 99.9};
  print(a, 8);
  double* b = copy(a, 8);
  a[2] = a[4] = 11.1;
  print(a, 8);
  print(b, 8);
}


double* copy(double a[], int n)
{ double* p = new double[n];
  for (int i = 0; i < n; i++)
    p[i] = a[i];
  return p;
}

void print(double a[], int n)
{ for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;
}
