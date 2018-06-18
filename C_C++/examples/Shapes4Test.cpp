/*     FILE: Shapes4Test.cpp     */

/*  Classes point and circle are related in such a way that a 
    circle "is-a" point with a radius.  Since a circle is-a 
    point, it can be treated as a point.
    
    To allow for run-time determination of the appropriate method
    for the object referenced by a base class pointer a function
    must be declared "virtual".  This causes C++ to handle the 
    pointer in such a way that the appropriate method is called.
    
    The code that uses the classes is the same, but in the classes
    themselves methods are declared virtual.
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
    
    point p(7,5);          // create a couple of shapes
    circle c(1,2,3.5);

    cout << "\nShapes:" << endl;
    cout << "c = " << c << endl; // Display the shapes
    cout << "p = " << p << endl;

    ptr = &p;   // ptr tracks a point
    ptr->move(3,3);

    cout << "ptr points to  = ";
    ptr->print(cout);
    cout << endl;
    
    ptr = &c;           // ptr tracks a circle, since a circle
    ptr->move(4,4);   // ... is-a point
    cout << "ptr points to  = ";
    ptr->print(cout);
    cout << endl;
    
    cout << "\nShapes:" << endl;
    cout << "c = " << c << endl; // Display the shapes
    cout << "p = " << p << endl;

}


/*    OUTPUT: Shapes4Test.cpp

	
	Shapes:
	c = C(1,2)  r = 3.5
	p = (7,5)
	ptr points to  = (3,3)
	ptr points to  = C(4,4)  r = 3.5
	
	Shapes:
	c = C(4,4)  r = 3.5
	p = (3,3)

*/
