/*     FILE: Shapes2Test.cpp     */

/*  Classes triangle and circle are using existing class point.

    triangle "has-a" set of points that are vertices.
    circle "is-a" point with a radius.

*/
#include <iostream>

#include "shapes2/point.h"
#include "shapes2/circle.h"
#include "shapes2/triangle.h"

int main( )
{
    point p(7,5);          // Build some shapes
    triangle t(1,2,3,4,1,6);
    circle c(1,2,3.5);

    cout << "\nShapes." << endl;
    cout << "c = " << c << endl; // Display the shapes
    cout << "t = " << t << endl;
    cout << "p = " << p << endl;

    c = circle(p,1.5);   

    cout << "c = " << c << endl;
    
    circle c2(c);      // Exercise some Circle methods

    p = point(3,2);
    c.setCenter(p);
    c.setRadius(3.2);
    
    cout << "\nCircles." << endl;
    cout << "c = " << c << endl;         // Display exercise results
    cout << "c2 = " << c2 << endl;
    
    cout << "\nBuild c3 from c and c2." << endl;
    circle c3(c);
    c3.setCenter(c2);
    cout << "c3 = " << c3 << endl;

    cout << "\nAdjust c and c2." << endl;
    c.setCenter(1,1);
    c2.setCenter(0,0);
    cout << "c = " << c << endl;
    cout << "c2 = " << c2 << endl;
    cout << "c3 = " << c3 << endl;
    
    c3.setCenter(3,3);
    
    cout << "\nAdjust c3." << endl;
    cout << "c = " << c << endl;
    cout << "c2 = " << c2 << endl;
    cout << "c3 = " << c3 << endl;

}


/*    OUTPUT: Shapes2Test.cpp

	
	Shapes.
	c = C(1,2)  r = 3.5
	t = (1,2) (3,4) (1,6)
	p = (7,5)
	c = C(7,5)  r = 1.5
	
	Circles.
	c = C(3,2)  r = 3.2
	c2 = C(7,5)  r = 1.5
	
	Build c3 from c and c2.
	c3 = C(7,5)  r = 3.2
	
	Adjust c and c2.
	c = C(1,1)  r = 3.2
	c2 = C(0,0)  r = 1.5
	c3 = C(7,5)  r = 3.2
	
	Adjust c3.
	c = C(1,1)  r = 3.2
	c2 = C(0,0)  r = 1.5
	c3 = C(3,3)  r = 3.2

*/
