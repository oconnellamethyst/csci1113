/*     FILE: functmp5.cpp     */

/*
   Overloaded print( ) method.
*/

// Errors: What's wrong?
//  - value parameters that are numeric constants are not
//    ... alterable storage.

#include <iostream>
using namespace std;

template <class t>
void print(const t &value);

struct COMPLEX{
   float Re;
   float Im;
};

COMPLEX Mult(COMPLEX a, COMPLEX b);

int main( )
{
  COMPLEX c1, c2, cresult;

  c1.Re = 2;
  c1.Im = 3;

  c2.Re = 2;
  c2.Im = 3;

  cresult = Mult(c1, c2);

  cout << "Result of ";
  print(c1);
  cout << " * ";
  print(c2);
  cout << " = ";
  print(cresult);
  cout << endl;

  print("Float example:");
  cout << endl;
  cout << "Result of ";
  print(4.5);
  cout << " * ";
  print(3);
  cout << " = ";
  print(4.5 * 3);
  cout << endl;

  return 0;
}

COMPLEX Mult(COMPLEX a, COMPLEX b)
{
  COMPLEX result;

  result.Re = a.Re*b.Re - a.Im*b.Im;
  result.Im = a.Re*b.Im + a.Im*b.Re;

  return result;
}

template <class t>
void print(const t &value)
{
  cout << value;
}


/*    OUTPUT: functmp5.cpp

	functmp5.cpp: In function `void print(const t&) [with t = COMPLEX]':
	functmp5.cpp:35:   instantiated from here
	functmp5.cpp:68: no match for `std::ostream& << const COMPLEX&' operator
	C:/Programs/Dev-Cpp/include/c++/bits/ostream.tcc:55: candidates are: 
	   std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, 
	   _Traits>::operator<<(std::basic_ostream<_CharT, 
	   _Traits>&(*)(std::basic_ostream<_CharT, _Traits>&)) [with _CharT = char, 
	   _Traits = std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/bits/ostream.tcc:77:                 
	   std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, 
	   _Traits>::operator<<(std::basic_ios<_CharT, 
	   _Traits>&(*)(std::basic_ios<_CharT, _Traits>&)) [with _CharT = char, _Traits 
	   = std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/bits/ostream.tcc:99:                 
	   std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, 
	   _Traits>::operator<<(std::ios_base&(*)(std::ios_base&)) [with _CharT = char, 
	   _Traits = std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/bits/ostream.tcc:171:                 
	   std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, 
	   _Traits>::operator<<(long int) [with _CharT = char, _Traits = 
	   std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/bits/ostream.tcc:208:                 
	   std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, 
	   _Traits>::operator<<(long unsigned int) [with _CharT = char, _Traits = 
	   std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/bits/ostream.tcc:146:                 
	   std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, 
	   _Traits>::operator<<(bool) [with _CharT = char, _Traits = 
	   std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/ostream:104:                 
	   std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, 
	   _Traits>::operator<<(short int) [with _CharT = char, _Traits = 
	   std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/ostream:115:                 
	   std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, 
	   _Traits>::operator<<(short unsigned int) [with _CharT = char, _Traits = 
	   std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/ostream:119:                 
	   std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, 
	   _Traits>::operator<<(int) [with _CharT = char, _Traits = 
	   std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/ostream:130:                 
	   std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, 
	   _Traits>::operator<<(unsigned int) [with _CharT = char, _Traits = 
	   std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/bits/ostream.tcc:234:                 
	   std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, 
	   _Traits>::operator<<(long long int) [with _CharT = char, _Traits = 
	   std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/bits/ostream.tcc:272:                 
	   std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, 
	   _Traits>::operator<<(long long unsigned int) [with _CharT = char, _Traits = 
	   std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/bits/ostream.tcc:298:                 
	   std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, 
	   _Traits>::operator<<(double) [with _CharT = char, _Traits = 
	   std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/ostream:145:                 
	   std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, 
	   _Traits>::operator<<(float) [with _CharT = char, _Traits = 
	   std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/bits/ostream.tcc:323:                 
	   std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, 
	   _Traits>::operator<<(long double) [with _CharT = char, _Traits = 
	   std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/bits/ostream.tcc:348:                 
	   std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, 
	   _Traits>::operator<<(const void*) [with _CharT = char, _Traits = 
	   std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/bits/ostream.tcc:120:                 
	   std::basic_ostream<_CharT, _Traits>& std::basic_ostream<_CharT, 
	   _Traits>::operator<<(std::basic_streambuf<_CharT, _Traits>*) [with _CharT = 
	   char, _Traits = std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/ostream:211:                 
	   std::basic_ostream<_CharT, _Traits>& 
	   std::operator<<(std::basic_ostream<_CharT, _Traits>&, char) [with _CharT = 
	   char, _Traits = std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/bits/ostream.tcc:500:                 
	   std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, 
	   _Traits>&, char) [with _Traits = std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/ostream:222:                 
	   std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, 
	   _Traits>&, signed char) [with _Traits = std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/ostream:227:                 
	   std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, 
	   _Traits>&, unsigned char) [with _Traits = std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/bits/ostream.tcc:572:                 
	   std::basic_ostream<_CharT, _Traits>& 
	   std::operator<<(std::basic_ostream<_CharT, _Traits>&, const char*) [with 
	   _CharT = char, _Traits = std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/bits/ostream.tcc:622:                 
	   std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, 
	   _Traits>&, const char*) [with _Traits = std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/ostream:246:                 
	   std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, 
	   _Traits>&, const signed char*) [with _Traits = std::char_traits<char>]
	C:/Programs/Dev-Cpp/include/c++/ostream:251:                 
	   std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, 
	   _Traits>&, const unsigned char*) [with _Traits = std::char_traits<char>]

*/
