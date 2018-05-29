//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Problem 13.4, page 319
//  More Vector template functions

template <class T>
unsigned Vector<T>::resize(unsigned n, T t)
{
  T* new_data = new T[n];
  copy(v);
  for (i=size; i < n; i++)
    new_data[i] = t;
  delete [] data;
  size = n;
  data = new_data;
  return size;
}

template<calss T>
unsigned Vector<T>::resize(unsigned n)
{
  T* new_data = new T[n];
  copy(v);
  delete [] data;
  size = n;
  data = new_data;
  return size;
}
