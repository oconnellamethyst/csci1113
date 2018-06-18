/*     FILE: const2.cpp     */

/*
   A default constructor has been defined.
*/

#include <iostream>
using namespace std;

class COMPLEX{
  double Re;
  double Im;
public:
  COMPLEX Mult(const COMPLEX & b);
  void print( );
  
  COMPLEX(double r, double im);
  COMPLEX( ){}
};

COMPLEX COMPLEX::Mult(const COMPLEX & b)
{
  COMPLEX result(0,0);

  result.Re = Re*b.Re - Im*b.Im;
  result.Im = Re*b.Im + Im*b.Re;

  return result;
}

void COMPLEX::print( )
{
  cout << "(" << Re << " + " << Im << "i)" ;
}

COMPLEX::COMPLEX(double r, double im)
{
  Re = r;
  Im = im;
}

int main( )
{
  COMPLEX c1(2,3), c2(2,3), cresult;

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


/*    OUTPUT: const2.cpp

	Result of (2 + 3i) * (2 + 3i) = (-5 + 12i)

*/
