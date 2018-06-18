/*     FILE: class5.cpp     */

/*
   These programmer defined types can now explicitly  
   be labeled a "class" with the C++ class keyword.  
   The only difference between a class and a struct
   is that the information inside is restricted or 
   "private" in a class but is "public" in a struct,
   by default.
   
   To make some class information in the objects 
   less restricted we use an access specifier.  In 
   this case the "public" access specifier.
*/

#include <iostream>
using namespace std;

class COMPLEX{
  double Re;
  double Im;
public:
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



/*    OUTPUT: class5.cpp

	Result of (2 + 3i) * (2 + 3i) = (-5 + 12i)

*/
