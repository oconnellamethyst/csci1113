/*     FILE: array1.cpp     */

/*
   An array with bounds checking.
   
   new and delete are used in the constructor and destructor.
   
   operator[ ] is overloaded.
*/
#include <iostream>
#include <cstdlib>
using namespace std;

class safe_array{
   int * ptr;
   int size;
public:
   safe_array(int length);
   ~safe_array( ){ delete [ ] ptr;}
   int &operator[ ](int index);
};

safe_array::safe_array(int length)
{
   ptr = new int[size=length];
}

int & safe_array::operator[ ](int index)
{
   if (index < 0 || size-1 < index)
     abort( );
   return ptr[index];
}

int main( )
{
  int i;
  safe_array ar(5);

  for(i=0; i<5; i++)
     ar[i] = i;

  for(i=0; i<5; i++)   // display array ar
     cout << "ar[" << i << "] = " << ar[i] << endl;

  for(i=0; i<6; i++)   // force an abort, index invalid
     ar[i] = i;

  return 0;
}


/*    OUTPUT: array1.cpp

	ar[0] = 0
	ar[1] = 1
	ar[2] = 2
	ar[3] = 3
	ar[4] = 4
	
	abnormal program termination

*/
