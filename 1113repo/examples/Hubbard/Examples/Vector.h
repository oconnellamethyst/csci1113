//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Vector.h
//  A class template for Vectors

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
