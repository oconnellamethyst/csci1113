/*     FILE: class6.cpp     */

/*
   Allowing public access to all information allows 
   little control over how an object is manipulated.
   
   More importantly it allows "consumers" to couple 
   their code to the actual implementation.  This 
   means that if the internal class structure or even
   something as simple as an attribute/variable name
   is changed, code that other programmers have written 
   will now fail. 
*/

#include <iostream>
using namespace std;

struct COMPLEX{
  double Re;
  double Im;
  COMPLEX Mult(const COMPLEX & b);
  void print( );
  void init(double r, double im);
};

COMPLEX COMPLEX::Mult(const COMPLEX & b)
{
  COMPLEX result;

  result.Re = Re*b.Re - Im*b.Im;
  result.Im = Re*b.Im + Im*b.Re;

  return result;
}

void COMPLEX::print( )
{
  cout << "(" << Re << " + " << Im << "i)" ;
}

void COMPLEX::init(double r, double im)
{
  Re = r;
  Im = im;
}

int main( )
{
  COMPLEX c1, c2, cresult;

  c1.Re = 2;
  c1.Im = 3;
  c2.Re = 2;
  c2.Im = 3;

  cresult = c1.Mult(c2);

  cout << "Result of ";
  c1.print( );
  cout << " * ";
  c2.print( );
  cout << " = ";
  cresult.print( );
  cout << endl;

  return 0;
}


/*    OUTPUT: class6.cpp

	Result of (2 + 3i) * (2 + 3i) = (-5 + 12i)

*/
