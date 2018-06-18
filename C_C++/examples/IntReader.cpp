/*     FILE: IntReader.cpp     */

#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char *argv[ ])
{
  int x;
  
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


/*    OUTPUT: IntReader.cpp

	Value 1: 511
	Value 2: 500
	Value 3: 599
	Value 4: 500
	Value 5: 511
	Value 6: 508
	Value 7: 508
	Value 8: 505
	Value 9: 496
	Value 10: 506
	Value 11: 511
	Value 12: 500
	Value 13: 599
	Value 14: 500
	Value 15: 511
	Value 16: 508
	Value 17: 508
	Value 18: 505
	Value 19: 496
	Value 20: 506
	Value 21: 511
	Value 22: 500
	Value 23: 599
	Value 24: 500
	Value 25: 511
	Value 26: 508
	Value 27: 508
	Value 28: 505
	Value 29: 496
	Value 30: 506

   COMMAND LINE: IntReader ints.dat

*/
