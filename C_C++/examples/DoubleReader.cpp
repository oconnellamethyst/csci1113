/*     FILE: DoubleReader.cpp     */

#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char *argv[ ])
{
  double x;
  
  int i;
  
  ifstream inStream;
  
  inStream.open(argv[1]);
  
  if (inStream.good( )){          
    inStream >> x;
    for(i=0; !inStream.fail( ) ; i++)
    {
      cout << "Value " << i+1 << ": "
           << x << endl;
      inStream >> x;
    }
    
    inStream.close( );
  }
  else
    cout << "Unable to open file: " << argv[1];
    
  return 0;
}


/*    OUTPUT: DoubleReader.cpp

	Value 1: 511.1
	Value 2: 500.111
	Value 3: 600
	Value 4: 500.4
	Value 5: 511.457
	Value 6: 508.976
	Value 7: 508.654
	Value 8: 506
	Value 9: 497
	Value 10: 506.66
	Value 11: 511.1
	Value 12: 500.111
	Value 13: 600
	Value 14: 500.4
	Value 15: 511.457
	Value 16: 508.976
	Value 17: 508.654
	Value 18: 506
	Value 19: 497
	Value 20: 506.66
	Value 21: 511.1
	Value 22: 500.111
	Value 23: 600
	Value 24: 500.4
	Value 25: 511.457
	Value 26: 508.976
	Value 27: 508.654
	Value 28: 506
	Value 29: 497
	Value 30: 506.66

   COMMAND LINE: DoubleReader floats.dat

*/
