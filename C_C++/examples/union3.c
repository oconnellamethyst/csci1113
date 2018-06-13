/*     FILE: union3.c     */

/* A union that allows byte-wise inspection of
   a storage location.                             */

#include <stdio.h>
union intFloatArrayByte{
  int i;
  float f;
  unsigned char byte[4];
};

int main( )
{
  union intFloatArrayByte map;
  int i;

  map.f = 7.0;

  printf("float = %f\n", map.f);

  for(i=0; i<4; i++)
    printf("char[%d] = %X\n", i, map.byte[i]);

  return 0;
}


/*    OUTPUT: union3.c

	float = 7.000000
	char[0] = 0
	char[1] = 0
	char[2] = E0
	char[3] = 40

*/
