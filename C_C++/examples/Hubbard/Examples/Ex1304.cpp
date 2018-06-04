//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Example 13.4, page 305
//  A Vector Class Template

#include <iostream>
using namespace std;

template<class T>
class Vector
{ public:
    Vector(unsigned n=8) : _sz(n), _data(new T[n]) { }
    Vector(const Vector<T>& v) : _sz(v._sz), _data(new T[v._sz]) { copy(v); }
    ~Vector() { delete [] _data; }
    Vector<T>& operator=(const Vector<T>&);
    T& operator[](unsigned i) const { return _data[i]; }
    unsigned size() { return _sz; }
  protected:
    T* _data;
    unsigned _sz;
    void copy(const Vector<T>&);
};

int main()
{Vector<short> v;
  v[5] = 127;
  Vector<short> w = v, x(3);
  cout << x.size();
}

template<class T>
Vector<T>& Vector<T>::operator=(const Vector<T>& v)
{ _sz = v._sz;
  _data = new T[_sz];
  copy(v);
  return *this;
}

template<class T>
void Vector<T>::copy(const Vector<T>& v)
{ unsigned min_sz = (_sz<v._sz ? _sz : v._sz);
  for (int i=0; i<min_sz; i++)
    _data[i] = v._data[i];
}
