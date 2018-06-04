//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example G.1 on page 402
//  Using output manipulators

#include <iostream>
using namespace std;

int main()
{ int n = 1492;  //  base 10
	  cout << "Base  8: n = " << oct << n << endl;
	  cout << "Base 10: n = " << n << endl;
	  cout << "Base 16: n = " << hex << n << endl;
}
