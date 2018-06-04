//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.33 on page 146
//  Computing Z-scores

#include <cassert>   // defines the assert() function
#include <iostream>  // defines the cout object
using namespace std;
void print(double[],int);
double mean(double[],int);
double stdev(double[],int);  // from Problem 6.32

int main()
{ double x[] = { 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
  int n=8;
  print(x,n);
  double m = mean(x,n);
  double s = stdev(x,n);
  cout << "mean = " << m << ", std dev = " << s << endl;
  for (int i=0; i<n; i++)
    cout << "x[" << i << "] = " << x[i]
         << ", z[" << i << "] = " << (x[i] - m)/s << endl;
}

void print(double x[], int n)
{ assert(n > 1);
  for (int i=0; i<n-1; i++)
    cout << x[i] << ", ";
  cout << x[n-1] << endl;
}

double mean(double x[], int n)
{ assert(n > 1);
  double sum=0;
  for (int i=0; i<n; i++)
    sum += x[i];
  return sum/n;
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
