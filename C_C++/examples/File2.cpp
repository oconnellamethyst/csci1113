/*     FILE: File2.cpp     */

// Write some objects to a file using operator<<

#include <fstream>

using std::ofstream;
using std::ostream;
using std::endl;

class MyDouble{
    double d;
  public:
    MyDouble(double param)
    { d = param;}
    double getDouble( )
    { return d;}
    bool operator<(const MyDouble & param) const
    { return d < param.d; }
           
    friend ostream& operator<<(ostream &os, const MyDouble & d);
};

ostream& operator<<(ostream &os, const MyDouble & d)
{
  os << d.d ;

  return os;
}

int main( )
{
  ofstream outs;
  MyDouble d1(5.2), d2(3.2);

  outs.open("File2.out");

  outs << "MyDouble d1 = " << d1 << endl;
  outs << "MyDouble d2 = " << d2 << endl;
  outs << d1 << " < " << d2 << " = " << (d1 < d2) << endl;
  outs << d2 << " < " << d1 << " = " << (d2 < d1) << endl;

  outs.close( );
}


/*   OUTPUT: File2.OUT

	MyDouble d1 = 5.2
	MyDouble d2 = 3.2
	5.2 < 3.2 = 0
	3.2 < 5.2 = 1

*/