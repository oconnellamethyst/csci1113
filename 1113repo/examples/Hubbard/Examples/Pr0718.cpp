//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 7.18 on page 176
//  Shuffling an indirect array

#include <iostream>
using namespace std;
void shuffle(int*[],int);
void print(int*[],int);
const int SIZE=8;

int main()
{ int a[SIZE] = {22, 33, 44, 55, 66, 77, 88, 99};
  int* p[SIZE];
  for (int i=0; i<SIZE; i++)
    p[i] = &a[i];  // p[i] points to a[i]
  print(p,SIZE);
  shuffle(p,SIZE);
  print(p,SIZE);
}

void print(int* p[], int n)
{ for (int i=0; i<n; i++)
    cout << *p[i] << " ";
  cout << endl;
}

void shuffle(int* p[], int n)
{ //  perfect shuffle for an even number of elements:
  int* temp[SIZE];
  for (int i=0; i<n/2; i++)
  { temp[2*i] = p[i];
    temp[2*i+1] = p[n/2+i];
  }
  for (int i=0; i<n; i++)
    p[i] = temp[i];
}
