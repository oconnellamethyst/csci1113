/*     FILE: array3.cpp     */

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

void func(safe_array ar, int number)   // copy constructor protects us here
{
  for(int i=0; i<number; i++)
    ar[i] = 22;
}

int main( )
{
  int i;
  safe_array ar(5);

  for(i=0; i<5; i++)
     ar[i] = i;

  for(i=0; i<5; i++)   // display array ar
     cout << "ar[" << i << "] = " << ar[i] << endl;

  func(ar,5);

  for(i=0; i<5; i++)   // display array ar
     cout << "ar[" << i << "] = " << ar[i] << endl;

  return 0;
}


/*    OUTPUT: array3.cpp

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

*/
