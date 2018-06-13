/*     FILE: union.c     */

/* A union that be either an array of
   ints or an array of floats, as
   needed.                             */

#include <stdio.h>
union intFloatArray{
  int iarray[5];
  float farray[5];
};

int main( )
{
  union intFloatArray ar;
  int i;

  for(i=0; i<5; i++)
    ar.iarray[i] = i*11;

  for(i=0; i<5; i++)
    printf("int[%d] = %d\n", i, ar.iarray[i]);

  for(i=0; i<5; i++)
    ar.farray[i] = i*1.1;

  for(i=0; i<5; i++)
    printf("float[%d] = %f\n", i, ar.farray[i]);

  printf("size of union int_float_array = %d\n",
                    sizeof(union intFloatArray));
  printf("size of ar = %d\n",sizeof(ar));

  return 0;
}


/*    OUTPUT: union.c

	int[0] = 0
	int[1] = 11
	int[2] = 22
	int[3] = 33
	int[4] = 44
	float[0] = 0.000000
	float[1] = 1.100000
	float[2] = 2.200000
	float[3] = 3.300000
	float[4] = 4.400000
	size of union int_float_array = 20
	size of ar = 20

*/
