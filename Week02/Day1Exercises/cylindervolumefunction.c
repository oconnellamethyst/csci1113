/*     FILE: cylindervolumefunction.c     */

/*
   Gets the value of a cylinder using a function.
*/
#include <stdio.h>
#include <math.h>

float volumeFun(float radius, float height);

int main( )
{
  
  float radius, height, volume; // Defines the radius, the height, and the volume

  printf("Enter the radius of the cylinder: "); // Gets the values of the radius and height
  scanf("%f", &radius);
  printf("Enter the height of the cylinder: ");
  scanf("%f", &height);
  
  volume = volumeFun(radius, height); // Uses the function to get the volume
  
  printf("The volume is : %.2f\n", volume); // Prints the volume

  return 0;
}
float volumeFun(float radius, float height)
{
  float volume;
  volume = M_PI * radius * radius * height; // Uses the radius and height to get the volume
  return volume;
}


/*    OUTPUT: cylindervolumefunction.c

	Enter the radius of the cylinder: 7
	Enter the height of the cylinder: 8
	The volume is : 1231.50

*/
