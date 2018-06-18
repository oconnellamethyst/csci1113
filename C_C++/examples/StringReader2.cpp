/*     FILE: StringReader2.cpp     */

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
    getline(inStream,x);
    for(i=0; !inStream.fail( ) ; i++)
    {
      cout << "Value " << i+1 << ": "
           << x << endl;
    getline(inStream,x);
    }
    
    inStream.close( );
  }
  else
    cout << "Unable to open file: " << argv[1];
    
  return 0;
}


/*    OUTPUT: StringReader2.cpp

	Value 1:  511.10000
	Value 2:  500.11134
	Value 3:  599.99988
	Value 4:  500.39995
	Value 5:  511.45678
	Value 6:  508.97565
	Value 7:  508.65432
	Value 8:  505.99989
	Value 9:  496.99989
	Value 10:  506.65999
	Value 11:  511.10000
	Value 12:  500.11134
	Value 13:  599.99988
	Value 14:  500.39995
	Value 15:  511.45678
	Value 16:  508.97565
	Value 17:  508.65432
	Value 18:  505.99989
	Value 19:  496.99989
	Value 20:  506.65999
	Value 21:  511.10000
	Value 22:  500.11134
	Value 23:  599.99988
	Value 24:  500.39995
	Value 25:  511.45678
	Value 26:  508.97565
	Value 27:  508.65432
	Value 28:  505.99989
	Value 29:  496.99989
	Value 30:  506.65999

   COMMAND LINE: StringReader2 floats.dat

	Value 1: #include <fstream>
	Value 2: #include <iostream>
	Value 3: 
	Value 4: using namespace std;
	Value 5: 
	Value 6: int main(int argc, char *argv[ ])
	Value 7: {
	Value 8:   string x;
	Value 9:   
	Value 10:   int i;
	Value 11:   
	Value 12:   ifstream inStream;
	Value 13:   
	Value 14:   inStream.open(argv[1]);
	Value 15:   
	Value 16:   if (inStream.good( )){          
	Value 17:     getline(inStream,x);
	Value 18:     for(i=0; !inStream.fail( ) ; i++)
	Value 19:     {
	Value 20:       cout << "Value " << i+1 << ": "
	Value 21:            << x << endl;
	Value 22:     getline(inStream,x);
	Value 23:     }
	Value 24:     
	Value 25:     inStream.close( );
	Value 26:   }
	Value 27:   else
	Value 28:     cout << "Unable to open file: " << argv[1];
	Value 29:     
	Value 30:   return 0;
	Value 31: }

   COMMAND LINE: StringReader2 StringReader2.cpp

*/
