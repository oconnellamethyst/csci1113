/*     FILE: assignment4oconnell.c     */

/*
   Prints a table that shows Olympic running distances in meters, and also, those meters converted into different units of length: kilometers, yards, and miles
*/
#include <stdio.h>

float kmConv(int meters); // Function that takes meters and returns it's conversion to kilometers
float yardConv(int meters); // Function that takes meters and returns it's conversion to yards
float mileConv(int meters); // Function that takes meters and returns it's conversion to miles
int linePrint(int meters); // Uses kmConv, yardConv and mileConv functions to print a nice formatted line with this data for the table

int main( ) // Main function, prints the whole table
{
  printf("\n  Table of Olympic running distances.\n"); // These printf functions print the formatted headers for the table
  printf("  ===================================\n");
  printf("  Meters   Kilometers   Yards   Miles\n");
  printf("  ------   ----------  ------   -----\n");
  linePrint(100); // These linePrint functions print the actual data in the table
  linePrint(200);
  linePrint(400);
  linePrint(800);
  linePrint(1500);
  return 0;
}
int linePrint(int meters) // Uses kmConv, yardConv and mileConv functions to print a nice formatted line with this data for the table
{
  printf("%8d %12.7f %7.1f %7.3f\n",meters,kmConv(meters),yardConv(meters),mileConv(meters));
  return meters; // "Saving planes": The return value of this function is not used, it returns the input of the function
}
float kmConv(int meters) // Function that takes meters and returns it's conversion to kilometers
{
  float kilometers;
  kilometers = 0.001 * (float)meters;
  return kilometers;
}
float yardConv(int meters) // Function that takes meters and returns it's conversion to yards
{
  float yards;
  yards = 1.094 * (float)meters;
  return yards;
}
float mileConv(int meters) // Function that takes meters and returns it's conversion to miles
{
  float miles;
  miles = 0.0006215 * (float)meters;
  return miles; 
}
/*    OUTPUT: assignment4oconnell.c

  Table of Olympic running distances.
  ===================================
  Meters   Kilometers   Yards   Miles
  ------   ----------  ------   -----
     100    0.1000000   109.4   0.062
     200    0.2000000   218.8   0.124
     400    0.4000000   437.6   0.249
     800    0.8000000   875.2   0.497
    1500    1.5000000  1641.0   0.932
  
*/
