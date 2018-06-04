/*     FILE: FileIO_2.c     */

/* Basic output to a file using fprintf( ) */
#include <stdio.h>

int main( )
{
  FILE *fptr;
  int x = 7;
  double y =7.25;

  fptr = fopen("FileIO_2.out","w");

  fprintf(fptr,"This data will be written to a file.\n");
  fprintf(fptr,"x = %d, y = %f\n", x, y);

  fclose(fptr);

  return 0;
}


/*    OUTPUT: FileIO_2.c


*/


/*   OUTPUT: FileIO_2.out

	This data will be written to a file.
	x = 7, y = 7.250000

*/