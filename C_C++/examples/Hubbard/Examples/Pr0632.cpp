//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.32 on page 146
//  Computing the standard deviation

#include <cassert>   // defines the assert() function
#include <iostream>  // defines the cout object
#include <cmath>     // defines the sqrt() function
using namespace std;

double stdev(double[], int);
void print(double[], int);

int main()
{ // tests the stdev() function:
  double x[] = { 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
  print(x,8);
  cout << "stdev(x,2) = " << stdev(x,2) << endl;
  cout << "stdev(x,4) = " << stdev(x,3) << endl;
  cout << "stdev(x,8) = " << stdev(x,8) << endl;
}

double stdev(double a[], int n)
{ assert(n > 1);
  double sum=0;
  for (int i=0; i<n; i++)
    sum += a[i];
  double mean = sum/n;  
  sum=0;
  double deviation;
  for (int i=0; i<n; i++)
  { deviation = a[i] - mean;
    sum += deviation*deviation;
  }
  return sqrt(sum/(n-1));  
}

void print(double x[], int n)
{ for (int i=0; i<n-1; i++)
    cout << x[i] << ", ";
  cout << x[n-1] << endl;
}
