//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 7.9 on page 163
//  Using a function as an array subscript

#include <iostream>
using namespace std;

float& component(float*,int);

int main()
{ float v[4];
  for (int k = 1; k <= 4; k++)
	    component(v,k) = 1.0/k;
  for (int i = 0; i < 4; i++)
	    cout << "v[" << i << "] = " << v[i] << endl;
}

float& component(float* v, int k)
{ return v[k-1];
}
