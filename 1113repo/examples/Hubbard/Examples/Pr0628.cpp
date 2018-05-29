//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.28 on page 144
//  Computing the inner product of two arrays

#include <iomanip>   // defines the setw() function
#include <iostream>  // defines the cout object
using namespace std;

void outerProduct3(float p[][3], float a[], float b[]);
void print(float a[], int n);
void print(float p[][3]);

int main()
{ // tests the outerProduct3() function:
  float a[] = { 2.2, 3.3, 4.4 };
  float b[] = { 2.0, -1.0, 0.0 };
  float p[3][3];
  print(a,3);
  print(b,3);
  cout << "outerProduct3(p,a,b):" << endl;
  outerProduct3(p,a,b);
  print(p);
}

void print(float a[], int n)
{ for (int i=0; i<n-1; i++)
    cout << a[i] << ", ";
  cout << a[n-1] << endl;
}

void outerProduct3(float p[][3], float a[], float b[])
{ for (int i=0; i<3; i++)
    for (int j=0; j<3; j++)
      p[i][j] = a[i]*b[j];
}

void print(float p[][3])
{ for (int i=0; i<3; i++)
  { for (int j=0; j<3; j++) cout << setw(8) << p[i][j];
    cout << endl;
  }
}
