//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Random.h
//  Interface and implementation for a Random class

#include <climits>   // defines INT_MAX and ULONG_MAX constant
#include <ctime>     // defines time() function
#include <iostream>
using namespace std;

class Random
{ public:
    Random(long seed=0) { _seed = ( seed?seed:time(NULL) ); }
    void seed(long seed=0) { _seed = ( seed?seed:time(NULL) ); }
    int integer() { return _next(); }
    int integer(int min, int max)
      { return min +_next()%(max-min+1);}
    double real()
      { return double(_next())/double(INT_MAX); }
  private:
    unsigned long _seed;
    void _randomize()
      { _seed = (314159265*_seed + 13579)%ULONG_MAX;}
    int _next()
    { int iterations = _seed % 3;
      for (int i=0; i <= iterations; i++) _randomize();
      return int(_seed/2);
    }
};
