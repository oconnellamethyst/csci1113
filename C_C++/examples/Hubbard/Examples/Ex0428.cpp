//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.28 on page 78
//  Setting the seed from the system clock

#include <cstdlib>
#include <ctime>      // defines the time() function
#include <iostream>
//#include <time.h>   // use this if <ctime> is not recognized
using namespace std;

int main()
{ // prints pseudo-random numbers:
  unsigned seed = time(NULL);         // uses the system clock
  cout << "seed = " << seed << endl;
  srand(seed);                        // initializes the seed
  for (int i = 0; i < 8; i++)
    cout << rand() << endl;
}
