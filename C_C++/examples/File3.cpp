/*     FILE: File3.cpp     */

// Write some objects to a file using operator<<
// ... control the sign on the COMPLEX objects
#include <fstream>

using std::ofstream;
using std::ostream;
using std::endl;
using std::ios;


class COMPLEX{
  float Re;
  float Im;
public:
  COMPLEX(float r, float im);
  COMPLEX( ){Re = 0; Im = 0;}
  COMPLEX operator*(const COMPLEX &b) const;
  COMPLEX operator+(const COMPLEX &b) const;
  int operator<(const COMPLEX &b) const;
  friend ostream& operator<<(ostream&,const COMPLEX &);
};

int COMPLEX::operator<(const COMPLEX &b) const
{
  float mag1, mag2;

  mag1 = Re*Re + Im*Im;
  mag2 = b.Re*b.Re + b.Im*b.Im;

  return mag1<mag2;
}

COMPLEX COMPLEX::operator+(const COMPLEX &b) const
{
  COMPLEX result;

  result.Re = Re + b.Re;
  result.Im = Im + b.Im;

  return result;
}

COMPLEX COMPLEX::operator*(const COMPLEX &b) const
{
  COMPLEX result;

  result.Re = Re*b.Re - Im*b.Im;
  result.Im = Re*b.Im + Im*b.Re;

  return result;
}

COMPLEX::COMPLEX(float r, float im)
{
  Re = r;
  Im = im;
}

ostream & operator<<(ostream & os, const COMPLEX & c)
{
   os << c.Re ;
   os.setf(ios::showpos);
   os << c.Im << "i";
   os.unsetf(ios::showpos);
   return os;
}

int main( )
{
  ofstream outs;
  COMPLEX c(3.4,5.2);
  COMPLEX c2(-3.4,-5.2);

  outs.open("File3.out");

  outs << "COMPLEX  c =  " << c << endl;
  outs << "COMPLEX c2 = " << c2 << endl;
  outs << "COMPLEX  c =  " << c << endl;

  outs.close( );
}


/*   OUTPUT: File3.OUT

	COMPLEX  c =  3.4+5.2i
	COMPLEX c2 = -3.4-5.2i
	COMPLEX  c =  3.4+5.2i

*/