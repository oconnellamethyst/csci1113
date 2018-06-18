/*     FILE: ShapesTest2.cpp     */

/*  Classes triangle and circle are using existing class point.

    triangle "has-a" set of points that are vertices.
    circle "is-a" point with a radius.

*/
#include <iostream>
using namespace std;

#include "point.h"
#include "circle.h"
#include "triangle.h"
 
int main( )
{
  point p(7,5);          // Build some shapes
  triangle t(1,2,3,4,1,6);
  circle c(1,2,3.5);

  cout << c << endl; // Display the shapes
  cout << t << endl;
  cout << p << endl;

  c = circle(p,1.5);   

  cout << c << endl;
}


/*    OUTPUT: ShapesTest2.cpp

	C(1,2)  r = 3.5
	(1,2) (3,4) (1,6)
	(7,5)
	C(7,5)  r = 1.5

*/
