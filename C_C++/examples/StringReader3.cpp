/*     FILE: StringReader3.cpp     */

#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char *argv[ ])
{
  string x;
  float f;
  
  int i, j;
  
  ifstream inStream;
  ifstream dataStream;
  
  inStream.open(argv[1]);
  
  if (inStream.good( )){          
    getline(inStream,x);
    for(i=0; !inStream.fail( ) ; i++)
    {
      cout << "Value " << i+1 << ": "
           << x << endl;
           
      dataStream.open(x.c_str( ));    //  <- Convert C++ string to C-style string
      if (dataStream.good( )){          
        dataStream >> f;
        for(j=0; !dataStream.fail( ) && j < 1; j++)
        {
          cout << "\t" << x << " "
               << " Value " << j+1 << ": "
               << f << endl;
        }
        dataStream.close( );
      }
    
      else
        cout << "Unable to open file: " << x << endl;
        
      getline(inStream,x);
    }
    inStream.close( );
  }
  else
    cout << "Unable to open file: " << argv[1] << endl;
    
  return 0;
}


/*    OUTPUT: StringReader3.cpp

	Value 1: .\A7_data\data\norman\m1b1.dat
		.\A7_data\data\norman\m1b1.dat  Value 1: 508.975
	Value 2: .\A7_data\data\norman\m1b2.dat
		.\A7_data\data\norman\m1b2.dat  Value 1: 511.1
	Value 3: .\A7_data\data\norman\m2b1.dat
		.\A7_data\data\norman\m2b1.dat  Value 1: 511.1
	Value 4: .\A7_data\data\norman\m2b2.dat
		.\A7_data\data\norman\m2b2.dat  Value 1: 511.1
	Value 5: .\A7_data\data\norman\m3b1.dat
		.\A7_data\data\norman\m3b1.dat  Value 1: 511.1
	Value 6: .\A7_data\data\norman\m3b2.dat
		.\A7_data\data\norman\m3b2.dat  Value 1: 511.1
	Value 7: .\A7_data\data\sleepy\m1b1.dat
		.\A7_data\data\sleepy\m1b1.dat  Value 1: 511.1
	Value 8: .\A7_data\data\sleepy\m1b2.dat
		.\A7_data\data\sleepy\m1b2.dat  Value 1: 511.1
	Value 9: .\A7_data\data\sleepy\m2b1.dat
		.\A7_data\data\sleepy\m2b1.dat  Value 1: 508.975
	Value 10: .\A7_data\data\sleepy\m2b2.dat
		.\A7_data\data\sleepy\m2b2.dat  Value 1: 511.1
	Value 11: .\A7_data\data\sleepy\m3b1.dat
		.\A7_data\data\sleepy\m3b1.dat  Value 1: 511.1
	Value 12: .\A7_data\data\sleepy\m3b2.dat
		.\A7_data\data\sleepy\m3b2.dat  Value 1: 511.1
	Value 13: .\A7_data\data\bloom\m1b1.dat
		.\A7_data\data\bloom\m1b1.dat  Value 1: 511.1
	Value 14: .\A7_data\data\bloom\m1b2.dat
		.\A7_data\data\bloom\m1b2.dat  Value 1: 511.1
	Value 15: .\A7_data\data\bloom\m2b1.dat
		.\A7_data\data\bloom\m2b1.dat  Value 1: 511.1
	Value 16: .\A7_data\data\bloom\m2b2.dat
		.\A7_data\data\bloom\m2b2.dat  Value 1: 511.1
	Value 17: .\A7_data\data\bloom\m3b1.dat
		.\A7_data\data\bloom\m3b1.dat  Value 1: 511.1
	Value 18: .\A7_data\data\bloom\m3b2.dat
		.\A7_data\data\bloom\m3b2.dat  Value 1: 511.1

   COMMAND LINE: StringReader3 qmast.dat

*/
