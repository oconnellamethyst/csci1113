/*     FILE: put_to4.cpp     */

/*
   Overloading the put-to operator << for class COMPLEX.
   
   Another near miss. To cascade put-to operations 
   ... the put-to operator must produce a reference 
   ... to the same stream, not a copy of the stream.
   
   Class ostream does not allow a copy of an ostream to 
   ...be produced.
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
    
  friend ostream operator<<(ostream&,const COMPLEX &);
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

ostream operator<<(ostream& os, const COMPLEX & c)
{
  os << "(" << c.Re << " + " << c.Im << "i)" ;
  return os;
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


/*    OUTPUT: put_to4.cpp

	put_to4.cpp: In method `ostream::ostream(const ostream &)':
	D:\LANG\CPP\DEV-C++\Include\G++\streambuf.h:128: `ios::ios(const ios &)' is private
	put_to4.cpp:96: within this context

*/
