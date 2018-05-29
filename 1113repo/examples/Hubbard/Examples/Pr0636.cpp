//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.36 on page 146
//  The minimax and maximin of a matrix

#include <cassert>   // defines the assert() function
#include <cstdlib>   // defines the rand() and srand() functions
#include <ctime>     // defines the time() function
#include <iomanip>   // defines the setw() function
#include <iostream>  // defines the cout object
using namespace std;

const SIZE=20;
typedef double Matrix[SIZE][SIZE];
void load(Matrix,int);
void print(Matrix,int);
double minimax(Matrix,int);
double maximin(Matrix,int);

int main()
{ int n=3;
  Matrix m;
  load(m,n);
  print(m,n);
  cout << "minimax = min of col maxs = " << minimax(m,n) << endl;
  cout << "maximin = max of row mins = " << maximin(m,n) << endl;
}

double min_of_row(Matrix,int,int);
double max_of_col(Matrix,int,int);

void load(Matrix m, int n)
{ assert(n > 0 && n < SIZE);
  unsigned seed = time(NULL);         // uses the system clock
  srand(seed);                        // initializes the seed
  for (int i=0; i<SIZE; i++)
    for (int j=0; j<SIZE; j++)
      if (i<n && j<n) m[i][j] = double(rand())/RAND_MAX;
      else m[i][j] = 0.0;
}

void print(Matrix m, int n)
{ assert(n > 0 && n < SIZE);
  for (int i=0; i<n; i++)
  { for (int j=0; j<n; j++)
      cout << "\t" << setw(8) << m[i][j] << " ";
    cout << "\t" << setw(8) << min_of_row(m,n,i) << endl;
  }
  for (int j=0; j<n; j++)
    cout << "\t" << setw(8) << max_of_col(m,n,j);
  cout << endl;
}

double min_of_row(Matrix m, int n, int i)
{ assert(n>0 && n < SIZE && i>=0 && i<n);
  double min=m[i][0];
  for (int j=1; j<n; j++)
    if (m[i][j]<min) min = m[i][j];
  return min;
}

double max_of_col(Matrix m, int n, int j)
{ assert(n>0 && n < SIZE && j>=0 && j<n);
  double max=m[0][j];
  for (int i=1; i<n; i++)
    if (m[i][j]>max) max = m[i][j];
  return max;
}

double minimax(Matrix m, int n)
{ assert(n>0 && n < SIZE);
  double minimax=max_of_col(m,n,0);
  for (int j=1; j<n; j++)
  { double mm = max_of_col(m,n,j);
    if (mm<minimax) minimax = mm;
  }
  return minimax;
}

double maximin(Matrix m, int n)
{ assert(n>0 && n < SIZE);
  double maximin=min_of_row(m,n,0);
  for (int i=1; i<n; i++)
  { double mm = min_of_row(m,n,i);
    if (mm>maximin) maximin = mm;
  }
  return maximin;
}
