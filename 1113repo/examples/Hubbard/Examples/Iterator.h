//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Iterator.h
//  An Iterator Class Template

template<class T>
class Iterator
{
public:
  virtual void reset() =0;
  virtual T operator() () =0;
  virtual void operator=(T t) =0;
  virtual int operator!() =0;
  virtual int operator++() =0;
};
