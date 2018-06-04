//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 7.2 on page 175
//  Searching for an address

#include <iostream>
using namespace std;

int* location(int[],int,int);

int main()
{ int a[8] = {22, 33, 44, 55, 66, 77, 88, 99}, * p=0, n;
  do
  { cin >> n;
    if (p = location(a, 8, n)) cout << p << ", " << *p << endl;
    else cout << n << " was not found.\n";
  } while (n > 0);
}


int* location(int a[], int n, int target)
{ for (int i = 0; i < n; i++)
    if (a[i] == target) return &a[i];
  return NULL;
}
