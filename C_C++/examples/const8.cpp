/*     FILE: const8.cpp     */

/*
   All constructors provided by the class display a
   message to show they are called, as does the destructor.
   
   Notice how often they are all called.
*/
#include <iostream>
using namespace std;

class COMPLEX{
  double Re;
  double Im;
public:
  void print( ) const;
  COMPLEX Mult(const COMPLEX & b) const;
    
  COMPLEX(double r, double im);
  COMPLEX( )
  {
    Re = Im = 0;
    cout << "Constructing-default a COMPLEX object" << endl;
  }
  ~COMPLEX( )
  {
   cout << "Destroying a COMPLEX object" << endl;
  }
};

COMPLEX COMPLEX::Mult(const COMPLEX & b) const
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
// Destructor gets called ? times
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


/*    OUTPUT: const8.cpp

	Constructing a COMPLEX object
	Constructing a COMPLEX object
	Constructing-default a COMPLEX object
	Constructing-default a COMPLEX object
	Destroying a COMPLEX object
	Destroying a COMPLEX object
	Result of (2 + 3i) * (2 + 3i) = (-5 + 12i)
	Destroying a COMPLEX object
	Destroying a COMPLEX object
	Destroying a COMPLEX object

*/
