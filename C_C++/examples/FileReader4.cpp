/*     FILE: FileReader4.cpp     */

#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char *argv[ ])
{
  string buffer;
  int i1, i2, i3;
  
  ifstream inStream;
  istringstream stringStream;
  
  if(argc > 1){
    inStream.open(argv[1]);
  
    if (inStream.good( )){          
      while( getline(inStream,buffer))
      {
        stringStream.str(buffer);
        stringStream >> i1 >> i2;
        if(stringStream){
          cout << "Read pair: " << i1
                << "  " << i2 << endl;
        }
        else{
          stringStream.clear( );
          i3 = i1;
          cout << "Read one: " << i3 << endl;
        }
        stringStream.clear( );
      }
    
      inStream.close( );
    }
    else
      cout << "Unable to open file: " << argv[1];
  }
  else
    cout << "usage: FileReader3 <input file> \n";
  return 0;
}


/*    OUTPUT: FileReader4.cpp

	Read pair: 10  5
	Read one: 3
	Read one: 4
	Read one: 5
	Read one: 6
	Read one: 7
	Read pair: 10  10
	Read one: 3
	Read one: 4
	Read one: 5
	Read one: 6
	Read one: 7

   COMMAND LINE: FileReader4 DISTANCE.DAT

	Read pair: 10  5
	Read one: 8
	Read one: 9
	Read one: 10
	Read pair: 15  20
	Read one: 1
	Read one: 2

   COMMAND LINE: FileReader4 DISTANCE3.DAT

	Unable to open file: FISH.DAT
   COMMAND LINE: FileReader4 FISH.DAT

*/
