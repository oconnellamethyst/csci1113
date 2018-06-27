/*     FILE: const4.cpp     */

/*
   Access to the invoking object is provided implicitly
   thru a pointer named "this".
   
   "this" can be used explicitly.
*/

#include <iostream>
using namespace std;

class COMPLEX{ 
  double Re;
  double Im;
public:
  COMPLEX Mult(const COMPLEX & b);
  COMPLEX Add(const COMPLEX & b);
  COMPLEX Subt(const COMPLEX & b);
  void print( );
  void print2( );
  
  COMPLEX(double r=0, double im=0) : Re(r) , Im(im) {} // Constructor that defaults to zeroes
};

COMPLEX COMPLEX::Mult(const COMPLEX & b)
{
  COMPLEX result(0,0);

  result.Re = Re*b.Re - Im*b.Im;
  result.Im = Re*b.Im + Im*b.Re;

  return result;
}

COMPLEX COMPLEX::Add(const COMPLEX & b) // Adding method
{
  COMPLEX result(0,0);

  result.Re = Re+b.Re;
  result.Im = Im+b.Im;

  return result;
}

COMPLEX COMPLEX::Subt(const COMPLEX & b) //Subtracting method
{
  COMPLEX result(0,0);

  result.Re = Re-b.Re;
  result.Im = Im-b.Im;

  return result;
}

void COMPLEX::print( )
{
  cout << "(" << Re << " + " << Im << "i)" ;
}

void COMPLEX::print2( )
{
  cout << "(" << this->Re << " + " << this->Im << "i)" ;
}

int main( )
{
  COMPLEX c1(2,3), c2(2,3), cresult;

  cresult = c1.Add(c2);

  cout << "Result of ";
  c1.print( );
  cout << " + ";
  c2.print( );
  cout << " = ";
  cresult.print( );
  cout << endl;
  
  cresult = c1.Subt(c2);

  cout << "Result of ";
  c1.print2( );
  cout << " - ";
  c2.print2( );
  cout << " = ";
  cresult.print2( );
  cout << endl;

  return 0;
}


/*    OUTPUT: const4.cpp

  Result of (2 + 3i) + (2 + 3i) = (4 + 6i)
  Result of (2 + 3i) - (2 + 3i) = (0 + 0i)

*/
