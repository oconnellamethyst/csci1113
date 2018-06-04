//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 10.4 on page 249
//  A Random class

#include <iomanip>
#include <iostream>
#include <limits>
#include <ctime>
using namespace std;

class Random
{ public:
    Random(long seed=0) { _seed = ( seed ? seed : time(NULL) ); }
    void seed(long seed=0) { _seed = ( seed ? seed : time(NULL) ); }
    int integer() { return _next(); }
    int integer(int min, int max) { return min +_next()%(max-min+1);}
    double real() { return double(_next())/double(INT_MAX); }
  private:
    unsigned long _seed;
    void _randomize() { _seed = (314159265*_seed + 13579)%ULONG_MAX;}
    int _next()
    { int iterations = _seed % 3;
      for (int i=0; i <= iterations; i++) _randomize();
      return int(_seed/2);
    }
};

int main()
{ Random random;
  for (int i = 1; i <= 10; i++)
    cout << setw(12) << random.integer()
         << setw(4)  << random.integer(1,6)
         << setw(12) << random.real() << endl;
}
