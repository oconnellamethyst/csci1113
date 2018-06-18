/*     FILE: Shapes6Test.cpp     */

/*  How to make a "virtual" friend function.

    The put-to operator << that allows run-time 
    type determination.
*/
#include <iostream>
using std::cout;
using std::endl;

#include "shapes6/point.h"
#include "shapes6/circle.h"
#include "shapes6/triangle.h"

int main( )
{
    shape *ptr;            // pointer to a shape
    
    point p(7,5);          // create a couple of shapes
    circle c(1,2,3.5);

    cout << "\nShapes:" << endl;
    cout << "c = " << c << endl; // Display the shapes
    cout << "p = " << p << endl;

    ptr = &p;   // ptr tracks a point
    ptr->move(3,3);
                                 // run-time type determination of <<
    cout << "ptr points to  = " << *ptr << endl;
    
    ptr = &c;           // ptr tracks a circle, since a circle
    ptr->move(4,4);   // ... is-a point
                                 // run-time type determination of <<
    cout << "ptr points to  = " << *ptr << endl;
    
}


/*    OUTPUT: Shapes6Test.cpp

	
	Shapes:
	c = C(1,2)  r = 3.5
	p = (7,5)
	ptr points to  = (3,3)
	ptr points to  = C(4,4)  r = 3.5

*/
