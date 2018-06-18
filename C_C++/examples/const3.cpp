/*     FILE: const3.cpp     */

/*
   The default constructor has been modified to initialize 
   the object to 0,0.  For illustrative purposes the 
   constructors print messages to show they are called.
*/

#include <iostream>
using namespace std;

class COMPLEX{
  double Re;
  double Im;
public:
  void print( );
  COMPLEX(double r, double im);
  COMPLEX( )
  {
    Re = Im = 0;
    cout << "Constructing-default a COMPLEX object" << endl;
  }
};

void COMPLEX::print( )
{
  cout << "(" << Re << " + " << Im << "i)" ;
}

COMPLEX::COMPLEX(double r, double im)
{
  Re = r;
  Im = im;
  cout << "Constructing/Initializing a COMPLEX object" << endl;
}

int main( )
{
  COMPLEX c1(1,2);
  COMPLEX c2;
  COMPLEX carray[4];

  cout << "c1 = ";
  c1.print( );
  cout << endl;
  cout << "c2 = ";
  c2.print( );
  cout << endl;

  cout << "carray = " << endl;
  for(int i=0; i<4; i++){
    carray[i].print( );
    cout << endl;
  }

  return 0;
}


/*    OUTPUT: const3.cpp

	Constructing/Initializing a COMPLEX object
	Constructing-default a COMPLEX object
	Constructing-default a COMPLEX object
	Constructing-default a COMPLEX object
	Constructing-default a COMPLEX object
	Constructing-default a COMPLEX object
	c1 = (1 + 2i)
	c2 = (0 + 0i)
	carray = 
	(0 + 0i)
	(0 + 0i)
	(0 + 0i)
	(0 + 0i)

*/
