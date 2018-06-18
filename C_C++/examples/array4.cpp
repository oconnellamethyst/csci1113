/*     FILE: array4.cpp     */

/*
   An array with bounds checking.
   
   A copy constructor has been added.
*/
#include <iostream>
#include <cstdlib>
using namespace std;

class safe_array{
   int * ptr;
   int size;
public:
   safe_array(int length);
   safe_array(const safe_array & param);
   ~safe_array( ){ delete [ ] ptr;}
   int &operator[ ](int index);
   
   int getSize( ) const;
};

safe_array::safe_array(int length)
{
   ptr = new int[size=length];
}

safe_array::safe_array(const safe_array & param)
{
   ptr = new int[size=param.size];
   for(int i=0; i<size; i++)
     ptr[i] = param.ptr[i];
}

int & safe_array::operator[ ](int index)
{
   if (index < 0 || size-1 < index)
     abort( );
   return ptr[index];
}

int safe_array::getSize( ) const
{
   return size;
}

safe_array func2(safe_array ar)   // copy constructor protects us here
{
  for(int i=0; i<ar.getSize( ); i++)
    ar[i] = ar[i] * 22;
    
  return ar;
}

int main( )
{
  int i;
  safe_array ar(5), ar2(3);

  for(i=0; i<ar.getSize( ); i++)
     ar[i] = i;

  for(i=0; i<ar.getSize( ); i++)   // display array ar
     cout << "ar[" << i << "] = " << ar[i] << endl;
  cout << endl;

  ar2 = func2(ar);

  for(i=0; i<ar.getSize( ); i++)   // display array ar
     cout << "ar[" << i << "] = " << ar[i] << endl;
  cout << endl;

  for(i=0; i<ar2.getSize( ); i++)   // display array ar
     cout << "ar2[" << i << "] = " << ar2[i] << endl;

  return 0;
}


/*    OUTPUT: array4.cpp

	ar[0] = 0
	ar[1] = 1
	ar[2] = 2
	ar[3] = 3
	ar[4] = 4
	
	ar[0] = 0
	ar[1] = 1
	ar[2] = 2
	ar[3] = 3
	ar[4] = 4
	
	ar2[0] = 0
	ar2[1] = 22
	ar2[2] = 44
	ar2[3] = 66
	ar2[4] = 88

*/
