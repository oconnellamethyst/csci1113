//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Example 13.1, page 300
//  The swap Function Template

template <class T>
void swap(T& x, T& y)
{
  T temp = x;
  x = y;
  y = temp;
}
