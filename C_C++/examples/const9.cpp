/*     FILE: const9.cpp     */

/*
   A new constructor called a "copy" constructor is provided.
   It makes duplicates of objects when they are needed for 
   things like pass and return by value.

   Watch and see how many times the constructors and destructors 
   are called.
   
   Note: Mult( ) has also been changed to have a value parameter.
*/
#include <iostream>
using namespace std;

class COMPLEX{
  double Re;
  double Im;
public:
  void print( ) const;
  COMPLEX Mult(const COMPLEX b) const;
    
  COMPLEX(double r, double im);
  COMPLEX(COMPLEX &c)
  {
    Re = c.Re;
    Im = c.Im;
    cout << "Constructing-COPY a COMPLEX object" << endl;
  }
  COMPLEX( )
  {
    Re = Im = 0;
    cout << "Constructing-DEFAULT a COMPLEX object" << endl;
  }
  ~COMPLEX( )
  {
   cout << "Destroying a COMPLEX object" << endl;
  }
};

COMPLEX COMPLEX::Mult(const COMPLEX b) const
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
  cout << "Constructing a COMPLEX object" << endl;
}

// Initializing constructor gets called 2 times
// Default contructor gets called 2 times
// Copy contructor gets called 2 times
// Destructor gets called 6 times
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


/*    OUTPUT: const9.cpp

	Constructing a COMPLEX object
	Constructing a COMPLEX object
	Constructing-DEFAULT a COMPLEX object
	Constructing-COPY a COMPLEX object
	Constructing-DEFAULT a COMPLEX object
	Constructing-COPY a COMPLEX object
	Destroying a COMPLEX object
	Destroying a COMPLEX object
	Destroying a COMPLEX object
	Result of (2 + 3i) * (2 + 3i) = (-5 + 12i)
	Destroying a COMPLEX object
	Destroying a COMPLEX object
	Destroying a COMPLEX object

*/
