/*     FILE: Shapes4Test4.cpp     */

/*  Run-Time type determination - using the typeinfo class */
#include <iostream>
#include <typeinfo>
using std::cout;
using std::cin;
using std::endl;

#include "shapes4/point.h"
#include "shapes4/circle.h"
#include "shapes4/triangle.h"

int main( )
{
   point *ptr;          // pointer to a point
   circle *cptr;          // pointer to a point
   char choice;
    
   cout << "Enter a 'p' for a point or a 'c' for a circle: ";
   cin >> choice;
 
   if (choice == 'c')           // Object created is not known until
     ptr = new circle(1,2,3.5); // ... run-time.
   else
     ptr = new point(7,5);


   ptr->move(3,3);

   cout << "ptr points to  = ";  // print( ) prints what it is actually
   ptr->print(cout);             // ... pointing to.
   cout << endl;
   
   
   cout << "The type is: " << typeid(*ptr).name( ) << endl;
}


/*    OUTPUT: Shapes4Test4.cpp

	Enter a 'p' for a point or a 'c' for a circle: c
	ptr points to  = C(3,3)  r = 3.5
	The type is: 6circle

	Enter a 'p' for a point or a 'c' for a circle: p
	ptr points to  = (3,3)
	The type is: 5point

*/
