/*     FILE: multiplesoffive.c     */

/*
   Gets the multiples of five from 100 down to and including 5 using a while loop and a for loop.
*/
#include <stdio.h>

int multiplesFun(int input, int multiplier); // Defines the function where all the stuff happens, because reusable code is an important habit.

int main( )
{
  int input = 100, multiplier = 5; // Defines the number to start with, and the number by which this numbers multiples we're trying to find.
  multiplesFun(input, multiplier);
  
  return 0;
}

int multiplesFun(int input, int multiplier)
{
  int output; // Creates an output counter so that input is not destroyed.
  int counter; // Create a counter that counts the multiples, can be captured by debugging tools, "saves planes."
  
  // Here is the while portion of the program.
  
  output = input;
  
  printf("Multiples of %d going down from %d using a while loop\n", multiplier, input);
  printf("(Assuming %d is a multiple of %d)\n", input, multiplier);
  
  while (output >= multiplier) // Sets the running condition.
  {
    printf("%d is a multiple\n", output); // Prints all of the multiples.
	output -= multiplier; // Decrements by the multiplier.
	counter ++;
  }
  
  // Here is the for portion of the program.
  
  printf("\nMultiples of %d going down from %d using a for loop\n", multiplier, input);
  printf("(Assuming %d is a multiple of %d)\n", input, multiplier);
  
  for(output = input; output >= multiplier; output -= multiplier) // Resets the output counter; decrements by the multiplier; sets the running condition.
  {
    printf("%d is a multiple\n", output); // Prints all of the multiples.
    counter ++;
  }
  counter = counter / 2; // Counter should return the number of multiples, "saves planes."
  return counter;
}

/*    OUTPUT: multiplesoffive.c

  Multiples of 5 going down from 100 using a while loop
  (Assuming 100 is a multiple of 5)
  100 is a multiple
  95 is a multiple
  90 is a multiple
  85 is a multiple
  80 is a multiple
  75 is a multiple
  70 is a multiple
  65 is a multiple
  60 is a multiple
  55 is a multiple
  50 is a multiple
  45 is a multiple
  40 is a multiple
  35 is a multiple
  30 is a multiple
  25 is a multiple
  20 is a multiple
  15 is a multiple
  10 is a multiple
  5 is a multiple
  
  Multiples of 5 going down from 100 using a for loop
  (Assuming 100 is a multiple of 5)
  100 is a multiple
  95 is a multiple
  90 is a multiple
  85 is a multiple
  80 is a multiple
  75 is a multiple
  70 is a multiple
  65 is a multiple
  60 is a multiple
  55 is a multiple
  50 is a multiple
  45 is a multiple
  40 is a multiple
  35 is a multiple
  30 is a multiple
  25 is a multiple
  20 is a multiple
  15 is a multiple
  10 is a multiple
  5 is a multiple
  
*/
