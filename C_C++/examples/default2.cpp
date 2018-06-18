/*     FILE: default2.cpp     */

#include <iostream>
using namespace std;

struct COMPLEX{
   double Re;
   double Im;
};

COMPLEX Mult(COMPLEX a, COMPLEX b);
void print(COMPLEX c);
void init(COMPLEX *c,double r, double im = 0);	

int main( )
{
  COMPLEX c1, c2, cresult;	
  
  init(&c1,2,3);
  init(&c2,3);

  cresult = Mult(c1, c2);

  cout << "Result of ";
  print(c1);
  cout << " * ";
  print(c2);
  cout << " = ";
  print(cresult);
  cout << endl;

  return 0;
}

COMPLEX Mult(COMPLEX a, COMPLEX b)
{
  COMPLEX result;

  result.Re = a.Re*b.Re - a.Im*b.Im;
  result.Im = a.Re*b.Im + a.Im*b.Re;

  return result;
}

void print(COMPLEX c)
{
  cout << "(" << c.Re << " + " << c.Im << "i)" ;
}

void init(COMPLEX *c,double r, double im)
{
  c->Re = r;
  c->Im = im;
}



/*    OUTPUT: default2.cpp

	Result of (2 + 3i) * (3 + 0i) = (6 + 9i)

*/
