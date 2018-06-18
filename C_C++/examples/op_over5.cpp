/*     FILE: op_over5.cpp     */

/*
   Definition of double times COMPLEX.
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
  COMPLEX result;
 
  result.Re = c.Re*x;
  result.Im = c.Im*x;
 
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

  return 0;
}


/*    OUTPUT: op_over5.cpp

	op_over5.cpp: In function `class COMPLEX operator *(const double &, const COMPLEX &)':
	op_over5.cpp:8: `double COMPLEX::Re' is private
	op_over5.cpp:57: within this context
	op_over5.cpp:8: `double COMPLEX::Re' is private
	op_over5.cpp:57: within this context
	op_over5.cpp:9: `double COMPLEX::Im' is private
	op_over5.cpp:58: within this context
	op_over5.cpp:9: `double COMPLEX::Im' is private
	op_over5.cpp:58: within this context

*/
