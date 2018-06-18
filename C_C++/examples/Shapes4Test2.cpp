/*     FILE: Shapes4Test2.cpp     */

/*  Classes point and circle are related in such a way that a 
    circle "is-a" point with a radius.  Since a circle is-a 
    point, it can be treated as a point.
    
    To allow for run-time determination of the appropriate method
    for the object referenced by a base class pointer a function
    must be declared "virtual".  This causes C++ to handle the 
    pointer in such a way that the appropriate method is called.
    
    The code that uses the classes is the same, but in the classes
    themselves methods are declared virtual.
    
    Note:  The object referred to by the pointer cannot be 
           determined until run-time. This is polymorphism.
*/
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "shapes4/point.h"
#include "shapes4/circle.h"
#include "shapes4/triangle.h"

int main( )
{
   point *ptr;          // pointer to a point
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
}


/*    OUTPUT: Shapes4Test2.cpp

	Enter a 'p' for a point or a 'c' for a circle: c
	ptr points to  = C(3,3)  r = 3.5

*/
