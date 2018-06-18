/*     FILE: const7.cpp     */

/*
   The destructor has been added to show that it is called
   when an object is destroyed.
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
}

int main( )
{
  COMPLEX carray[4];

  for(int i=0; i<4; i++){
    cout << "carray[" << i << "] = ";
    carray[i].print( );
    cout << endl;
  }

  return 0;
}


/*    OUTPUT: const7.cpp

	carray[0] = (0 + 0i)
	carray[1] = (0 + 0i)
	carray[2] = (0 + 0i)
	carray[3] = (0 + 0i)
	Destroying a COMPLEX object
	Destroying a COMPLEX object
	Destroying a COMPLEX object
	Destroying a COMPLEX object

*/
