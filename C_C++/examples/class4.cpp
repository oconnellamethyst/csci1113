/*     FILE: class4.cpp     */

/*
   Once encapsulated, these functions can only be called 
   using the member access operator by a variable or 
   object of the defined type. So C++ automatically provides
   access to the variable/object running the method/function.
   
   This allows us to pass one less parameter in most cases.
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

  c1.init(2,3);
  c2.init(2,3);

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


/*    OUTPUT: class4.cpp

	Result of (2 + 3i) * (2 + 3i) = (-5 + 12i)

*/
