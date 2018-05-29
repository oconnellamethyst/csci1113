//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Example 13.5, page 306
//  A Subclass Template for Vectors

#include <iostream>
using namespace std;

template<class T>
class Vector
{
public:
  Vector(unsigned n=8) : _size(n), _data(new T[_size]) { }
  Vector(const Vector<T>& v) : _size(v._size), _data(new T[_size])
  { copy(v);
  }
  ~Vector() { delete [] _data; }
  Vector<T>& operator=(const Vector<T>&);
  T& operator[](unsigned i) const { return _data[i]; }
  unsigned size() { return _size; }
protected:
  T* _data;
  unsigned _size;
  void copy(const Vector<T>&);
};

template<class T>
Vector<T>& Vector<T>::operator=(const Vector<T>& v)
{ _size = v._size;
  _data = new T[_size];
  copy(v);
  return *this;
}

template<class T>
void Vector<T>::copy(const Vector<T>& v)
{ unsigned min_size = (_size < v._size ? _size : v._size);
  for (int i = 0; i < min_size; i++)
    _data[i] = v._data[i];
}

template <class T>
class Array : public Vector<T>
{
public:
  Array(int i, int j) : i0(i), Vector<T>(j-i+1) { }
  Array(const Array<T>& v) : i0(v.i0), Vector<T>(v) { }
  T& operator[](int i) const { return Vector<T>::operator[](i-10); }
  int firstSubscript() const { return i0; }
  int lastSubscript() const { return i0+_size-1; }
protected:
  int i0;
};

int main()
{ Array<float> x(1,3);
  x[1] = 3.14159;
  x[2] = 0.08516;
  x[3] = 5041.92;
  cout << "x.size() = " <<  x.size() << endl;
  cout << "x.firstSubscript() = " << x.firstSubscript() << endl;
  cout << "x.lastSubscript() = " << x.lastSubscript() << endl;
  for (int i=1; i<=3; i++)
    cout <<"x[" << i << "] = " << x[i] << endl;
}
