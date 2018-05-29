//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.29 on page 79
//  Generating pseudo-random numbers in a given range

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
  int min, max;
  cout << "Enter minimum and maximum: ";
  cin >> min >> max;                 // lowest and highest numbers
  int range = max - min + 1;         // number of numbers in range
  for (int i = 0; i < 20; i++)
  { int r = rand()/100%range + min;
    cout << r << " ";
  }
  cout << endl;
}
