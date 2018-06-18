/*     FILE: inline4.h     */

#include <iostream>
using namespace std;

struct COMPLEX{
   float Re;
   float Im;
};

inline COMPLEX Mult(COMPLEX a, COMPLEX b)
{
  COMPLEX result;

  result.Re = a.Re*b.Re - a.Im*b.Im;
  result.Im = a.Re*b.Im + a.Im*b.Re;

  return result;
}

inline void init(COMPLEX *c,float r, float im)
{
  c->Re = r;
  c->Im = im;
}

