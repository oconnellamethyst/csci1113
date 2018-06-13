/*     FILE: union2.c     */

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

  map.i = 7;

  printf("int = %d\n", map.i);

  for(i=0; i<4; i++)
    printf("char[%d] = %X\n", i, map.byte[i]);

  return 0;
}


/*    OUTPUT: union2.c

	int = 7
	char[0] = 7
	char[1] = 0
	char[2] = 0
	char[3] = 0

*/
