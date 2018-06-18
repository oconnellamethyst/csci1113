/*     FILE: assignment6oconnell.c     */

/*
   Takes a file from the command line with a bunch of numbers in it and computes the Standard Devation, the Average, and the biggest number
*/
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(int argc, char *argv[])
{
  FILE *numbers;
  numbers = fopen(argv[1], "r"); // Reads the second argument passed in, which should be a file name
  
  int hold;
  int holdGreat = INT_MIN; // Starts with the smallest number so that there is no possible smaller number
  int holdSquared = 0;
  int holdSum = 0;
  int n = 0;
  double avg, stdDev;  
  
  if(numbers != NULL){
    while(fscanf(numbers,"%d", &hold) == 1){
    	if(hold > holdGreat){ // holdGreat is always holding the greatest number. It's initialized as the smallest possible number, INT_MIN
    		holdGreat = hold;
		}
		else{
			; // Do nothing
		}
	    
		holdSquared += (hold * hold); // holdSquared is holding the addition of all the stuffs squared
		holdSum += hold; // A running sum
		n++;
	}
	}
	else{
		printf("Unable to open file.\n");
	}
    
	stdDev = sqrt(((double)(n*holdSquared - (holdSum*holdSum)))/((double)(n*(n-1)))); // Standard deviation calculation
	avg = ((double)holdSum)/((double)n); // Average calculation
	
	printf("The highest value is %d\n",holdGreat); // Outputs
	printf("The average is %.2f\n",avg);
	printf("The Standard Deviation is %.6f\n",stdDev);
	
    fclose(numbers); 
  
  
  return 0;
}

/*    OUTPUT: assignment6oconnell.c
assignment6oconnell test1.dat

  The highest value is 9
  The average is 6.60
  The Standard Deviation is 2.073644
  
*/
