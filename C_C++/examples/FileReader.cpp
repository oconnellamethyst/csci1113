/*     FILE: FileReader.cpp     */

#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char *argv[ ])
{
  int i1, i2;
  
  int i;
  
  ifstream inStream;
  
  inStream.open(argv[1]);
  
  inStream >> i1 >> i2;
  
  for(i=0; !inStream.eof( ) ; i++)
  {
    
    cout << "Set " << i+1 << ": "
         << i1 << " " << i2 << endl;
           
    inStream >> i1 >> i2;
  }
   
  inStream.close( );

  return 0;
}


/*    OUTPUT: FileReader.cpp

	Set 1: 2 40
	Set 2: 3 80
	Set 3: 6 50
	Set 4: 1 15
	Set 5: 2 70

   COMMAND LINE: FileReader TEMPER.DAT

	Set 1: 2 40
	Set 2: 2 50
	Set 3: 2 60
	Set 4: 3 70
	Set 5: 3 80
	Set 6: 3 90
	Set 7: 6 30
	Set 8: 6 40
	Set 9: 6 50
	Set 10: 1 15
	Set 11: 1 16
	Set 12: 1 17
	Set 13: 2 70
	Set 14: 2 80

   COMMAND LINE: FileReader TEMPER2.DAT

*/
