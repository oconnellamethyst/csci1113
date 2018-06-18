/*     FILE: put_to2.cpp     */

/*
   Overloading the put-to operator << for class COMPLEX.
   
   A near miss.
*/
#include <iostream>
using namespace std;

class COMPLEX{
  double Re;
  double Im;
public:
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

  COMPLEX operator*(const COMPLEX & b) const;
  COMPLEX operator*(const double &x) const;
  friend COMPLEX operator*(const double &x, const COMPLEX &c);
  
  COMPLEX operator-(const COMPLEX &b) const;
  COMPLEX operator-( ) const;
    
  friend void operator<<(ostream&,const COMPLEX &);
};

COMPLEX::COMPLEX(double r, double im)
{
  Re = r;
  Im = im;
}

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
  return (c * x);
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

void operator<<(ostream& os, const COMPLEX & c)
{
  os << "(" << c.Re << " + " << c.Im << "i)" ;
}

int main( )
{
  COMPLEX c1(2,3), c2(2,3), cresult;

   cresult = c1 * c2;   // multiply operator COMPLEX * COMPLEX
 
   cout << "Result of " << c1
        << " * " << c2 << " = "
        << cresult << endl;
 
   cresult = 3.0 * c1;    // multiply operator COMPLEX * double
 
   cout << "Result of "
        << " 3.0 * "
        << c1
        << " = "
        << cresult
        << endl;

  return 0;
}


/*    OUTPUT: put_to2.cpp

	put_to2.cpp: In function `int main()':
	put_to2.cpp:100: void value not ignored as it ought to be
	put_to2.cpp:109: void value not ignored as it ought to be

*/
