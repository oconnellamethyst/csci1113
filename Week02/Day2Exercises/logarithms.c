/*     FILE: logarithms.c     */

/*
   Gets the natural log and the log base 10 of the number 75, checks using the power function to show that it is correct.
*/
#include <stdio.h>
#include <math.h>

int main( )
{
  float number = 75;
  float natLog, comLog;
  float inverNatLog, inverComLog;

  natLog = log(number);
  comLog = log10(number);
  inverNatLog = exp(natLog);
  inverComLog = pow(10,comLog);
  
  printf("The natural log of %f is %f, and the common log of %f is %f.\n",number,natLog,number,comLog);
  
  if (inverNatLog == number) // Because of the loss of precision of a computer, and e being an irrational number, even though mathematically it is equivalent, it is not equivalent in C.
  // If I wanted it to be more of a human approximation, I would replace if(inverNatLog == number) with if((int)inverNatLog == (int)number), however, this would come with a loss of precision
  {
  	printf("e to the power of the natural log of %f is %f, which equals %f.\n",number,inverNatLog,number);
  }
  else
  {
  	printf("e to the power of the natural log of %f is %f, which does not quite equal %f.\n",number,inverNatLog,number);
  }
  
  if (inverComLog == number)
  {
  	printf("10 to the power of the common log of %f is %f, which equals %f.\n",number,inverComLog,number);
  }
  else
  {
  	printf("10 to the power of the common log of %f is %f, which does not quite equal %f.\n",number,inverComLog,number);
  }
  
  return 0;
}

/*    OUTPUT: logarithms.c

    The natural log of 75.000000 is 4.317488, and the common log of 75.000000 is 1.875061.
    e to the power of the natural log of 75.000000 is 75.000008, which does not quite equal 75.000000.
    10 to the power of the common log of 75.000000 is 75.000000, which equals 75.000000.
  
*/
