/*     FILE: class2.cpp     */

/*
   C++ allows us to place functions and function 
   prototypes in our struct and class definitions
   so that the functionality described becomes 
   "encapsulated" into the data type described.
   
   Note: These functions now "belong" to struct 
         COMPLEX.
*/

#include <iostream>
using namespace std;

struct COMPLEX{
  double Re;
  double Im;
  COMPLEX Mult(const COMPLEX  & a, const COMPLEX & b);
  void print(const COMPLEX  & c);
  void init(COMPLEX &c, double r, double im);
};


int main( )
{
  COMPLEX c1, c2, cresult;

  c1.init(c1,2,3);
  c2.init(c2,2,3);

  cresult = c1.Mult(c1, c2);

  cout << "Result of ";
  c1.print(c1);
  cout << " * ";
  c2.print(c2);
  cout << " = ";
  cresult.print(cresult);
  cout << endl;

  return 0;
}

COMPLEX Mult(const COMPLEX  & a, const COMPLEX  & b)
{
  COMPLEX result;

  result.Re = a.Re*b.Re - a.Im*b.Im;
  result.Im = a.Re*b.Im + a.Im*b.Re;

  return result;
}

void print(const COMPLEX  & c)
{
  cout << "(" << c.Re << " + " << c.Im << "i)" ;
}

void init(COMPLEX &c, double r, double im)
{
  c.Re = r;
  c.Im = im;
}


/*    OUTPUT: class2.cpp

	c:\windows\TEMP\ccHUsegb.o(.text+0x57):class2.cpp: undefined reference to `COMPLEX::init(COMPLEX &, double, double)'
	c:\windows\TEMP\ccHUsegb.o(.text+0x82):class2.cpp: undefined reference to `COMPLEX::init(COMPLEX &, double, double)'
	c:\windows\TEMP\ccHUsegb.o(.text+0x9a):class2.cpp: undefined reference to `COMPLEX::Mult(COMPLEX const &, COMPLEX const &)'
	c:\windows\TEMP\ccHUsegb.o(.text+0xda):class2.cpp: undefined reference to `COMPLEX::print(COMPLEX const &)'
	c:\windows\TEMP\ccHUsegb.o(.text+0x102):class2.cpp: undefined reference to `COMPLEX::print(COMPLEX const &)'
	c:\windows\TEMP\ccHUsegb.o(.text+0x12a):class2.cpp: undefined reference to `COMPLEX::print(COMPLEX const &)'

*/
