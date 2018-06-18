/*     FILE: inline.cpp     */

#include <iostream>
using namespace std;

#define SQUARE(X)  X * X

inline int square(int x){return x * x;}

int main( )
{
  int x;

  x = 5;

  cout << "x = " << x << ", x * x = " << square(x) << endl;
  cout << "x = " << x << ", x * x = " << SQUARE(x) << endl;

  cout << "3 + 5 = " << 3 + 5
      << ", (3 + 5) * (3 + 5) = " << square(3 + 5) << endl;
  cout << "3 + 5 = " << 3 + 5 << ", 3 + 5 * 3 + 5 = "
      << SQUARE(3 + 5) << endl;

  char *s = "Jim Polzin";

  cout << "s = " << s << " s*s = " << square(s) << endl;
  cout << "s = " << s << " s*s = " << SQUARE(s) << endl;

  return 0;
}



/*    OUTPUT: inline.cpp

	inline.cpp: In function `int main()':
	inline.cpp:24: passing `char *' to argument 1 of `square(int)' lacks a cast
	inline.cpp:25: invalid operands `char *' and `char *' to binary `operator *'

*/
