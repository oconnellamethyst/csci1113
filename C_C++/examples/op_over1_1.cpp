/*     FILE: op_over1_1.cpp     */

/*
   The Mult( ) function can be turned into an operator definition.
   
   * for multiplication operator matches the operator*( ) 
   ... method/function call.
*/
#include <iostream>
using namespace std;

class COMPLEX{
  double Re;
  double Im;
public:
  void print( ) const;
  COMPLEX operator*(const COMPLEX & b) const;
    
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

  //cresult = c1.Mult(c2);
  cresult = c1.operator*(c2);

  cout << "Result of ";
  c1.print( );
  cout << " * ";
  c2.print( );
  cout << " = ";
  cresult.print( );
  cout << endl;

  return 0;
}


/*    OUTPUT: op_over1_1.cpp

	Result of (2 + 3i) * (2 + 3i) = (-5 + 12i)

*/
