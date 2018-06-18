/*     FILE: FileReader3.cpp     */

#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char *argv[ ])
{
  string buffer;
  
  ifstream inStream;
  
  if(argc > 1){
    inStream.open(argv[1]);
  
    if (inStream.good( )){          
      while( getline(inStream,buffer))
      {
    
        cout << "Read: "
             << buffer << endl;
           
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


/*    OUTPUT: FileReader3.cpp

	Read: 10 5
	Read: 3
	Read: 4
	Read: 5
	Read: 6
	Read: 7
	Read: 10 10
	Read: 3
	Read: 4
	Read: 5
	Read: 6
	Read: 7

   COMMAND LINE: FileReader3 DISTANCE.DAT

	Read: 10 5
	Read: 8
	Read: 9
	Read: 10
	Read: 15 20
	Read: 1
	Read: 2

   COMMAND LINE: FileReader3 DISTANCE3.DAT

	Unable to open file: FISH.DAT
   COMMAND LINE: FileReader3 FISH.DAT

*/
