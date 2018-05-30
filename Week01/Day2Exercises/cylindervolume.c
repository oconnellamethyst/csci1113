/*     FILE: cylindervolume.c     */

/*
   Gets the value of a cylinder.
*/
#include <stdio.h>
#include <math.h>

int main( )
{
  
  float radius, height, volume; // Defines the radius, the height, and the volume

  printf("Enter the radius of the cylinder: "); // Gets the values of the radius and height
  scanf("%f", &radius);
  printf("Enter the height of the cylinder: ");
  scanf("%f", &height);
  
  volume = M_PI * radius * radius * height; // Uses the radius and height to get the volume
  
  printf("The volume is : %.2f\n", volume); // Prints the volume

  return 0;
}


/*    OUTPUT: cylindervolume.c

	Enter the radius of the cylinder: 3
	Enter the height of the cylinder: 5
	The volume is : 141.37

*/
