/*     FILE: StringReader.cpp     */

#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char *argv[ ])
{
  string x;
  
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


/*    OUTPUT: StringReader.cpp

	Value 1: 511.10000
	Value 2: 500.11134
	Value 3: 599.99988
	Value 4: 500.39995
	Value 5: 511.45678
	Value 6: 508.97565
	Value 7: 508.65432
	Value 8: 505.99989
	Value 9: 496.99989
	Value 10: 506.65999
	Value 11: 511.10000
	Value 12: 500.11134
	Value 13: 599.99988
	Value 14: 500.39995
	Value 15: 511.45678
	Value 16: 508.97565
	Value 17: 508.65432
	Value 18: 505.99989
	Value 19: 496.99989
	Value 20: 506.65999
	Value 21: 511.10000
	Value 22: 500.11134
	Value 23: 599.99988
	Value 24: 500.39995
	Value 25: 511.45678
	Value 26: 508.97565
	Value 27: 508.65432
	Value 28: 505.99989
	Value 29: 496.99989
	Value 30: 506.65999

   COMMAND LINE: StringReader floats.dat

	Value 1: #include
	Value 2: <fstream>
	Value 3: #include
	Value 4: <iostream>
	Value 5: using
	Value 6: namespace
	Value 7: std;
	Value 8: int
	Value 9: main(int
	Value 10: argc,
	Value 11: char
	Value 12: *argv[
	Value 13: ])
	Value 14: {
	Value 15: string
	Value 16: x;
	Value 17: int
	Value 18: i;
	Value 19: ifstream
	Value 20: inStream;
	Value 21: inStream.open(argv[1]);
	Value 22: if
	Value 23: (inStream.good(
	Value 24: )){
	Value 25: inStream
	Value 26: >>
	Value 27: x;
	Value 28: for(i=0;
	Value 29: !inStream.fail(
	Value 30: )
	Value 31: ;
	Value 32: i++)
	Value 33: {
	Value 34: cout
	Value 35: <<
	Value 36: "Value
	Value 37: "
	Value 38: <<
	Value 39: i+1
	Value 40: <<
	Value 41: ":
	Value 42: "
	Value 43: <<
	Value 44: x
	Value 45: <<
	Value 46: endl;
	Value 47: inStream
	Value 48: >>
	Value 49: x;
	Value 50: }
	Value 51: inStream.close(
	Value 52: );
	Value 53: }
	Value 54: else
	Value 55: cout
	Value 56: <<
	Value 57: "Unable
	Value 58: to
	Value 59: open
	Value 60: file:
	Value 61: "
	Value 62: <<
	Value 63: argv[1];
	Value 64: return
	Value 65: 0;
	Value 66: }

   COMMAND LINE: StringReader StringReader.cpp

*/
