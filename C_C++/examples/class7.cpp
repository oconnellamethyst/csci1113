/*     FILE: class7.cpp     */

/*
   Restricting access to some parts of a class or 
   object keeps other programmers from coupling 
   their code to the actual implementation.  This 
   means that if the internal class structure or even
   something as simple as an attribute/variable name
   is changed, code that other programmers have written 
   will NOT fail as long as the public access/interface 
   is preserved. 
   
   Most importantly, once the restricted information is 
   indicated the compiler is aware of it and can enforce
   the restriction.
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

  c1.Re = 2;
  c1.Im = 3;
  c2.Re = 2;
  c2.Im = 3;

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


/*    OUTPUT: class7.cpp

	class7.cpp: In function `int main()':
	class7.cpp:20: `double COMPLEX::Re' is private
	class7.cpp:53: within this context
	class7.cpp:21: `double COMPLEX::Im' is private
	class7.cpp:54: within this context
	class7.cpp:20: `double COMPLEX::Re' is private
	class7.cpp:55: within this context
	class7.cpp:21: `double COMPLEX::Im' is private
	class7.cpp:56: within this context

*/
