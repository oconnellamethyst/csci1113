/*     FILE: op_over6.cpp     */

/*
   Test of whether this double times COMPLEX function is
   ... used by the compiler.
*/
#include <iostream>
using namespace std;

class COMPLEX{
  double Re;
  double Im;
public:
  void print( ) const;
  COMPLEX operator*(const COMPLEX & b) const;
  COMPLEX operator*(const double &x) const;
  
  COMPLEX operator-(const COMPLEX &b) const;
  COMPLEX operator-( ) const;
    
  COMPLEX(double r, double im);
  COMPLEX(const COMPLEX &c)
  {
    Re = c.Re;
    Im = c.Im;
  }
  COMPLEX( )
  {
    Re = Im = 0;
  }
  ~COMPLEX( )
  {
  }
};

COMPLEX COMPLEX::operator*(const COMPLEX & b) const
{
  COMPLEX result;

  result.Re = Re*b.Re - Im*b.Im;
  result.Im = Re*b.Im + Im*b.Re;

  return result;
}

COMPLEX COMPLEX::operator*(const double &x) const
{
  COMPLEX result;
 
  result.Re = Re*x;
  result.Im = Im*x;
 
  return result;
}
 
COMPLEX operator*(const double &x, const COMPLEX &c)
{
  COMPLEX result(1.0,1.0);
 
//  result.Re = c.Re*x;
//  result.Im = c.Im*x;
 
  return result;
}
 
COMPLEX COMPLEX::operator-(const COMPLEX &b) const
{
  COMPLEX result;
 
  result.Re = Re - b.Re;
  result.Im = Im - b.Im;
 
  return result;
}
 
COMPLEX COMPLEX::operator-( ) const
{
  COMPLEX result;
 
  result.Re = -Re;
  result.Im = -Im;
 
  return result;
}

void COMPLEX::print( ) const
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

   cresult = c1 * c2;   // multiply operator COMPLEX * COMPLEX
 
   cout << "Result of ";
   c1.print( );
   cout << " * ";
   c2.print( );
   cout << " = ";
   cresult.print( );
   cout << endl;
 
   cresult = 3.0 * c1;    // multiply operator double * COMPLEX
 
   cout << "Result of ";
   cout << " 3.0 * ";
   c1.print( );
   cout << " = ";
   cresult.print( );
   cout << endl;

  return 0;
}


/*    OUTPUT: op_over6.cpp

	Result of (2 + 3i) * (2 + 3i) = (-5 + 12i)
	Result of  3.0 * (2 + 3i) = (1 + 1i)

*/
