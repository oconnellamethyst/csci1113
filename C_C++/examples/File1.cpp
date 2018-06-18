/*     FILE: File1.cpp     */

// Write some output to a file.

#include <fstream>

using std::ofstream;
using std::endl;

int main( )
{
  ofstream outs;

  outs.open("File1.out");

  outs << "Hello world!" << endl;

  outs.close( );
}


/*   OUTPUT: File1.OUT

	Hello world!

*/