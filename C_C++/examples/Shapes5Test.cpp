/*     FILE: Shapes5Test.cpp     */

/*  Class shape has been added to the point and circle hierarchy.
    They are related in such a way that a shape is the base class
    of both point and circle. Clas point and class circle both 
    exhibit the "is-a" relationship with shape. 
    
    In addition they exhibit the "is-a" relationship with point, 
    since a circle "is-a" point with a radius.
    
    Note: The shape class contains method declarations with no 
          definition. These methods are referred to as "pure virtual" 
          methods.  Pure virtual methods imply that a definition 
          will be required eventually but as yet, are not defined.  
          This impacts the class containing the pure virtual methods 
          by making the class "abstract" i.e., you cannot create an 
          object of that class. 
          
          You can however still have references of that type.
*/
#include <iostream>
using std::cout;
using std::endl;

#include "shapes5/point.h"
#include "shapes5/circle.h"
#include "shapes5/triangle.h"

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


/*    OUTPUT: Shapes5Test.cpp

	
	Shapes:
	c = C(1,2)  r = 3.5
	p = (7,5)
	ptr points to  = (3,3)
	ptr points to  = C(4,4)  r = 3.5
	
	Shapes:
	c = C(4,4)  r = 3.5
	p = (3,3)

*/
