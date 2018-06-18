/*     FILE: array7.cpp     */

/*
   An array with bounds checking.
   
   Assignment creates duplicate and deletes old
   array of values. (Memory leak.)
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
   safe_array &operator=(const safe_array & operand2);
   
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

safe_array & safe_array::operator=(const safe_array & operand2)
{
   if(this != &operand2){
     delete [ ] ptr;
     ptr = new int[size=operand2.size];
     for(int i=0; i<size; i++)
       ptr[i] = operand2.ptr[i];
   }
   return *this;
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

int main( )
{
  int i;
  safe_array ar(5);
  safe_array ar2(7);

  for(i=0; i<ar.getSize( ); i++)
     ar[i] = i;

  for(i=0; i<ar2.getSize( ); i++)
     ar2[i] = i*10;

  for(i=0; i<ar.getSize( ); i++)   // display array ar
     cout << "ar[" << i << "] = " << ar[i] << endl;
  cout << endl;

  for(i=0; i<ar2.getSize( ); i++)   // display array ar2
     cout << "ar2[" << i << "] = " << ar2[i] << endl;
  cout << endl;

  ar2 = ar;

  for(i=0; i<ar2.getSize( ); i++)   // display array ar2   
    cout << "ar2[" << i << "] = " << ar2[i] << endl;
  cout << endl;

  for(i=0; i<ar.getSize( ); i++)   // alter array ar   
    ar[i] = i*11;

  for(i=0; i<ar.getSize( ); i++)   // display array ar
     cout << "ar[" << i << "] = " << ar[i] << endl;
  cout << endl;

  for(i=0; i<ar2.getSize( ); i++)   // display array ar2   
    cout << "ar2[" << i << "] = " << ar2[i] << endl;

  return 0;
}


/*    OUTPUT: array7.cpp

	ar[0] = 0
	ar[1] = 1
	ar[2] = 2
	ar[3] = 3
	ar[4] = 4
	
	ar2[0] = 0
	ar2[1] = 10
	ar2[2] = 20
	ar2[3] = 30
	ar2[4] = 40
	ar2[5] = 50
	ar2[6] = 60
	
	ar2[0] = 0
	ar2[1] = 1
	ar2[2] = 2
	ar2[3] = 3
	ar2[4] = 4
	
	ar[0] = 0
	ar[1] = 11
	ar[2] = 22
	ar[3] = 33
	ar[4] = 44
	
	ar2[0] = 0
	ar2[1] = 1
	ar2[2] = 2
	ar2[3] = 3
	ar2[4] = 4

*/
