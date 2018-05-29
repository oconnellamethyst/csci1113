//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Vector.cpp
//  Implementation of a Vector class

#include <cassert>   // defines the assert() function
#include <iostream>  // defines the cout object
#include "Vector.h"
using namespace std;

//////////////////////////////////////////////////////////////////////
//  friend functions:

bool operator==(const Vector& v, const Vector& w)
{ if (v.size != w.size) return 0;
  for (int i = 0; i < v.size; i++)
	  if (v.data[i] != w.data[i]) return 0;
  return 1;
}

ostream& operator<<(ostream& ostr, const Vector& v)
{ ostr << '(';
  int i;
  for (i=0; i<v.size-1; i++) {
	  ostr << v[i] << ", ";
	  if ((i+1)%8 == 0) cout << "\n ";
 	}
  return ostr << v[i] << ")";
}

istream& operator>>(istream& istr, Vector& v)
{ for (int i = 0; i < v.size; i++)
  { cout << i << ": ";
    istr >> v[i];
  }
  return istr;
}

//////////////////////////////////////////////////////////////////////
//  public members:

Vector::Vector(int sz, double t) : size(sz)
{ data = new double[size];
  for (int i = 0; i < size; i++)
    data[i] = t;
}

Vector::Vector(const Vector& v) : size(v.size)
{ data = new double[v.size];
  for (int i = 0; i < size; i++)
    data[i] = v.data[i];
}

Vector::~Vector()
{ delete [] data;
  data = NULL;
  size = 0;
}

const Vector& Vector::operator=(const Vector& v)
{ if (&v != this)
  { delete [] data;
    size = v.size;
    data = new double[v.size];
    for (int i = 0; i < size; i++)
	  data[i] = v.data[i];
 	}
  return *this;
}

double& Vector::operator[](int i) const
{ return data[i];
}
